#include "sensor.h"

int main()
{
    TemperatureSensor sensor;

    float temperature = sensor.readTemperature();

    // Do something with the temperature (e.g., log it, send it over Bluetooth, etc.)

    return 0;
}
