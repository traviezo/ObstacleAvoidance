/*
 * UltrasonicSensor.cpp
 *
 *  Created on: Mar 6, 2017
 *      Author: christian
 */

#include "UltrasonicSensor.h"

void UltrasonicSensor::initializeDriver(int numberOfSensors){
	std::cout<<"=====================================\n";
	std::cout<<"Initializing Ultrasonic Sensors.....!\n";
	std::cout<<".....................................\n";
	UltrasonicSensor::setSensorType();
	UltrasonicSensor::setSensorDeviceID(numberOfSensors);
	UltrasonicSensor::setNumberOfSensors(numberOfSensors);
	UltrasonicSensor::getSensorDeviceID();
	std::cout<<".....................................\n";
}

void UltrasonicSensor::setMaximumRange(int maxRange){
	sensorMaximumRange = maxRange;
}

void UltrasonicSensor::setGain(int gain){
	sensorGain = gain;
}

std::vector<int> UltrasonicSensor::getSensorData(){
	return sensorData;
}

void UltrasonicSensor::generateSensorData(){
	std::random_device rnd;
	std::mt19937 gen(rnd());
	std::uniform_int_distribution<> dist(1,100);
	for(auto i=0;i<numberOfSensors;i++)
		sensorData.push_back(dist(gen));
	for(auto n:sensorData)
		std::cout<<UltrasonicSensor::getSensorType()<<" Sensor = "<< n <<std::endl;
}
void UltrasonicSensor::parseSensorData(std::vector<int> data){
	ultrasonicSensorFront = data.at(0);
	std::cout<<"Sensor Front value = "<<ultrasonicSensorFront<<std::endl;
	ultrasonicSensorBack  = data.at(1);
	std::cout<<"Sensor Back value = "<<ultrasonicSensorBack<<std::endl;	
	ultrasonicSensorLeft  = data.at(2);
	std::cout<<"Sensor Left value = "<<ultrasonicSensorLeft<<std::endl;
	ultrasonicSensorRight = data.at(3);
	std::cout<<"Sensor Right value = "<<ultrasonicSensorRight<<std::endl;
}

double UltrasonicSensor::ConvertCentimetersToInches(double cm){
	return (cm/2.54);
}

void UltrasonicSensor::setSensorType(){
	sensorType = "Ultrasonic";
	std::cout<<"Sensor Type : "<<UltrasonicSensor::getSensorType()<<std::endl;
}

std::string UltrasonicSensor::getSensorType(){
	return sensorType;
}

void UltrasonicSensor::setNumberOfSensors(int number){
	numberOfSensors = number;
}

void UltrasonicSensor::setSensorDeviceID(int numberOfDevices){
	for (auto i =1;i<=numberOfDevices;i++)
		deviceID.push_back(i*10);
}

void UltrasonicSensor::getSensorDeviceID(){
	std::cout<<"Sensor Front device ID : "<< deviceID.at(0) <<std::endl;
	std::cout<<"Sensor Back  device ID : "<< deviceID.at(1) <<std::endl;
	std::cout<<"Sensor Left  device ID : "<< deviceID.at(2) <<std::endl;
	std::cout<<"Sensor Right device ID : "<< deviceID.at(3) <<std::endl;
}

void UltrasonicSensor::getTimeStamp(){
	auto now = std::chrono::system_clock::now();
	auto nowC = std::chrono::system_clock::to_time_t(now);
	std::cout<< "Time stamp = "<<std::ctime(&nowC)<<std::endl;
}
