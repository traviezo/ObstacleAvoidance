/*
 * ObstacleAvoidanceModule.h
 *
 *  Created on: Mar 7, 2017
 *      Author: christian
 */

#ifndef OBSTACLEAVOIDANCEMODULE_H_
#define OBSTACLEAVOIDANCEMODULE_H_

#include "SensorFusion.h"
#include "MotorController.h"

class ObstacleAvoidance {

public:
	void detectObstacle(int front,int back,int left,int right);
	
	void turnOnOffAvoidance(int &frontSpeed, int &backSpeed,int &leftSpeed, int &rightSpeed);

private:
	bool frontObstacle = false;
	bool backObstacle = false;
	bool leftObstacle = false;
	bool rightObstacle = false;
	
};

#endif /* OBSTACLEAVOIDANCEMODULE_H_ */
