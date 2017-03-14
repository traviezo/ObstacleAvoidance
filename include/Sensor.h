/*
 * Sensor.h
 *
 *  Created on: Mar 6, 2017
 *      Author: christian
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
	virtual void initializeDriver(int numberOfSensors) = 0;
	virtual std::vector<int> getSensorData() = 0;
	virtual void parseSensorData(std::vector<int> data) = 0;
	virtual double ConvertCentimetersToInches(double cm) = 0;
	virtual void setSensorType() = 0;
	virtual std::string getSensorType() = 0;
	virtual void setNumberOfSensors(int number) = 0;
	virtual void getSensorDeviceID() = 0;
	virtual void setSensorDeviceID(int numberOfDevices) = 0;
	virtual void getTimeStamp() = 0;

};

#endif /* SENSOR_H_ */
