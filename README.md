# ObstacleAvoidance
[![Build Status](https://travis-ci.org/Traviezo/ObstacleAvoidance.svg?branch=master)](https://travis-ci.org/Traviezo/ObstacleAvoidance)
[![Coverage Status](https://coveralls.io/repos/github/traviezo/ObstacleAvoidance/badge.svg?branch=master)](https://coveralls.io/github/traviezo/ObstacleAvoidance?branch=master)
---

## Overview

Obstacle Avoidance project uses data from ultrasonic and laser sensors in order to avoid obstacles in its path.

## Detailed Description

The Obstacle Avoidance Module is divided in the following modules:
-Laser Sensor Module
-Ultrasonic Sensor Module
-Sensor Fusion Module
-Obstacle Avoidance Module
-Motor Controller Module (dummy model)

The Laser Sensor Module: Its objective is to simulate a laser sensor driver and its initialization routine. It is also responsible for generating laser sensor data. The module is configured to work with 4 sensors by default but it could be expanded to work with more sensors if future modifications are made to the code.
In order to generate the simulated sensor data, it uses a random number generator which can generate integer numbers between 1 to 100.

The Ultrasonic Sensor Module: Its objective is to simulate an ultrasonic sensor driver and its initialization routine. It is also responsible for generating ultrasonic sensor data. The module is configured to work with 4 sensors by default but it could be expanded to work with more sensors if future modifications are made to the code.
In order to generate the simulated sensor data, it uses a random number generator which can generate integer numbers between 1 to 100.

Sensor Fusion Module: Its objective is to receive the data from the ultrasonic and laser sensor modules and combine them into a single dataset by averaging their readings. It then provides this dataset to the Obstacle Avoidance Module for further processing.

Obstacle Avoidance Module: Its objective is to access the data from the Sensor Fusion Module and determine whether an obstacle is within 25 cm of proximity.If an object is detected with this threshold, then the input speed to the motor controller gets overriden to zero speed according to the direction in which the obstacle was detected.

Motor Controller Module (dummy model): Although not really part of the Obstacle Avoidance Module, it is needed in order to simulate an interface to the motor controller. This module simulates the motion of an omnidirectional wheeled vehicle which does not not need to turn its wheels in order to move in any direction. 

## How to build the project

The following steps are taken in order to build the project:
1. Clone it from repository: git clone <repository>
2. Go to project directory: cd ~/ObstacleAvoidance <enter>
3. delete the build subdirectory if existent.
4. Create a new build directory: mkdir build <enter>
5. Go to build directory: cd build <enter>
6. Type CMake: cmake .. <enter>
7. Type make <enter>
Project should compile and return errors if any or successful completion.

## How to run the Demo program

Once the project has successfuly built, an executable will be created inside the app folder with the following name: shell-app.
In order to run the demo please do the following:
1. Go to the build directory: cd build <enter>
2. Run the executable inside the app folder: ./app/shell-app <enter>
This should run the demo program which will show the initialization of each module. It will then generate sensor data and use the obstacle detection module to detect objects and override the vehicle speed accordingly.

## How to run the Test program

Once the project has successfuly built, an executable will be created inside the test folder with the following name: cpp-test.
In order to run the test script please do the following:
1. Go to the build directory: cd build <enter>
2. Run the executable inside the test folder: ./test/cpp-test <enter>
The test program should run 11 tests successfully.

## How to generate Doxygen Documentation

In order to generate doxygen documentation do the following:
1. Install doxygen: sudo apt-get install doxygen <enter>
2. Generate a doxygen configuration file: doxygen -g my_proj.conf <enter>
3. Edit the following sections of the config file accordingly:
INPUT = (directory containing source files)
OUTPUT = (directory where latex and html files will be stored)
Optional : PROJECT_NAME, PROJECT_NUMBER, PROJECT_BRIEF
4. Run the doxygen config file: doxygen my_proj.conf <enter>

## Results

Results for compilation, cppcheck,cpplint, demo and test snapshot results are stored in the resuts folder.

## Backlog Google Spreadsheet Link

https://docs.google.com/spreadsheets/d/15XmPTQIGrMIJrcy2Np_lsxUcNeIXVXmj22SBgv6iBHY/edit?usp=sharing

