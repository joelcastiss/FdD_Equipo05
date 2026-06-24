# Antecedentes de Investigación — Proyecto EcoFresh

---

## Tesis 1: Sistema IoT para Monitoreo de Temperatura y Humedad en Cuartos Fríos

**Universidad Antonio José Camacho — Colombia**

**Autores:** Stivens Bisbicuth Medina, Jorge Armando Quevedo Álvarez y Cristian David Marmolejo Villamizar

### Descripción

Este proyecto se diseñó con la finalidad de proteger insumos sensibles y productos terminados (como masas, levaduras y productos de repostería) evitando que se deshidraten o se deterioren por cambios bruscos en el ambiente, para así pasar de una supervisión pasiva a un control activo, permitiendo que el entorno se regule por sí mismo de manera automatizada.

Este sistema tecnológico fue diseñado para ser instalado en espacios de almacenamiento y conservación, específicamente en dos ambientes de una panadería comercial en Colombia: en el interior de los cuartos fríos y en las vitrinas exhibidoras del mostrador principal.

La constitución tecnológica consiste en el desarrollo de una infraestructura IoT que combina el monitoreo continuo y el control automatizado de la humedad y temperatura en un sistema retroalimentado. El sistema utiliza sensores instalados en dichos espacios para capturar datos simultáneos de temperatura y humedad, y emplea el protocolo de comunicación **MQTT**, seleccionado por su alta eficiencia, para transmitir datos hacia un servidor centralizado. En este servidor, la información se muestra en tiempo real mediante un tablero digital interactivo en pantalla.

La característica principal de esta arquitectura es que el microcontrolador procesa los datos en tiempo real y, mediante algoritmos locales conectados a relés, tiene la capacidad de encender o apagar automáticamente los sistemas de enfriamiento de estos ambientes cuando los parámetros se desvían de los rangos óptimos establecidos.

### Aporte al Proyecto EcoFresh

Esta investigación proporciona el sustento técnico de ingeniería para el sistema de actuación automatizado de la mini-refri. Un dispositivo inteligente no debe limitarse a la observación pasiva, sino que debe ser capaz de corregir el entorno de forma autónoma.

Esta tesis justifica la integración de nuestra **placa Peltier** y los **ventiladores**: utilizando una lógica de control similar, cuando los sensores **BME280** y **SGP30** detecten que las condiciones óptimas de la lechuga se han alterado, el microcontrolador procesará la información y activará de forma autónoma la placa Peltier para enfriar y los ventiladores para la recirculación del aire y disipación térmica, regulando el espacio sin necesidad de intervención manual.

---

## Tesis 2: Monitoring of Temperature in Retail Refrigerated Cabinets Applying IoT

**Universidad de Córdoba — España**

**Autores:** José Ramírez-Faz, Luis Manuel Fernández-Ahumada, Elvira Fernández-Ahumada y Rafael López-Luque

### Descripción

Esta investigación se desarrolló con el objetivo de supervisar de manera ininterrumpida la cadena de frío de alimentos perecederos expuestos para la venta directa al público, como carnes, lácteos y productos frescos. La finalidad principal de este proyecto es garantizar la inocuidad alimentaria (evitando que la comida se contamine o desarrolle bacterias) y prevenir pérdidas económicas por merma de productos.

Al automatizar el registro térmico las 24 horas del día, se eliminan los errores del control manual y se permite que el personal reciba alertas tempranas para actuar de inmediato si ocurre una falla. Este sistema electrónico se diseñó para ser implementado e instalado dentro de espacios comerciales existentes, siendo testeado con éxito en las vitrinas refrigeradas de autoservicio de un supermercado real en la ciudad de Córdoba, España.

El proyecto consiste, técnicamente, en un sistema de telemetría de bajo costo basado en el Internet de las Cosas que utiliza hardware y software de código abierto. Su arquitectura electrónica se compone de:

- Microcontroladores **NodeMCU ESP-8266** con conectividad Wi-Fi integrada
- Sensores digitales de temperatura **DS18B20** colocados en el área de refrigeración

Estos componentes recopilan lecturas de forma continua y las transmiten inalámbricamente hacia la plataforma en la nube **ThingSpeak**, donde los datos se transforman automáticamente en gráficos visuales que el personal puede revisar desde cualquier computadora o celular en tiempo real, gestionando además el envío automático de notificaciones de alerta ante cualquier alteración térmica.

### Aporte al Proyecto EcoFresh

Esta investigación otorga un respaldo metodológico crítico para EcoFresh, ya que valida científicamente que una solución basada exclusivamente en sensores ambientales es completamente viable para determinar el estado de conservación de un producto perecedero, lo que justifica de forma sólida nuestra decisión de **prescindir de cámaras web**.

Asimismo, mientras que la tesis original emplea el sensor DS18B20 únicamente para la temperatura, EcoFresh evoluciona radicalmente este enfoque al integrar:

- El sensor **BME280** para capturar tanto temperatura como humedad relativa
- El sensor **SGP30** para la medición de los compuestos orgánicos volátiles generados por la maduración de la lechuga

tomando la lógica de alertas en la nube de este estudio como plano base para nuestro flujo de información.

---

*Documento generado para el proyecto EcoFresh*
