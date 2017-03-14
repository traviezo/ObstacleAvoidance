/*
 * SensorFusion.cpp
 *
 *  Created on: Mar 7, 2017
 *      Author: christian
 */

#include "SensorFusion.h"

void SensorFusion::fuseSensorData(std::vector<int> udata,std::vector<int> ldata){
	fusedSensorFwd = (udata.at(0)+ldata.at(0))/2;
	
	fusedSensorBack = (udata.at(1)+ldata.at(1))/2;
	
	fusedSensorLeft = (udata.at(2)+ldata.at(2))/2;
	
	fusedSensorRight = (udata.at(3)+ldata.at(3))/2;
	
}

int SensorFusion::getFusedSensorFwd(){
	return fusedSensorFwd;
}

int SensorFusion::getFusedSensorBack(){
	return fusedSensorBack;
}

int SensorFusion::getFusedSensorLeft(){
	return fusedSensorLeft;
}

int SensorFusion::getFusedSensorRight(){
	return fusedSensorRight;
}

void SensorFusion::outputFusedSensorData(){
	std::cout<<"Fused Sensor Front value = "<<fusedSensorFwd<<std::endl;
	std::cout<<"Fused Sensor Back value = "<<fusedSensorBack<<std::endl;
	std::cout<<"Fused Sensor Left value = "<<fusedSensorLeft<<std::endl;
	std::cout<<"Fused Sensor Right value = "<<fusedSensorRight<<std::endl;
}


