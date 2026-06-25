#include <WiFi.h>
#include <Wire.h>

#include <Adafruit_BME280.h>
#include <Adafruit_SGP30.h>

#include <FirebaseESP32.h>

#include "addons/TokenHelper.h"
#include "addons/RTDBHelper.h"


const char* WIFI_SSID = "Wifi";
const char* WIFI_PASSWORD = "Contraseña";


#define API_KEY "AIzaSyB_3npp0IHfAEw1108HJYpawPkwgIdH_FM"

#define DATABASE_URL "ecofresh-e050b-default-rtdb.firebaseio.com"

#define USER_EMAIL "gmail"
#define USER_PASSWORD "contra"


FirebaseData fbdo;
FirebaseAuth auth;
FirebaseConfig config;


Adafruit_BME280 bme;
Adafruit_SGP30 sgp;

unsigned long lastSend = 0;

void setup() {
  Serial.begin(115200);

  Wire.begin(21, 22);

  Serial.println();
  Serial.println("===== ECOFRESH =====");

  // BME280
  if (!bme.begin(0x76)) {
    if (!bme.begin(0x77)) {
      Serial.println("ERROR: BME280 NO DETECTADO");
      while (1)
        ;
    }
  }

  Serial.println("BME280 OK");

  // SGP30
  if (!sgp.begin()) {
    Serial.println("ERROR: SGP30 NO DETECTADO");
    while (1)
      ;
  }

  Serial.println("SGP30 OK");

  // WIFI
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  Serial.print("Conectando WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println();
  Serial.println("WiFi conectado");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());


  config.api_key = API_KEY;
  config.database_url = DATABASE_URL;

  auth.user.email = USER_EMAIL;
  auth.user.password = USER_PASSWORD;

  config.token_status_callback = tokenStatusCallback;

  Firebase.begin(&config, &auth);
  Firebase.reconnectWiFi(true);

  Serial.println("Firebase iniciado");
}

void loop() {
  if (millis() - lastSend >= 5000) {
    lastSend = millis();

    if (!sgp.IAQmeasure()) {
      Serial.println("Error leyendo SGP30");
      return;
    }


    float temperatura = bme.readTemperature();
    float humedad = bme.readHumidity();

    uint16_t eco2 = sgp.eCO2;
    uint16_t tvoc = sgp.TVOC;


    float frescura = 100;

    if (temperatura > 8) {
      frescura -= (temperatura - 8) * 3;
    }

    if (humedad < 60) {
      frescura -= (60 - humedad) * 0.8;
    }

    if (humedad > 80) {
      frescura -= (humedad - 80) * 0.8;
    }

    if (eco2 > 600) {
      frescura -= (eco2 - 600) / 30.0;
    }

    if (tvoc > 10) {
      frescura -= (tvoc - 10) * 0.5;
    }

    if (frescura > 100)
      frescura = 100;

    if (frescura < 0)
      frescura = 0;

    Serial.println();
    Serial.println("========== ECOFRESH ==========");

    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.println(" °C");

    Serial.print("Humedad: ");
    Serial.print(humedad);
    Serial.println(" %");

    Serial.print("eCO2: ");
    Serial.print(eco2);
    Serial.println(" ppm");

    Serial.print("TVOC: ");
    Serial.print(tvoc);
    Serial.println(" ppb");

    Serial.print("Frescura: ");
    Serial.print(frescura);
    Serial.println(" %");


    Firebase.setFloat(
      fbdo,
      "/ecofresh/temperatura",
      temperatura);

    Firebase.setFloat(
      fbdo,
      "/ecofresh/humedad",
      humedad);

    Firebase.setInt(
      fbdo,
      "/ecofresh/eco2",
      eco2);

    Firebase.setInt(
      fbdo,
      "/ecofresh/tvoc",
      tvoc);

    Firebase.setFloat(
      fbdo,
      "/ecofresh/frescura",
      frescura);

    Firebase.setBool(
      fbdo,
      "/ecofresh/wifi",
      true);

    Firebase.setBool(
      fbdo,
      "/ecofresh/online",
      true);

    Firebase.setInt(
      fbdo,
      "/ecofresh/timestamp",
      millis() / 1000);

    Firebase.setBool(
      fbdo,
      "/ecofresh/refrigeracion",
      temperatura > 8);

    Firebase.setBool(
      fbdo,
      "/ecofresh/ventilador",
      eco2 > 600 || tvoc > 10);

    if (fbdo.httpCode() > 0) {
      Serial.println("Datos enviados a Firebase");
    } else {
      Serial.print("Error Firebase: ");
      Serial.println(fbdo.errorReason());
    }
  }
}