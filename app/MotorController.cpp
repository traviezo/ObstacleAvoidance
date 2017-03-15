/*
 * MotorController.cpp
 * Copyright 2017 Christian Ramos
 *  Created on: Mar 12, 2017
 *      Author: christian
 */

#include "MotorController.h"

MotorController::MotorController() {
  fwdSpeed  = 0;
  backSpeed = 0;
  leftSpeed = 0;
  rightSpeed = 0;
}

void MotorController::initializeMotorController() {
  std::cout <<"=====================================\n";
  std::cout <<"Initializing Motor Controller.......!\n";
  std::cout <<".....................................\n";
  fwdSpeed = 0;
  std::cout <<"Forward Speed = " << fwdSpeed << " mi/h\n";
  backSpeed = 0;
  std::cout <<"Backward Speed = " << backSpeed << " mi/h\n";
  leftSpeed = 0;
  std::cout <<"Left Speed = "<< leftSpeed <<" mi/h\n";
  rightSpeed = 0;
  std::cout <<"Right Speed = "<< rightSpeed <<" mi/h\n";
}

void MotorController::moveForward(int speed) {
  fwdSpeed = speed;
  std::cout <<"Moving forward at "<< fwdSpeed <<" mi/h\n";
}

void MotorController::moveBackwards(int speed) {
  backSpeed = speed;
  std::cout <<"Moving backwards at "<< backSpeed <<" mi/h\n";
}

void MotorController::moveLeft(int speed) {
  leftSpeed = speed;
  std::cout <<"Moving left at "<< leftSpeed <<" mi/h\n";
}

void MotorController::moveRight(int speed) {
  rightSpeed = speed;
  std::cout <<"Moving right at "<< rightSpeed <<" mi/h\n";
}
