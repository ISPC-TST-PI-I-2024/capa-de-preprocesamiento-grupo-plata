# Proyecto IoT con ESP32-Wroom: Recolección de Datos de Sensores

## Descripción General

Este proyecto implementa un sistema modularizado en un ESP32-Wroom de 38 pines, encargado de la recolección de datos de tres sensores: **MQ135**, **AHT25** y **BME280**. El sistema está diseñado para ser escalable y fácil de mantener, con cada sensor gestionado por un módulo independiente. Los datos recogidos son filtrados y mostrados en el monitor serie.

## Estructura del Proyecto

src/   
├── main.cpp   
├── MQ135Sensor.cpp   
├── MQ135Sensor.h   
├── AHT25Sensor.cpp   
├── AHT25Sensor.h   
├── BME280Sensor.cpp   
├── BME280Sensor.h  

lib/   
├── (Bibliotecas necesarias)   

## Descripción de los Módulos

### 1. **main.cpp**

Este archivo principal orquesta la ejecución del programa, inicializando cada uno de los módulos de sensores y gestionando el bucle principal donde se realizan las lecturas de datos. Los datos obtenidos de cada sensor se filtran para eliminar valores erróneos y se muestran en el monitor serie.

**Flujo de trabajo en `main.cpp`:**
- Inicializa el sistema de sensores en el `setup()`.
- Realiza lecturas cíclicas en el `loop()`, llamando a los métodos de cada módulo sensor.
- Muestra los datos en el monitor serie y maneja la lógica básica de filtrado.

### 2. **MQ135Sensor.h y MQ135Sensor.cpp**

Estos archivos implementan la clase `MQ135Sensor`, encargada de gestionar el sensor **MQ135** que mide la calidad del aire, específicamente la concentración de CO2. 

**Funciones clave:**
- `begin()`: Inicializa el sensor y configura el filtro de media móvil para suavizar las lecturas.
- `readFilteredData()`: Lee los datos del sensor, aplica un filtro de media móvil para suavizar las lecturas y descarta valores fuera de un rango predefinido (0-500 PPM). Devuelve el valor filtrado o -1 si la lectura es inválida.

**Características del MQ135:**
- **Tipo:** Sensor analógico
- **Conexión:** Pin analógico (GPIO34)
- **Filtro:** Media móvil con 10 lecturas

### 3. **AHT25Sensor.h y AHT25Sensor.cpp**

Estos archivos implementan la clase `AHT25Sensor`, responsable de gestionar el sensor **AHT25** que mide temperatura y humedad relativa.

**Funciones clave:**
- `begin()`: Inicializa el sensor **AHT25** y verifica su disponibilidad en el bus I2C.
- `readData(float &temperature, float &humidity)`: Lee los datos de temperatura y humedad desde el sensor, aplicando un filtro que descarta valores fuera de los rangos aceptables. Devuelve `true` si los datos son válidos y `false` si no lo son.

**Características del AHT25:**
- **Tipo:** Sensor digital (I2C)
- **Conexión:** I2C (GPIO21 - SDA, GPIO22 - SCL)
- **Rangos de validación:**
  - **Temperatura:** -40°C a 80°C
  - **Humedad:** 0% a 100%

### 4. **BME280Sensor.h y BME280Sensor.cpp**

Estos archivos implementan la clase `BME280Sensor`, que gestiona el sensor **BME280** para la medición de temperatura, presión barométrica y humedad relativa.

**Funciones clave:**
- `begin()`: Inicializa el sensor **BME280** y verifica su disponibilidad en el bus I2C.
- `readData(float &temperature, float &pressure, float &humidity)`: Lee los datos de temperatura, presión y humedad del sensor, aplicando filtros para descartar valores fuera de rangos predefinidos. Devuelve `true` si los datos son válidos y `false` si no lo son.

**Características del BME280:**
- **Tipo:** Sensor digital (I2C)
- **Conexión:** I2C (GPIO21 - SDA, GPIO22 - SCL)
- **Rangos de validación:**
  - **Temperatura:** -40°C a 80°C
  - **Presión:** 300 hPa a 1100 hPa
  - **Humedad:** 0% a 100%

## Instalación y Uso

### 1. **Instalación de Bibliotecas**

Asegúrate de que las siguientes bibliotecas estén instaladas en tu IDE de Arduino:

- **Adafruit BME280 Library**
- **Adafruit AHTX0 Library**
- **MQ135 Library** (por Seeed Studio u otra compatible)

Puedes instalarlas desde el **Library Manager** de Arduino:

1. Abre el **Library Manager** en el Arduino IDE.
2. Busca cada una de las bibliotecas mencionadas y haz clic en **Install**.

### 2. **Configuración de Hardware**

Conecta los sensores al ESP32-Wroom según las siguientes especificaciones:

- **MQ135 (Analógico):**
  - **VCC:** 3.3V
  - **GND:** GND
  - **Salida de señal:** GPIO34 (ADC1_CH6)
  
- **AHT25 (I2C):**
  - **VCC:** 3.3V
  - **GND:** GND
  - **SDA:** GPIO21
  - **SCL:** GPIO22
  
- **BME280 (I2C):**
  - **VCC:** 3.3V
  - **GND:** GND
  - **SDA:** GPIO21
  - **SCL:** GPIO22

### 3. **Compilación y Carga del Código**

1. Abre el proyecto en el Arduino IDE.
2. Selecciona la placa **ESP32 Dev Module** en el menú **Tools > Board**.
3. Selecciona el puerto correcto donde está conectado el ESP32.
4. Compila y carga el código en el ESP32.

### 4. **Monitoreo de Datos**

Abre el **Monitor Serie** en el Arduino IDE (Ctrl + Shift + M) y configúralo a **115200 baudios** para observar las lecturas de los sensores. Los datos se mostrarán en tiempo real y se indicará si alguna lectura es inválida debido a valores fuera de los rangos definidos.

## Futuras Expansiones

Este proyecto está diseñado para ser fácilmente escalable. Puedes agregar más sensores o funcionalidades, como enviar los datos a una plataforma en la nube o a un servidor remoto. El código modular facilita la incorporación de nuevas características sin afectar la estructura existente.

## Contribuciones

Si deseas contribuir a este proyecto, por favor, abre un issue o un pull request. Todas las contribuciones son bienvenidas.

## Licencia

Este proyecto se distribuye bajo la licencia [MIT](LICENSE).