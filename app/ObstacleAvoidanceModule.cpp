/*
 * ObstacleAovidanceModule.cpp
 *
 *  Created on: Mar 7, 2017
 *      Author: christian
 */

#include "ObstacleAvoidanceModule.h"

void ObstacleAvoidance::detectObstacle(int front,int back,int left,int right){
	if(front<=25){
		std::cout<<"Object Detected in forward path\n";
		frontObstacle=true;
	}
	if(back<=25){
		std::cout<<"Object Detected in backward path\n";
		backObstacle=true;
	}
	if(left<=25){
		std::cout<<"Object Detected in left path\n";
		leftObstacle=true;
	}
	if(right<=25){
		std::cout<<"Object Detected in right path\n";
		rightObstacle=true;
	}

}


void ObstacleAvoidance::turnOnOffAvoidance(int &frontSpeed, int &backSpeed,int &leftSpeed, int &rightSpeed){
	if(frontObstacle){
		frontSpeed = 0;
		std::cout<<"Overriding Forward speed to 0........!\n";
		frontObstacle = false;		
	}
	if(backObstacle){
		backSpeed  = 0;
		std::cout<<"Overriding Backward speed to 0.......!\n";
		backObstacle = false;		
	}
	if(leftObstacle){
		leftSpeed  = 0;
		std::cout<<"Overriding Left speed to 0...........!\n";
		leftObstacle = false;
	}
	if(rightObstacle){
		rightSpeed = 0;
		std::cout<<"Overriding Right speed to 0..........!\n";
		leftObstacle = false;	
	}
}

