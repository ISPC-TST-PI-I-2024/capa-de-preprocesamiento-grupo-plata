# Proyecto Integrador I 

## Instituto: ISPC  
**Carrera:** ![Tecnicatura Superior en Telecomunicaciones](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e4/Telecommunications_Tower_at_McMurdo_Station_007.jpg/800px-Telecommunications_Tower_at_McMurdo_Station_007.jpg)  
**Materia:** Proyecto Integrador I  
**Docente:** Cristian Gonzalo Vera  

## Grupo: PLATA
**Integrantes:**
- Fernando Gimenez Coria ([GitHub](https://github.com/FerCbr))
- Patricio Leandro Roldan ([GitHub](https://github.com/pleroldan))
- Diego Ezequiel Ares ([GitHub](https://github.com/diegote7))
- Romina Huk ([GitHub](https://github.com/RoHu17))
- Karina jazmin barbero ([GitHub](https://github.com/karina-lolis))
- Nicolás Barrionuevo ([GitHub](https://github.com/NicolasBa27))
- Macarena Aylen Carballo ([GitHub](https://github.com/MacarenaAC))
- Paola Natalia Alejandra Pantoja ([GitHub](https://github.com/PaolaaPantoja))
- Raul Jara ([GitHub](https://github.com/r-j28))
---

## Capa de Preprocesamiento 

### Sistema IoT para el Monitoreo Ambiental.

### Descripción del Proyecto:
Este proyecto consiste en diseñar e implementar un sistema IoT que monitoree de la calidad del aire a nivel inmotica, utilizando diferentes tipos de sensores como temperatura, humedad y niveles de luz. con la informacion recolectada se podrá tener real conciencia de las problemáticas del aire de la Ciudad y brindar a los diferentes organismos datos concretos para la toma de decisiones y esto puede proponer la  generación de alertas en caso de condiciones peligrosas, entre otros. La medicion de estos factores impulsa a mejorar la calidad de vida de los residentes, proteger el medio ambiente y promover el desarrollo sostenible.El sistema debe ser capaz de procesar los datos localmente en dispositivos edge, aplicar lógicas de filtrado y normalización, y tomar decisiones en tiempo real para la automatización del riego y otras tareas cruciales. En una instancia superior, no cubierta, los datos procesados se transmitirían a la nube para su almacenamiento y análisis más profundo.


---

### Componentes del Proyecto:

1. **Recolección de Datos (Capa de Percepción):**
   - **Sensores:** Sensores conectados a microcontroladores ESP32-Wroom para recolectar datos sobre el ambiente a nivel ciudad.
   - **Ejemplos de sensores:** Sensores de humedad del suelo, temperatura y humedad del aire, y luz, presion admosferica, rayos UV y para medir la concentracion de gases en ambiente.

2. **Preprocesamiento de Datos en el Edge (Capa de Preprocesamiento):**
   - **Implementación de Microservicios en Edge:**
     - Los microcontroladores ESP32-Wroom actuarán como nodos edge que procesarán los datos recolectados por los sensores en tiempo real.
     - Implementación de microservicios para filtrar datos (por ejemplo, eliminar lecturas anómalas) y normalizar las entradas antes de tomar decisiones automatizadas.
   - **Toma de Decisiones en el Edge:**
     - Basado en las condiciones recolectadas, el sistema permiten obtener información en tiempo real de las condiciones ambientales, lo que proporciona información actualizada sobre la calidad del aire, la temperatura, la humedad, entre otros parámetros. Esto facilita a las autoridades y a los ciudadanos a estar al tanto de cualquier cambio que afecte directamente al bienestar general.
     
3. **Gestión de Datos en el Fog (Capa de Preprocesamiento):**
   - **Controladores Fog:**
     - Un dispositivo fog (puede ser un microcontrolador más robusto o un pequeño servidor local) gestionará la integración de los datos provenientes de múltiples nodos edge.
     - Implementación de APIs para la comunicación entre los nodos edge y la capa de almacenamiento.
   - **Filtrado y Normalización Avanzada:**
     - El fog realiza un procesamiento adicional, como la agregación de datos de múltiples sensores o la ejecución de algoritmos más complejos que no pueden realizarse directamente en los dispositivos edge.

4. **Transmisión y Almacenamiento de Datos:**
   - **Optimización de la Transmisión:**
     - Los datos preprocesados se transmiten eficientemente a la nube o a un servidor centralizado para su almacenamiento.
     - Uso de técnicas para asegurar que solo los datos relevantes y necesarios se transmitan, optimizando el uso de ancho de banda y almacenamiento.

5. **Monitoreo y Control Remoto:**
   - El sistema mostrara remotamente los datos obtenidos a través de una aplicación web o móvil conectada a la nube.
   - Se pueden generar alertas automáticas para condiciones críticas que requieren intervención humana.
---
### Resultados Esperados:

1. **Implementación de un Sistema Iot basado en arquitecturas de Edge y Fog Computing:**
   - El diseño y la implememntacion de  una solución IoT que utilice edge y fog computing para procesar datos localmente y tomar decisiones en tiempo real.
   Los dispositivos edge podrían ser microcontroladores ESP32, encargados de recibir datos de los sensores de calidad del aire (temperatura, humedad, luz) y realizar un preprocesamiento, como el filtrado y la normalización de los datos.
   Poder utilizar un gateway fog para agregar datos de varios dispositivos edge, realizar un análisis más complejo, y tomar decisiones inmediatas como activar alertas o sistemas de automatización en base a los datos procesados.


2. **Desarrollo de Microservicios para IoT:**
   - En este proyecto, se podria desarrollar microservicios para manejar tareas como:  
   - Recepción y almacenamiento de datos con un microservicio que reciba datos desde los dispositivos edge y los almacene en una base de datos local o en la nube.
   - Análisis de datos en tiempo real: Otro microservicio podría procesar los datos para generar alertas si se detectan condiciones peligrosas.
   - Automatización de acciones con un microservicio que controle actuadores, basándose en las decisiones tomadas por el análisis de datos.

3. **Gestión Avanzada de Datos en el Edge:**
      - Filtrado y normalización: Para asegurar la calidad de los datos, es crucial implementar algoritmos de filtrado en los dispositivos edge, eliminando ruido y normalizando los datos de diferentes sensores. Esto puede incluir técnicas como filtros de media móvil o algoritmos de detección de anomalías para descartar valores erróneos.
      - Decisiones en tiempo real: Utilizar los datos procesados para tomar decisiones inmediatas, como activar sistemas de ventilación si se detecta alta contaminación. Esto implica programar lógicas condicionales en el edge que se ejecuten sin necesidad de enviar los datos a la nube, reduciendo el tiempo de respuesta.
      - Almacenamiento temporal: En caso de interrupción de la conexión con la nube, los dispositivos edge deben poder almacenar temporalmente los datos y enviarlos una vez que se restablezca la conectividad.

---

### Tecnologías Utilizadas:

- **Microcontroladores:** ESP32-Wroom
- **Sensores:** De humedad, temperatura, luz
- **Frameworks:** C++ para el desarrollo de hardware y para la gestión de tareas en tiempo real.
- **Herramientas de Desarrollo:** Visual Studio Code con PlatformIO
- **Fog Computing:** Microcomputadoras, microservidores, etc.

---

### Desarrollo de las Semanas:

#### Semana 15 (12/08 - 18/08): Introducción a Fog y Edge Computing

**Objetivo Principal:** Comenzar con la implementación de las bases del sistema IoT, enfocándose en la configuración del entorno y la comprensión de las estrategias para distribuir la carga computacional entre el edge y el fog.

- **Lunes (12/08):**
  - **Tema:** Introducción a Fog y Edge Computing.
  - **Actividades:**
    - Explicación de los conceptos básicos de Fog y Edge Computing.
    - Configuración del entorno de desarrollo con Visual Studio Code y PlatformIO.
    - Exploración de casos de uso en IoT que requieren procesamiento en el edge.

- **Miércoles (14/08):**
  - **Tema:** Implementación inicial en dispositivos Edge.
  - **Actividades:**
    - Comienzo del desarrollo de microservicios básicos en el ESP32-Wroom.
    - Configuración de sensores (humedad, temperatura, luz) y prueba de recolección de datos.
    - **Tarea:** Continuar el desarrollo en casa, implementando la lógica básica de recolección de datos y toma de decisiones simple (por ejemplo, activar riego si la humedad es baja).

**Entrega de la Semana:**
- Entorno configurado.
- Microservicios básicos funcionando en los dispositivos edge, recolectando y procesando datos simples.

---

#### Semana 16 (19/08 - 25/08): Microservicios en Dispositivos Edge

**Objetivo Principal:** Desarrollar microservicios más complejos que funcionen de manera autónoma en los dispositivos edge y conecten con la arquitectura de fog computing.

- **Lunes (19/08):**
  - **Tema:** Desarrollo de Microservicios en Edge.
  - **Actividades:**
    - Implementación de lógicas de filtrado de datos en el edge.
    - Optimización de la recolección y procesamiento de datos para mejorar la eficiencia.
    - Conexión entre diferentes nodos edge (ESP32-Wroom) para compartir y comparar datos recolectados.

- **Miércoles (21/08):**
  - **Tema:** Integración con Fog Computing.
  - **Actividades:**
    - Configuración de un nodo fog (puede ser un microcontrolador más robusto o un mini-servidor) para gestionar los datos recolectados por los nodos edge.
    - Desarrollo de APIs simples para permitir la comunicación entre los nodos edge y el fog.
    - **Tarea:** Optimizar la comunicación y asegurar que los datos procesados en el edge se transmitan correctamente al fog.

**Entrega de la Semana:**
- Microservicios más avanzados en los dispositivos edge.
- Nodo fog configurado y conectado con los dispositivos edge.
- Comunicación básica establecida entre edge y fog.

---

#### Semana 17 (26/08 - 01/09): Controladores Fog y API para la Gestión de Datos

**Objetivo Principal:** Finalizar el sistema integrando todas las partes y optimizando el procesamiento y la transmisión de datos. Preparar el sistema para su conexión con la capa de almacenamiento.

- **Lunes (26/08):**
  - **Tema:** Desarrollo de Controladores Fog y Lógicas de Filtrado.
  - **Actividades:**
    - Implementación de controladores fog que gestionen el procesamiento avanzado de datos (agregación, filtrado avanzado).
    - Optimización de la lógica de filtrado y normalización de datos en el edge para asegurar que solo los datos relevantes se envíen al fog.
    - Desarrollo de APIs para integrar y facilitar la transmisión de datos a la capa de almacenamiento o la nube.

- **Miércoles (28/08):**
  - **Tema:** Integración Final y Optimización del Sistema.
  - **Actividades:**
    - Realización de pruebas integradas para asegurar que todos los componentes (edge, fog, APIs) funcionen en conjunto sin problemas.
    - Depuración y mejora de la eficiencia del sistema.
    - **Preparación para la siguiente unidad:** Trabajar en la conexión del sistema con la capa de almacenamiento y procesamiento en la nube.
    - **Tarea:** Documentar el proyecto hasta el punto alcanzado y preparar una presentación del avance.

**Entrega de la Semana:**
- Sistema IoT completamente funcional con nodos edge y fog operativos.
- Controladores fog y APIs implementados y probados.
- Preparación para la siguiente etapa del proyecto (integración con la nube).

---

Este README.md proporciona una estructura clara y detallada para guiar a los estudiantes a través del desarrollo del proyecto, asegurando que comprendan las interacciones entre las distintas capas del sistema IoT, desde la percepción de datos en el edge, pasando por el procesamiento en el fog, hasta la transmisión y almacenamiento en la nube.









