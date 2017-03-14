/*
 * MotorController.h
 *
 *  Created on: Mar 12, 2017
 *      Author: christian
 */

#ifndef MOTORCONTROLLER_H_
#define MOTORCONTROLLER_H_

#include "SensorFusion.h"
#include "ObstacleAvoidanceModule.h"

class MotorController {
public:
	void initializeMotorController();
	void moveForward(int);
	void moveBackwards(int);
	void moveLeft(int);
	void moveRight(int);

private:
	int fwdSpeed;
	int backSpeed;
	int leftSpeed;
	int rightSpeed;
};

#endif /* MOTORCONTROLLER_H_ */
