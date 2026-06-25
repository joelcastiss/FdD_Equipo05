# <a name="módulo-de-software"></a>Módulo de Software
## <a name="descripción-general"></a>Descripción General
El módulo de software constituye el núcleo del sistema EcoFresh, permitiendo la adquisición, procesamiento, almacenamiento y visualización de datos ambientales obtenidos desde una refrigeradora inteligente. Su función principal es monitorear las condiciones internas de conservación de alimentos mediante sensores ambientales y estimar un nivel de frescura en tiempo real.

La arquitectura integra un sistema embebido basado en ESP32, una base de datos en la nube mediante Firebase Realtime Database y una aplicación móvil desarrollada en Flutter para la supervisión remota del sistema.

-----
# <a name="componentes-del-sistema"></a>Componentes del Sistema
## <a name="aplicación-móvil-flutter"></a>Aplicación Móvil Flutter
La aplicación móvil proporciona una interfaz gráfica intuitiva para el monitoreo en tiempo real de las condiciones internas de la refrigeradora.
### <a name="funcionalidades"></a>Funcionalidades
- Visualización de temperatura interna.
- Visualización de humedad relativa.
- Monitoreo de concentración equivalente de CO₂ (eCO₂).
- Monitoreo de compuestos orgánicos volátiles totales (TVOC).
- Cálculo y visualización del nivel de frescura.
- Visualización del estado del sistema.
- Comunicación en tiempo real con Firebase Realtime Database.
-----
## <a name="firebase-realtime-database"></a>Firebase Realtime Database
Firebase actúa como intermediario entre el sistema embebido y la aplicación móvil.
### <a name="responsabilidades"></a>Responsabilidades
- Almacenar las lecturas ambientales enviadas por el ESP32.
- Mantener sincronización en tiempo real con la aplicación Flutter.
- Gestionar el almacenamiento de variables del sistema.
- Permitir acceso remoto a los datos desde cualquier dispositivo conectado.
-----
## <a name="sistema-embebido-esp32"></a>Sistema Embebido ESP32
El ESP32 constituye la unidad principal de adquisición de datos.
### <a name="responsabilidades-1"></a>Responsabilidades
- Conectarse a una red WiFi.
- Leer los sensores ambientales.
- Procesar las mediciones obtenidas.
- Calcular el nivel de frescura.
- Enviar los datos a Firebase Realtime Database.
- Controlar el estado de los sistemas de ventilación y refrigeración.
-----
## <a name="sensor-bme280"></a>Sensor BME280
El sensor BME280 proporciona:

- Temperatura ambiental (°C).
- Humedad relativa (%).

Estos parámetros permiten evaluar las condiciones de conservación de los alimentos.

-----
## <a name="sensor-sgp30"></a>Sensor SGP30
El sensor SGP30 proporciona:

- Concentración equivalente de dióxido de carbono (eCO₂).
- Concentración de compuestos orgánicos volátiles (TVOC).

Estas variables permiten detectar cambios en la calidad del aire y posibles procesos de deterioro de los alimentos.

-----
# <a name="cálculo-del-nivel-de-frescura"></a>Cálculo del Nivel de Frescura
El sistema calcula un porcentaje de frescura considerando múltiples variables ambientales.

Se parte de una frescura inicial del 100%.

Posteriormente se aplican penalizaciones según las condiciones detectadas.
## <a name="temperatura"></a>Temperatura
Rango ideal:

- 2°C a 8°C

Si la temperatura supera el rango recomendado, la frescura disminuye proporcionalmente.
## <a name="humedad"></a>Humedad
Rango ideal:

- 60% a 80%

Valores inferiores o superiores al rango óptimo reducen la frescura.
## <a name="concentración-eco₂"></a>Concentración eCO₂
Valor ideal:

- Menor a 600 ppm

Altas concentraciones de CO₂ indican deterioro progresivo de los alimentos.
## <a name="concentración-tvoc"></a>Concentración TVOC
Valor ideal:

- Menor a 10 ppb

La presencia de compuestos orgánicos volátiles puede indicar procesos de maduración o descomposición.

-----
# <a name="flujo-general-de-funcionamiento"></a>Flujo General de Funcionamiento
1. El ESP32 inicia el sistema.
1. Se establece conexión con la red WiFi.
1. Se inicializan los sensores BME280 y SGP30.
1. Se establece conexión con Firebase Realtime Database.
1. Cada 5 segundos se realizan nuevas lecturas ambientales.
1. Se calcula el nivel de frescura.
1. Los datos son enviados a Firebase.
1. Firebase sincroniza la información con la aplicación Flutter.
1. El usuario visualiza los datos actualizados en tiempo real.
-----
# <a name="variables-almacenadas-en-firebase"></a>Variables Almacenadas en Firebase
El sistema registra la siguiente información:

- temperatura
- humedad
- eco2
- tvoc
- frescura
- wifi
- refrigeracion
- ventilador
-----
# <a name="comunicación-entre-componentes"></a>Comunicación Entre Componentes
## <a name="esp32-firebase"></a>ESP32 → Firebase
El ESP32 envía periódicamente:

- Temperatura
- Humedad
- eCO₂
- TVOC
- Frescura
- Estado del sistema
## <a name="firebase-flutter"></a>Firebase → Flutter
Firebase sincroniza automáticamente:

- Lecturas ambientales
- Nivel de frescura
- Estado de conexión
- Estado de los actuadores
-----
# <a name="tecnologías-utilizadas"></a>Tecnologías Utilizadas

|Componente|Tecnología|
| :- | :- |
|Sistema Embebido|ESP32|
|Aplicación Móvil|Flutter|
|Lenguaje Embebido|C++|
|Lenguaje Móvil|Dart|
|Base de Datos|Firebase Realtime Database|
|Comunicación|WiFi|
|Sensor Ambiental|BME280|
|Sensor de Calidad de Aire|SGP30|
|Plataforma IoT|Firebase|

-----
# <a name="conclusión"></a>Conclusión
El módulo de software de EcoFresh integra tecnologías IoT, computación en la nube y desarrollo móvil para proporcionar monitoreo inteligente de alimentos en tiempo real. La arquitectura implementada permite supervisar las condiciones de almacenamiento, calcular indicadores de frescura y visualizar información de manera remota, contribuyendo a mejorar la conservación de productos perecibles y reducir el desperdicio de alimentos.
