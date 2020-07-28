#include "SensorTemp.h"
#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is plugged into port 2 on the Arduino

#define ONE_WIRE_BUS 3

// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim / Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature.
DallasTemperature sensors(&oneWire);

SensorTemp::SensorTemp() {
  sensors.begin();
}

int SensorTemp::showSensorTemp() {
  sensors.requestTemperatures(); // Send the command to get temperatures
  sensorTempValue = sensors.getTempCByIndex(0);
  //Serial.println(sensorTempValue);
  sprintf(messageSensorTemp, "{\"SENSORTEMPVALUE\": %d}" , sensorTempValue);
  Serial.println(messageSensorTemp);

  return sensorTempValue;
}
