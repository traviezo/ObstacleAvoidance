/*
 * ObstacleAovidanceModule.cpp
 * Copyright 2017 Christian Ramos
 *  Created on: Mar 7, 2017
 *      Author: christian
 */

#include "ObstacleAvoidanceModule.h"

ObstacleAvoidance::ObstacleAvoidance() {
  frontObstacle = false;
  backObstacle = false;
  leftObstacle = false;
  rightObstacle = false;
}

void ObstacleAvoidance::detectObstacle(int front,int back,int left,int right) {
  if (std::isless(front,0) || std::isless(back,0) || std::isless(left,0) || std::isless(right,0))
    throw std::domain_error("Negative arguments are invalid");
  if(front <= 25) {
    std::cout << "Object Detected in forward path\n";
    frontObstacle = true;
  }
  if(back <= 25) {
    std::cout << "Object Detected in backward path\n";
    backObstacle = true;
  }
  if(left <= 25) {
    std::cout << "Object Detected in left path\n";
    leftObstacle = true;
  }
  if(right <= 25) {
    std::cout << "Object Detected in right path\n";
    rightObstacle = true;
  }
}


void ObstacleAvoidance::trnOnOffAvoid(int &frontSpd, int &backSpd,int &leftSpd, int &rightSpd) {
  if (std::isless(frontSpd,0) || std::isless(backSpd,0) || std::isless(leftSpd,0) || std::isless(rightSpd,0))
    throw std::domain_error("Negative arguments are invalid");
  if(frontObstacle) {
    frontSpd = 0;
    std::cout << "Overriding Forward speed to 0........!\n";
    frontObstacle = false;		
  }
  if(backObstacle) {
    backSpd = 0;
    std::cout << "Overriding Backward speed to 0.......!\n";
    backObstacle = false;		
    }
  if(leftObstacle) {
    leftSpd = 0;
    std::cout << "Overriding Left speed to 0...........!\n";
    leftObstacle = false;
  }
  if(rightObstacle) {
    rightSpd = 0;
    std::cout << "Overriding Right speed to 0..........!\n";
    leftObstacle = false;	
  }
}
