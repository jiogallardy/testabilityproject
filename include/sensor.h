// sensor.h

#ifndef SENSOR_H
#define SENSOR_H

class TemperatureSensor
{
public:
    TemperatureSensor();  // constructor to initialize communication
    float readTemperature();  // method to read and return the temperature
};

#endif
