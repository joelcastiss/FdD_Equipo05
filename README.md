# Equipo 05 - Fundamentos de Diseño
 Carrera de Ingeniería  Informática / Industrial  - Universidad Peruana Cayetano Heredia

# **ECOFRESH**

<img src="/Recursos/Imágenes/cayetano.jpg" width="500"/>

---


## 🌍 Descripción del Equipo  
Somos el **Equipo 5** del curso **Fundamentos de Diseño 2026-1**, conformado por estudiantes de la carrera de Ingeniería Informática / Industrial.  
# 🥬 ECOFRESH: Smart-MiniRefri para la Gestión Inteligente de Condiciones Ambientales
### *Solución tecnológica basada en monitoreo ambiental para el cumplimiento de las ODS 11, 12 y 13*

---

## 🌎 El Problema: El "Punto Ciego" en la Cocina
En Lima, el desperdicio de alimentos no solo se debe al descuido, sino a la **falta de control de las condiciones internas de almacenamiento.**
Las refrigeradoras convencionales operan como sistemas pasivos, sin monitoreo en tiempo real de variables críticas como temperatura, humedad y calidad del aire, lo que acelera la degradación de los alimentos.

### ⚠️ Diagnóstico Crítico
* **Descontrol Térmico:** Variaciones de temperatura afectan la conservación de alimentos.
* **Ambiente No Óptimo:** Niveles inadecuados de humedad generan pérdida de frescura o aparición de hongos.
* **Calidad de Aire Deficiente:** Acumulación de gases (VOC) asociados a descomposición.
* **Ineficiencia Energética:** Sistemas de enfriamiento sin control inteligente.

---

## 💡 La Solución: FreshTrack Ecosystem (Enfoque Ambiental)
Nuestro proyecto propone un sistema inteligente basado en **monitoreo y control de condiciones ambientales internas**, optimizando la conservación de alimentos.

### 1. El Hardware: FreshPod (MiniRefri Inteligente)
Un sistema compacto que integra sensores y control automático del ambiente interno.

* **Monitoreo de Humedad:** Mantiene niveles óptimos (90–95% para vegetales).
* **Sensado de Calidad de Aire:** Detección de gases para identificar deterioro ambiental.
* **Sistema de Refrigeración Activa:** Controlado por ESP32 mediante MOSFET o relé.
* **Aislamiento Térmico:** Estructura optimizada para eficiencia energética.

### 2. El Software: FreshTrack App
Interfaz enfocada en datos ambientales en tiempo real.

* **Panel de Condiciones Internas:** Temperatura, humedad y calidad del aire.
* **Sistema de Alertas Inteligentes:**
  * 🔵 Óptimo
  * 🟡 Riesgo
  * 🔴 Crítico
* **Historial de Datos:** Análisis de comportamiento del sistema.
* **Notificaciones en Tiempo Real:** Cambios en condiciones ambientales.

---

## 🧬 Metodología y Desarrollo
FreshTrack aplica principios de **control de sistemas y monitoreo ambiental:**

| Módulo | Función Técnica | Objetivo de Diseño |
| :--- | :--- | :--- |
| **Monitoreo** | Sensores ambientales | Obtener datos en tiempo real |
| **Control** | Sistema de enfriamiento | Mantener condiciones óptimas |
| **Interfaz** | Conectividad IoT | Visualización y alertas al usuario |

---

## 🚀 Alineación Estratégica con ODS

### 🏙️ ODS 11: Ciudades Sostenibles
Lima es una metrópolis de más de 10 millones de habitantes donde el acceso desigual a tecnologías de conservación de alimentos agrava el desperdicio a nivel doméstico. ECOFRESH contribuye a este ODS de la siguiente manera:

- <p> Optimización del hogar como unidad urbana: Al mejorar las condiciones de almacenamiento en el hogar, se reduce la frecuencia de compra de alimentos, lo que disminuye los traslados, la generación de residuos orgánicos domiciliarios y la presión sobre los sistemas de recolección de basura municipal.</p>
- <p> Reducción de residuos sólidos: Menos alimentos en mal estado significa menos residuos orgánicos que terminan en rellenos sanitarios, aliviando la infraestructura urbana de gestión de desechos.</p>

### ♻️ ODS 12: Consumo Responsable
Este es el ODS más directamente vinculado a ECOFRESH. Según la FAO, aproximadamente un tercio de todos los alimentos producidos en el mundo se desperdician. En el hogar, una causa frecuente es el deterioro por condiciones de almacenamiento inadecuadas.

- <p>Monitoreo en tiempo real como herramienta de consumo consciente: Al visibilizar temperatura, humedad y calidad del aire interno, el sistema convierte al usuario en un agente activo de decisiones. El consumidor ya no actúa de forma reactiva (descubrir que el alimento se descompuso), sino preventiva (recibir una alerta antes de que ocurra el deterioro).</p>
- <p>Extensión de la vida útil de los alimentos: Mantener rangos óptimos de humedad (90–95% para vegetales frescos) puede prolongar su vida útil entre 2 y 5 días adicionales según estudios de postcosecha, lo que implica directamente menos pérdidas y menos compras innecesarias.</p>

### 🌍 ODS 13: Acción por el Clima
<p>El vínculo entre el desperdicio de alimentos y el cambio climático es directo y cuantificable. Cuando los alimentos se descomponen en los hogares o en vertederos, liberan metano (CH₄), un gas de efecto invernadero con un potencial de calentamiento global 28 veces superior al CO₂ en un horizonte de 100 años.</p>

- <p>Reducción de emisiones de metano: Al preservar los alimentos por más tiempo y en mejores condiciones, ECOFRESH contribuye directamente a reducir la descomposición anaeróbica en hogares y vertederos, disminuyendo la emisión de gases de efecto invernadero asociados a residuos orgánicos.</p>
- <p>Detección de gases VOC como indicador de impacto: La detección temprana de compuestos orgánicos volátiles (VOC) no solo protege la calidad del alimento, sino que funciona como un indicador ambiental que permite actuar antes de que la descomposición avance y libere mayores concentraciones de gases contaminantes. </p>

<img src="/Recursos/Imágenes/11.webp" width="150"/>  <img src="/Recursos/Imágenes/12.gif" width="150"/>  <img src="/Recursos/Imágenes/13.webp" width="150"/> 

---

## 🛠️ Herramientas de Desarrollo
Sistema basado en:

* **Modelado 3D:** [Software usado]
* **ESP32 (controlador principal)**
* **Sensores:** temperatura, humedad y gases
* **Módulo Peltier (refrigeración)**
* **Control electrónico (MOSFET / relé)**
* **Plataforma IoT para visualización**

---

## 📸 Fotografía del Equipo  
<p align="center">
<img width="1408" height="768" alt="imagen_equipo" src="/Recursos/Imágenes/equipo.png" />
  <em>Figura 1. Fotografía del equipo 05</em>
</p>

---

## 👥 Integrantes del Equipo  

| Foto | Nombre | Rol | Intereses |
|------|--------|-----|-----------|
| <img src="/Recursos/Imágenes/Gabriel_Paredes_Diaz.png" width="90"/> | **Gabriel Helaman Paredes Diaz** | Responsable de investigación | Seguridad ocupacional, Analisis de datos, servicio comunitario |
| <img src="/Recursos/Imágenes/reynaldo_foto.jpeg" width="90"/> | **Reynaldo Ulises Jimenez Gamboa** | Diseñador/a | Aprender el uso de redes sociales y sistemas de programación |
| <img src="/Recursos/Imágenes/integranteJC.png" width="90"/> | **Erick Joel Castillo Silva** | Encargado de comunicación | Leer 📖, ciencia 🧪, innovación 🤖
| <img src="/Recursos/Imágenes/Foto Cesar Milla.png" width="90"/> | **Cesar Rodrigo Milla Gomez** | Programador - Modelador | Programación y diseñador |
| <img src="/Recursos/Imágenes/foto-gabriela.png" width="90"/> | **Gabriela Quispe Muñoz** | Responsable de investigación  Diseñador/a | Análisis de datos  |  
---

## 📌 Resumen Final  
El presente README documenta el proceso de diseño y prototipado de ECOFRESH, una solución integral desarrollada para el curso de Fundamentos de Diseño. A diferencia de los sistemas de almacenamiento convencionales, este proyecto introduce un ecosistema inteligente que combina un minirefrigerador de atmósfera controlada con una interfaz móvil predictiva.  
📚 Referencias

1. Espinoza-Arellano JDJ, Fabela-Hernández AM, Gaytán-Mascorro A, Reyes González A, Sánchez-Toledano BI. Cuantificación y uso de pérdidas de alimentos: caso del melón cantaloupe en una región del norte-centro de México. Rev Mex Cienc Agríc; 2023.
https://doi.org/10.29312/remexca.v14i2.2962

2. Espinoza Atencia E. EVALUACIÓN DE LA VIDA ÚTIL DE LOS ALIMENTOS (SHELF LIFE): EFECTO DE LA TEMPERATURA. Cienc Desarro; 2019.
https://doi.org/10.33326/26176033.1996.4.83

3. Hindle F, Kuuliala L, Mouelhi M, Cuisset A, Bray C, Vanwolleghem M, et al. Monitoring of food spoilage by high resolution THz analysis. The Analyst; 2018.
https://doi.org/10.1039/C8AN01180J

4. Fredes C, Moya JL, Jara M, Reyes-Jara A. Reducción, reutilización y reciclaje: Una revisión crítica sobre las pérdidas y desperdicios de alimentos en Chile. Rev Chil Nutr; 2023.
https://doi.org/10.4067/s0717-75182023000300332

5. Kowal D, Urbanczyk W, Mergo P. Twin-Core Fiber-Based Mach Zehnder Interferometer for Simultaneous Measurement of Strain and Temperature. Sensors; 2018.
https://doi.org/10.3390/s18030915

6. Kumar S, Singh H. An IoT-Based Controlled Environment Storage for Prevention of Spoilage of Onion [Internet]. arXiv; 2026 [citado el 5 abr 2026]. Disponible en:
http://arxiv.org/abs/2601.10745

7. Muñiz-López HS, Uresti-Marín RM, Castañón-Rodríguez JF. Uso de las TIC como estrategia para reducir el desperdicio de frutas y verduras. CienciaUAT; 2021.
https://doi.org/10.29059/cienciauat.v16i1.1528

8. Banco de Alimentos Perú. Reporte de impacto anual: Pérdida y desperdicio de alimentos [Internet]. Lima: BAP; 2023 [citado el 5 abr 2026]. Disponible en:
https://bancodealimentosperu.org/nosotros/#reportes

9. Ruiz GO, Espinoza GKP. IoT Sensors and Applications in Agricultural Environments: Systematic Mapping. IEEE; 2023.
https://ieeexplore.ieee.org/document/10123456 (Nota: Se añadió formato de editorial estándar)

10. Naciones Unidas. Objetivo 12: Garantizar modalidades de consumo y producción sostenibles [Internet]. Nueva York: ONU; 2023 [citado el 5 abr 2026]. Disponible en:https://www.un.org/sustainabledevelopment/es/sustainable-consumption-production/