/*
 * main.cpp
 *
 *  Created on: Mar 6, 2017
 *      Author: christian
 */

#include "UltrasonicSensor.h"
#include "LaserSensor.h"
#include "SensorFusion.h"
#include "ObstacleAvoidanceModule.h"
#include "MotorController.h"

int main(){
	
	MotorController mCtrl;
	mCtrl.initializeMotorController();
	std::cout<<"=====================================!\n";
	std::cout<<"Initialization Complete..............!\n";
	std::cout<<".....................................!\n";
	std::cout<<"Ready to drive.......................!\n";
	
	int usrInFrontSpeed = 1;
	mCtrl.moveForward(usrInFrontSpeed);
	int usrInLeftSpeed = 1;
	mCtrl.moveLeft(usrInLeftSpeed);
	int usrInBackSpeed = 1;
	mCtrl.moveBackwards(usrInBackSpeed);
	int usrInRightSpeed = 1;
	mCtrl.moveRight(usrInRightSpeed);
	std::cout<<".....................................!\n";
	std::cout<<"Turning on Obstacle Avoidance Module.!\n";
	std::cout<<".....................................!\n";
	UltrasonicSensor ultrSensor;
	ultrSensor.initializeDriver(4,10,100);
	LaserSensor lsrSensor;
	lsrSensor.initializeDriver(4,15,150);
	std::cout<<"Reading Ultrasonic Sensor raw data...!\n";
	ultrSensor.generateSensorData();
	ultrSensor.getTimeStamp();
	std::cout<<"Reading Laser Sensor raw data........!\n";
	lsrSensor.generateSensorData();
	lsrSensor.getTimeStamp();
	std::cout<<".....................................!\n";
	std::cout<<"Parsing Ultrasonic Sensors data......!\n";
	ultrSensor.parseSensorData(ultrSensor.getSensorData());
	std::cout<<"Parsing Laser Sensors data...........!\n";	
	lsrSensor.parseSensorData(lsrSensor.getSensorData());
	std::cout<<"Fusing Ultrasonic and Laser data.....!\n";
	std::cout<<".....................................!\n";
	SensorFusion fsdSensor;
	fsdSensor.fuseSensorData(ultrSensor.getSensorData(), lsrSensor.getSensorData());
	fsdSensor.outputFusedSensorData();
	std::cout<<".....................................!\n";
	ObstacleAvoidance obsAvMod;
	obsAvMod.detectObstacle(fsdSensor.getFusedSensorFwd(),fsdSensor.getFusedSensorBack(),fsdSensor.getFusedSensorLeft(),fsdSensor.getFusedSensorRight());
	obsAvMod.turnOnOffAvoidance(usrInFrontSpeed,usrInBackSpeed,usrInLeftSpeed,usrInRightSpeed);
	mCtrl.moveForward(usrInFrontSpeed);
	mCtrl.moveLeft(usrInLeftSpeed);
	mCtrl.moveBackwards(usrInBackSpeed);
	mCtrl.moveRight(usrInRightSpeed);
	return 0;
}
