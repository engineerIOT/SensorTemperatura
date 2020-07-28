#include "SensorTemp.h"
SensorTemp sensortemp;
SensorTemp SensorTemp();

char texto[256];

void setup()
{
  Serial.begin(9600);
  delay(1000);
}

void loop()
{
  sensortemp.showSensorTemp();
  sprintf(texto, "{\"SENSORTEMPVALUE\": %d}" , sensortemp.showSensorTemp());
  Serial.println(texto);

}
