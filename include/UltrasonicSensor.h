/*
 * UltrasonicSensor.h
 *
 *  Created on: Mar 6, 2017
 *      Author: christian
 */

#ifndef ULTRASONICSENSOR_H_
#define ULTRASONICSENSOR_H_

#include "Sensor.h"


class UltrasonicSensor: public Sensor {

public:

	virtual void setMaximumRange(int maxRange);
	virtual void setGain(int gain);
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
	int sensorGain;
	int sensorMaximumRange;
	int numberOfSensors;
	int ultrasonicSensorFront;
	int ultrasonicSensorBack;
	int ultrasonicSensorLeft;
	int ultrasonicSensorRight;

};



#endif /* ULTRASONICSENSOR_H_ */
