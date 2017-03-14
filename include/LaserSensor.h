/*
 * LaserSensor.h
 *
 *  Created on: Mar 7, 2017
 *      Author: christian
 */

#ifndef LASERSENSOR_H_
#define LASERSENSOR_H_

#include "Sensor.h"

class LaserSensor: public Sensor {

public:
	LaserSensor();
	virtual void initializeDriver(int numberOfSensors);
	virtual std::vector<int> getSensorData();
	virtual void generateSensorData();
	virtual void parseSensorData(std::vector<int> data);
	virtual double ConvertCentimetersToInches(double cm);
	virtual void setSensorType();
	virtual std::string getSensorType();
	virtual void setNumberOfSensors(int number);
	virtual void setSensorDeviceID(int numberOfDevices);
	virtual void getSensorDeviceID();
	virtual void getTimeStamp();
private:
	std::vector<int> sensorData;
	std::vector<int> deviceID;
	std::string sensorType;
	std::string timeStamp;
	int numberOfSensors;
	int laserSensorFront;
	int laserSensorBack;
	int laserSensorLeft;
	int laserSensorRight;
};



#endif /* LASERSENSOR_H_ */
