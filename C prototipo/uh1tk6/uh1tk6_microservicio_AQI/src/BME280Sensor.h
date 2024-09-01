#ifndef BME280SENSOR_H
#define BME280SENSOR_H

#include <Arduino.h>
#include <Adafruit_BME280.h>

class BME280Sensor {
private:
    Adafruit_BME280 bme;

public:
    BME280Sensor();
    void begin();
    bool readData(float &temperature, float &pressure, float &humidity);
};

#endif