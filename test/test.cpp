/* 
 * LaserSensor.h
 *
 * Copyright 2017 Christian Ramos
 *
 *  Created on: Mar 7, 2017
 *      Author: christian
 */

#include <gtest/gtest.h>
#include "LaserSensor.h"
#include "UltrasonicSensor.h"
#include "SensorFusion.h"
#include "ObstacleAvoidanceModule.h"

TEST(Ultrasonic_Initialize, InvalidNegativeArguments) {
  UltrasonicSensor ultrSensor;
  EXPECT_THROW(ultrSensor.initDriver(-4,-15, 100), std::domain_error);
}

TEST(Ultrasonic_range, InvalidNegativeRangeInput) {
  UltrasonicSensor ultrSensor;
  EXPECT_THROW(ultrSensor.setMaximumRange(-22), std::domain_error);
}

TEST(Ultrasonic_gain, InvalidNegativeGainInput) {
  UltrasonicSensor ultrSensor;
  EXPECT_THROW(ultrSensor.setGain(-10), std::domain_error);
}

TEST(Ultrasonic_numberOfSensors, InvalidNegativeArguments) {
  UltrasonicSensor ultrSensor;
  EXPECT_THROW(ultrSensor.setNumberOfSensors(-4), std::domain_error);
}

TEST(Ultrasonic_deviceIDs, InvalidNegativeArguments) {
  UltrasonicSensor ultrSensor;
  EXPECT_THROW(ultrSensor.setSensorDeviceID(-6), std::domain_error);
}

TEST(Laser_Initialize, InvalidNegativeArguments) {
  LaserSensor lsrSensor;
  EXPECT_THROW(lsrSensor.initDriver(-4,-10, -50), std::domain_error);
}

TEST(Laser_range, InvalidNegativeRangeInput) {
  LaserSensor lsrSensor;
  EXPECT_THROW(lsrSensor.setMaximumRange(-54), std::domain_error);
}

TEST(Laser_gain, InvalidNegativeGainInput) {
  LaserSensor lsrSensor;
  EXPECT_THROW(lsrSensor.setGain(-15), std::domain_error);
}

TEST(Laser_numberOfSensors, InvalidNegativeArguments) {
  LaserSensor lsrSensor;
  EXPECT_THROW(lsrSensor.setNumberOfSensors(-4), std::domain_error);
}

TEST(Laser_deviceIDs, InvalidNegativeArguments) {
  LaserSensor lsrSensor;
  EXPECT_THROW(lsrSensor.setSensorDeviceID(-5), std::domain_error);
}

TEST(ObstacleAvoidance_detect, InvalidNegativeArguments) {
  ObstacleAvoidance obsAvd;
  EXPECT_THROW(obsAvd.detectObstacle(-34,-20,-45,56), std::domain_error);
}
