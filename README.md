
![imagen-G-P-preprocesamiento.jpg](./E%20assets/caratula%20princ.jfif)

## Instituto: ISPC  
**Carrera:** Tecnicatura Superior en Telecomunicaciones.  
**Materia:** Proyecto Integrador I  
**Docente:** Cristian Gonzalo Vera  

## Grupo: PLATA
<h1> Docente </h1>
        <table align="center">
          <thead>
            <tr>
              <th>Nombre y Apellido</th>
              <th>Usuario en GitHub</th>
              <th>GitHub</th>
            </tr>
          </thead>
          <tbody>
           <tr>
              <td> Cristian Gonzalo Vera </td>
              <td> Gona79 </td>
              <td>
                <a href="https://github.com/Gona79">
                  <img src="https://img.shields.io/badge/github-%23121011.svg?&style=for-the-badge&logo=github&logoColor=white"/>
                </a>
              </td>
            </tr>
        </table>
  </dd>
  <dd>
<dl>

<br>

<h1> 👩‍💻👨🏼‍💻 Integrantes 👩‍💻👨🏼‍💻 </h1>
        <table align="center">
          <thead>
            <tr>
              <th>Nombre y Apellido</th>
              <th>Usuario en GitHub</th>
              <th>GitHub</th>
            </tr>
          </thead>
          <tbody>
            <tr>
              <td> Leandro Roldan </td>
              <td> pleroldan </td>
              <td>
                <a href="https://github.com/pleroldan">
                  <img src="https://img.shields.io/badge/github-%23121011.svg?&style=for-the-badge&logo=github&logoColor=white"/>
                </a>
              </td>
            </tr>
            <tr>
              <td> Fernando Gimenez Coria </td>
              <td> FerCbr </td>
              <td>
                <a href="https://github.com/FerCbr">
                  <img src="https://img.shields.io/badge/github-%23121011.svg?&style=for-the-badge&logo=github&logoColor=white"/>
                </a>
              </td>
            </tr>
            <tr>
              <td> Karina jazmin barbero </td>
              <td> karina-lolis </td>
              <td>
                <a href="https://github.com/karina-lolis">
                  <img src="https://img.shields.io/badge/github-%23121011.svg?&style=for-the-badge&logo=github&logoColor=white"/>
                </a>
              </td>
            </tr>
            <tr>
              <td> Nicolás Nahuel Barrionuevo </td>
              <td> NicolasBa27 </td>
              <td>
                <a href="https://github.com/NicolasBa27">
                  <img src="https://img.shields.io/badge/github-%23121011.svg?&style=for-the-badge&logo=github&logoColor=white"/>
                </a>
              </td>
            </tr>
            <tr>
              <td> Macarena Aylen Carballo </td>
              <td> MacarenaAC </td>
              <td>
                <a href="https://github.com/MacarenaAC">
                  <img src="https://img.shields.io/badge/github-%23121011.svg?&style=for-the-badge&logo=github&logoColor=white"/>
                </a>
              </td>
            </tr>
           <tr>
              <td> Raul Jara </td>
              <td> r-j28 </td>
              <td>
                <a href="https://github.com/r-j28">
                  <img src="https://img.shields.io/badge/github-%23121011.svg?&style=for-the-badge&logo=github&logoColor=white"/>
                </a>
              </td>
            </tr>
           <tr>
              <td> Diego Ezequiel Ares </td>
              <td>  diegote7 </td>
              <td>
                <a href="https://github.com/diegote7">
                  <img src="https://img.shields.io/badge/github-%23121011.svg?&style=for-the-badge&logo=github&logoColor=white"/>
                </a>
              </td>
            </tr>
           <tr>
              <td> Romina Huk </td>
              <td> RoHu17 </td>
              <td>
                <a href="https://github.com/RoHu17">
                  <img src="https://img.shields.io/badge/github-%23121011.svg?&style=for-the-badge&logo=github&logoColor=white"/>
                </a>
              </td>
            </tr>
            <tr>
              <td> Paola Pantoja </td>
              <td> - </td>
              <td>
                <a href="https://github.com/PaolaaPantoja">
                  <img src="https://img.shields.io/badge/github-%23121011.svg?&style=for-the-badge&logo=github&logoColor=white"/>
                </a>
              </td>
            </tr>
        </table>
  </dd>
  <dd>
<dl>

## Capa de Preprocesamiento 

### Sistema IoT para el Monitoreo Ambiental.

### Descripción del Proyecto:
Este proyecto tiene como objetivo diseñar e implementar un sistema IoT para monitorear la calidad del aire en áreas urbanas, utilizando sensores que miden temperatura, humedad, luz, presión atmosférica, rayos UV y la concentración de gases contaminantes. La información recolectada permitirá tener una visión clara de los problemas relacionados con la calidad del aire en la ciudad, ofreciendo datos concretos para la toma de decisiones. Además, el sistema será capaz de generar alertas en caso de condiciones peligrosas, mejorando la calidad de vida y seguridad de las personas, al mismo tiempo de estar protegiendo el medio ambiente y promoviendo el desarrollo sostenible.

El sistema procesará los datos localmente en dispositivos edge, aplicando lógicas de filtrado y normalización para tomar decisiones en tiempo real, realizando acciones de forma inteligente al riesgo presente. A futuro, los datos procesados podrán ser transmitidos a la nube para su almacenamiento y análisis más profundo.  
  
  # Esquema de Implementacion del ESP32 con sus Conexiones**  


![Esquema de coneccion](./E%20assets/proyecto_AQI_esquema.jpeg)


En el esquema del proyecto de monitoreo de calidad del aire con el ESP32, se están utilizando varios sensores y dispositivos conectados al microcontrolador ESP32 mediante diferentes protocolos.

**<u> Sensor de Gas MQ135 (conexión analógica):**</u>

- Este sensor mide la calidad del aire midiendo la concentración de gases. Está conectado a un pin analógico del ESP32 (marcado en rosa), que leerá las variaciones de voltaje que el sensor produce.

**<u> Sensor de Luz BH1750 (conexión I2C):**</u>

- Este sensor mide la intensidad lumínica y está conectado a los pines SCL y SDA del ESP32 (protocolos I2C, marcados en amarillo). Usa comunicación I2C, lo que permite compartir los mismos pines con otros dispositivos I2C.

**<u> Sensor de Presión BMP280 (conexión I2C):**</u>

- El BMP280 mide la presión y la temperatura. También usa comunicación I2C (pines SCL y SDA compartidos).

**<u> Sensor de Temperatura y Humedad AM2320 (conexión I2C):**</u>

- Similar al BH1750, este sensor usa I2C para medir temperatura y humedad. Comparte los pines I2C (SCL y SDA).

**<u>Sensor UV ML8511 (conexión analógica):**</u>

- El sensor mide los niveles de radiación ultravioleta. Está conectado a un pin analógico del ESP32.

**<u> Tira LED WS2812:**</u>

- Estos LED RGB y direccionables. Su control se realiza por un pin digital del ESP32 y permite cambiar el color de los led de manera que se pueda mostrar el indice de calidad del aire en forma de colores.  

**<u>Pulsadores Touch:**</u>

- Los botones táctiles están conectados a pines digitales del ESP32, permitiendo la interacción manual.

**<u> Pantalla LCD 2x16 (conexión I2C):**</u>

- La pantalla se conecta a los pines I2C (SCL y SDA), permitiendo mostrar información de los sensores.  
  
**<u> Pantalla LCD 2x16 opcional (conexión paralela ):**</u>    
  
- La pantalla se conecta a los pines I2C (SCL y SDA), permitiendo mostrar información de los sensores.

Todos estos dispositivos están conectados a través de protocolos analógicos y digitales (I2C para varios sensores), mientras que el ESP32 procesa los datos y controla las salidas como la pantalla y el LED.  
  
### 2. **Configuración de Hardware**

Los sensores se conectan al ESP32-Wroom según las siguientes especificaciones:

- **MQ135 (Analógico):**
  - **VCC:** 3.3V
  - **GND:** GND
  - **Salida de señal:** GPIO36 (ADC1_CH0)  
    
- **ML8511(Analógico):**
  - **VCC:** 3.3V
  - **GND:** GND
  - **Salida de señal:** GPIO33 (ADC5_CH0)
  
- **AHT25 (I2C):**
  - **VCC:** 3.3V
  - **GND:** GND
  - **SDA:** GPIO21
  - **SCL:** GPIO22
  
- **BMP280 (I2C):**
  - **VCC:** 3.3V
  - **GND:** GND
  - **SDA:** GPIO21
  - **SCL:** GPIO22  
  
- **BH1750 (I2C):**
  - **VCC:** 3.3V
  - **GND:** GND
  - **SDA:** GPIO21
  - **SCL:** GPIO22
  
- **Display LCD (I2C):**
  - **VCC:** 3.3V
  - **GND:** GND
  - **SDA:** GPIO21
  - **SCL:** GPIO22  

- **Display LCD (paralelo 4 bits):**      
  - **RS (Register Select)** GPIO7: Selecciona el registro de datos o comandos. 
  - **RW (Read/Write)** GPIO8: Indica si se está leyendo o escribiendo datos.
  - **D4-D7** GPIO9, GPIO10, GPIO11, GPIO12: Pines de datos para enviar información de 4 bits.
  
- **Tira led WS2812:**
  - **VCC:** 3.3V
  - **GND:** GND
  - **CONTROL:** GIOP39
  
## Localizacion del proyecto en el repositorio:      
[Proyecto AQI](./C%20prototipo/Proyecto%20AQI/)

## Este proyecto se baso en las practicas y tests cargados por el equipo de desarrollo en el repositorio https://github.com/ISPC-TST-PI-I-2024/Proyecto-AQI-Grupo-Plata 

### Componentes del Proyecto:

1. **Recolección de Datos (Capa de Percepción):**
   - **Sensores:** Sensores conectados a microcontroladores ESP32-Wroom para recolectar datos ambientales a nivel ciudad.
   - **Ejemplos de sensores:** Sensores de humedad, temperatura, luz, presión atmosférica, rayos UV y concentración de gases.

2. **Preprocesamiento de Datos en el Edge (Capa de Preprocesamiento):**
   - **Implementación de Microservicios en Edge:**
     - Los microcontroladores ESP32-Wroom actuarán como nodos edge, procesando los datos recolectados por los sensores en tiempo real.
     - Implementación de microservicios para filtrar datos y normalizar entradas antes de tomar decisiones de formas automatizadas.
   - **Toma de Decisiones en el Edge:**
     - Basado en las condiciones recolectadas, el sistema permiten obtener información en tiempo real de las condiciones ambientales, lo que proporciona información actualizada sobre la calidad del aire, la temperatura, la humedad, entre otros parámetros. Esto facilita a las autoridades y a los ciudadanos a estar al tanto de cualquier cambio que afecte directamente al bienestar general.
     
3. **Gestión de Datos en el Fog (Capa de Preprocesamiento):**
   - **Controladores Fog:**
     - Un dispositivo fog (microcontrolador robusto o servidor local) gestionará la integración de los datos provenientes de múltiples nodos edge.
     - Implementación de APIs para la comunicación entre los nodos edge y la capa de almacenamiento.
   - **Filtrado y Normalización Avanzada:**
     - El fog realiza un procesamiento adicional, como la agregación de datos de múltiples sensores o la ejecución de algoritmos más complejos que no pueden realizarse directamente en los dispositivos edge.

4. **Transmisión y Almacenamiento de Datos:**
   - **Optimización de la Transmisión:**
     - Los datos preprocesados se transmiten eficientemente a la nube o puede ser tambien a un servidor centralizado para su almacenamiento.
     - Uso de técnicas para asegurar que solo los datos relevantes y necesarios se transmitan, optimizando el uso de ancho de banda y almacenamiento.

5. **Monitoreo y Control Remoto:**
   - El sistema mostrara remotamente los datos obtenidos a través de una aplicación web o móvil conectada a la nube.
   - Se pueden generar alertas automáticas para condiciones críticas, alertas o cualquier situación que requieren intervención humana.
---
### Resultados Esperados:

1. **Implementación de un Sistema Iot basado en arquitecturas de Edge y Fog Computing:**
   - El diseño y la implememntacion de  una solución IoT que utilice edge y fog computing para procesar datos localmente y tomar decisiones en tiempo real.
   Los dispositivos edge como los microcontroladores ESP32, estaran encargados de recibir datos de los diferentes sensores de calidad del aire (temperatura, humedad, luz) y realizar un preprocesamiento, como el filtrado y la normalización de los datos.
   Poder utilizar un gateway fog para agregar datos de varios dispositivos edge, realizar un análisis más complejo, y tomar decisiones inmediatas como activar alertas o sistemas de automatización en base a los datos capturados y procesados.


2. **Desarrollo de Microservicios para IoT:**  
   En este proyecto, se podria desarrollar microservicios para manejar tareas como:  
   - Recepción y almacenamiento de datos con un microservicio que reciba datos desde los dispositivos edge y los almacene en una base de datos local o en la nube.
   - Análisis de datos en tiempo real como un microservicio que podría procesar los datos para generar alertas si se detectan condiciones peligrosas.
   - Automatización de acciones con un microservicio que controle actuadores, basándose en las decisiones tomadas por el análisis de datos.

3. **Gestión Avanzada de Datos en el Edge:**
      - **Filtrado y normalización:**  Para asegurar la calidad de los datos, es crucial implementar algoritmos de filtrado en los dispositivos edge, eliminando ruido y normalizando los datos de diferentes sensores. Esto puede incluir técnicas como filtros de media móvil o algoritmos de detección de anomalías para descartar valores erróneos.
      - **Decisiones en tiempo real:** Utilizar los datos procesados para tomar decisiones inmediatas sobre sistemas de actuación, como activar sistemas de ventilación si se detecta alta contaminación. Esto implica programar lógicas condicionales en el edge que se ejecuten sin necesidad de enviar los datos a la nube, reduciendo el tiempo de respuesta.
      - **Almacenamiento temporal:** En caso de interrupción de la conexión con la nube, los dispositivos edge deben poder almacenar temporalmente los datos por ejemplo en tarjetas de almacena y enviarlos una vez que se restablezca la conectividad.

---

### Tecnologías Utilizadas:

- **Microcontroladores:** ESP32-Wroom
- **Sensores:** De humedad, temperatura, luz, presión atmosférica, rayos UV y concentracion de gases.
- **Frameworks:** C++ para el desarrollo de hardware y para la gestión de tareas en tiempo real.
- **Herramientas de Desarrollo:** Visual Studio Code con PlatformIO.
- **Fog Computing:** Microcomputadoras, microservidores.

---
![img](./E%20assets/ispc.PNG)






