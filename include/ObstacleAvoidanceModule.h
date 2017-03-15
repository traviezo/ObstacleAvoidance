/** Copyright 2017 Christian Ramos
  * @file ObstacleAvoidanceModule.h
  * @version 1.0
  * @date Mar 7, 2017
  * @author Christian Ramos
  * @brief Module that detects and avoids obstacles in the path of omnidirectional robotic vehicle
  */
#ifndef OBSTACLEAVOIDANCEMODULE_H_
#define OBSTACLEAVOIDANCEMODULE_H_

#include <math.h>
#include <stdexcept>
#include "SensorFusion.h"
#include "MotorController.h"

class ObstacleAvoidance {
 public:
/// class constructor
  ObstacleAvoidance();

/** @brief Detects obstacles 
  * @param front front sensor reading
  * @param back back sensor reading
  * @param left left sensor reading
  * @param right right sensor reading
  * @return void function does not return anything
  */
  void detectObstacle(int front, int back, int left, int right);

/** @brief Overrides speed
  * @param front front speed
  * @param back back speed
  * @param left left speed
  * @param right right speed
  * @return void function does not return anything
  */
  void trnOnOffAvoid(int &frontSpd, int &backSpd, int &leftSpd, int &rightSpd);

 private:
  bool frontObstacle;	///< front obstacle
  bool backObstacle;	///< back obstacle
  bool leftObstacle;	///< left obstacle
  bool rightObstacle;	///< right obstacle
};
#endif /* OBSTACLEAVOIDANCEMODULE_H_ */
