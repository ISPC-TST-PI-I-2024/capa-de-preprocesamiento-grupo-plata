#include "BME280Sensor.h"

BME280Sensor::BME280Sensor() {}

void BME280Sensor::begin() {
    if (!bme.begin(0x76)) { // Dirección I2C puede ser 0x76 o 0x77
        Serial.println("Error: No se encontró el sensor BME280. Verifica las conexiones!");
        while (1);
    }
}

bool BME280Sensor::readData(float &temperature, float &pressure, float &humidity) {
    temperature = bme.readTemperature();
    pressure = bme.readPressure() / 100.0F; // Convertir a hPa
    humidity = bme.readHumidity();

    // Filtrado de datos erróneos
    if (temperature < -40 || temperature > 80 ||
        pressure < 300 || pressure > 1100 || // hPa
        humidity < 0 || humidity > 100) { // %
        return false;
    }

    return true;
}