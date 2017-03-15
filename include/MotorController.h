/** Copyright 2017 Christian Ramos
  * @file MotorController.h
  * @version 1.0
  * @date Mar 7, 2017
  * @author Christian Ramos
  * @brief Simulates an omnidirectional vehicle Motor Controller driver that moves around at 1 to 2 mi/h.
  */
#ifndef MOTORCONTROLLER_H_
#define MOTORCONTROLLER_H_

#include "SensorFusion.h"
#include "ObstacleAvoidanceModule.h"

class MotorController {
 public:
/// Class constructor
  MotorController();

/// Initializes motor controller
  void initializeMotorController();

/// Moves forward
  void moveForward(int);

/// Moves backwards
  void moveBackwards(int);

/// Moves left
  void moveLeft(int);

/// Moves right
  void moveRight(int);

 private:
  int fwdSpeed;		///< forward speed
  int backSpeed;	///< backwards speed
  int leftSpeed;	///< left speed
  int rightSpeed;	///< right speed
};
#endif /* MOTORCONTROLLER_H_ */
