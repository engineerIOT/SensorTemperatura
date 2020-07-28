/*
  SensorTemp.h
  Author: Elvis Fernandes
  Date: 27/07/2020
*/
#ifndef SensorTemp_h
#define SensorTemp_h

class SensorTemp {

  public:

    SensorTemp();
    int sensorTempValue;
    int showSensorTemp();
    char messageSensorTemp[256];
};

#endif
