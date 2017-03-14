/*
 * SensorFusion.h
 *
 *  Created on: Mar 7, 2017
 *      Author: christian
 */

#ifndef SENSORFUSION_H_
#define SENSORFUSION_H_

#include "UltrasonicSensor.h"
#include "LaserSensor.h"

class SensorFusion {
public:
	SensorFusion();
	void fuseSensorData(std::vector<int>,std::vector<int>);
	int getFusedSensorFwd();
	int getFusedSensorBack();
	int getFusedSensorLeft();
	int getFusedSensorRight();
	void outputFusedSensorData();
private:
	int fusedSensorFwd;
	int fusedSensorBack;
	int fusedSensorLeft;
	int fusedSensorRight;
};



#endif /* SENSORFUSION_H_ */
