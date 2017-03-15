/*
 * LaserSensor.cpp
 * Copyright 2017 Christian Ramos
 *  Created on: Mar 7, 2017
 *      Author: christian
 */

#include "LaserSensor.h"

LaserSensor::LaserSensor() {
  numberOfSensors = 0;
  laserSensorFront = 0;
  laserSensorBack = 0;
  laserSensorLeft = 0;
  laserSensorRight = 0;
  sensorGain = 0;
  sensorMaximumRange = 0;
}

void LaserSensor::initDriver(int numberOfSensors,int gain, int maxRange) {
  if (std::isless(numberOfSensors,0) || std::isless(gain,0) || std::isless(maxRange,0))
    throw std::domain_error("Negative arguments are invalid");
  std::cout <<"=====================================\n";
  std::cout <<"Initializing Laser Sensors..........!\n";
  std::cout <<".....................................\n";
  LaserSensor::setSensorType();
  LaserSensor::setGain(gain);
  LaserSensor::setMaximumRange(maxRange);
  LaserSensor::setSensorDeviceID(numberOfSensors);
  LaserSensor::setNumberOfSensors(numberOfSensors);
  LaserSensor::getSensorDeviceID();
  std::cout <<".....................................\n";
}

void LaserSensor::setMaximumRange(int maxRange) {
  if (std::isless(maxRange,0))
    throw std::domain_error("Negative range not allowed");
  sensorMaximumRange = maxRange;
  std::cout <<"Sensor Maximum range : "<<sensorMaximumRange<<std::endl;
}

void LaserSensor::setGain(int gain) {
  if (std::isless(gain,0))
    throw std::domain_error("Negative gain not allowed");
  sensorGain = gain;
  std::cout <<"Sensor gain : "<<sensorGain<<std::endl;
}

std::vector<int> LaserSensor::getSensorData() {
  return sensorData;
}

void LaserSensor::generateSensorData() {
  std::random_device rnd;
  std::mt19937 gen(rnd());
  std::uniform_int_distribution<> dist(1,100);
  for(auto i=0; i < numberOfSensors; i++)
    sensorData.push_back(dist(gen));
  for(auto n:sensorData)
    std::cout << LaserSensor::getSensorType() << " Sensor = " << n << std::endl;
}
void LaserSensor::parseSensorData(std::vector<int> data) {
  laserSensorFront = data.at(0);
  std::cout <<"Sensor Front value = " << laserSensorFront << std::endl;
  laserSensorBack  = data.at(1);
  std::cout <<"Sensor Back value = " << laserSensorBack << std::endl;	
  laserSensorLeft  = data.at(2);
  std::cout <<"Sensor Left value = " << laserSensorLeft << std::endl;
  laserSensorRight = data.at(3);
  std::cout <<"Sensor Right value = " << laserSensorRight << std::endl;
}

void LaserSensor::setSensorType() {
  sensorType = "Laser";
  std::cout <<"Sensor Type : " << LaserSensor::getSensorType() << std::endl;
}

std::string LaserSensor::getSensorType() {
  return sensorType;
}

void LaserSensor::setNumberOfSensors(int number) {
  if (std::isless(number,0))
    throw std::domain_error("Negative arguments are invalid");
  numberOfSensors = number;
}

void LaserSensor::setSensorDeviceID(int numberOfDevices) {
  if (std::isless(numberOfDevices,0))
    throw std::domain_error("Negative arguments are invalid");
  for (auto i =1; i <= numberOfDevices; i++)
    deviceID.push_back((i*10)+40);
}

void LaserSensor::getSensorDeviceID() {
  std::cout <<"Sensor Front device ID : " << deviceID.at(0) << std::endl;
  std::cout <<"Sensor Back  device ID : " << deviceID.at(1) << std::endl;
  std::cout <<"Sensor Left  device ID : " << deviceID.at(2) << std::endl;
  std::cout <<"Sensor Right device ID : " << deviceID.at(3) << std::endl;
}

void LaserSensor::getTimeStamp() {
  auto now = std::chrono::system_clock::now();
  auto nowC = std::chrono::system_clock::to_time_t(now);
  std::cout << "Time stamp = " << std::ctime(&nowC) << std::endl;
}
