#include <Arduino.h>
#include <Wire.h>
#include "MQ135Sensor.h"
#include "AHT25Sensor.h"
#include "BME280Sensor.h"

// --------------------- Configuración de Pines ---------------------
#define MQ135_PIN 34 // GPIO34 (ADC1_CH6)

// --------------------- Inicialización de Sensores ---------------------
MQ135Sensor mq135(MQ135_PIN);
AHT25Sensor aht25;
BME280Sensor bme280;

// --------------------- Configuración Inicial ---------------------
void setup() {
    Serial.begin(115200);
    while (!Serial);

    Serial.println("Inicializando sensores...");

    Wire.begin();
    mq135.begin();
    aht25.begin();
    bme280.begin();

    Serial.println("Todos los sensores están listos.");
}

// --------------------- Bucle Principal ---------------------
void loop() {
    // Lectura y filtrado de datos del MQ135
    float mq135Data = mq135.readFilteredData();
    if (mq135Data == -1) {
        Serial.println("Lectura MQ135 inválida.");
    } else {
        Serial.print("MQ135 PPM: ");
        Serial.println(mq135Data);
    }

    // Lectura y filtrado de datos del AHT25
    float ahtTemp, ahtHumidity;
    if (aht25.readData(ahtTemp, ahtHumidity)) {
        Serial.print("AHT25 Temperatura: ");
        Serial.print(ahtTemp);
        Serial.println(" *C");

        Serial.print("AHT25 Humedad: ");
        Serial.print(ahtHumidity);
        Serial.println(" %");
    } else {
        Serial.println("Lectura AHT25 inválida.");
    }

    // Lectura y filtrado de datos del BME280
    float bmeTemp, bmePressure, bmeHumidity;
    if (bme280.readData(bmeTemp, bmePressure, bmeHumidity)) {
        Serial.print("BME280 Temperatura: ");
        Serial.print(bmeTemp);
        Serial.println(" *C");

        Serial.print("BME280 Presión: ");
        Serial.print(bmePressure);
        Serial.println(" hPa");

        Serial.print("BME280 Humedad: ");
        Serial.print(bmeHumidity);
        Serial.println(" %");
    } else {
        Serial.println("Lectura BME280 inválida.");
    }

    Serial.println("---------------------------");
    delay(2000);
}
