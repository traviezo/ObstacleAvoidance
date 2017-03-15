/** Copyright 2017 Christian Ramos
  * @file Sensor.h
  * @version 1.0
  * @date Mar 6, 2017
  * @author Christian Ramos
  * @brief Pure virtual sensor class from which laser and ultrasonic modules are derived.
  */
#ifndef SENSOR_H_
#define SENSOR_H_

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>
#include <ctime>

class Sensor{
 public:
  virtual void initDriver(int numberOfSensors, int gain, int maxRange) = 0;
  virtual std::vector<int> getSensorData() = 0;
  virtual void generateSensorData() = 0;
  virtual void parseSensorData(std::vector<int> data) = 0;
  virtual void setSensorType() = 0;
  virtual std::string getSensorType() = 0;
  virtual void setNumberOfSensors(int number) = 0;
  virtual void getSensorDeviceID() = 0;
  virtual void setSensorDeviceID(int numberOfDevices) = 0;
  virtual void getTimeStamp() = 0;
};

#endif /* SENSOR_H_ */
