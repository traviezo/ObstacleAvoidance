/** Copyright 2017 Christian Ramos
  * @file LaserSensor.h
  * @version 1.0
  * @date Mar 7, 2017
  * @author Christian Ramos
  * @brief Simulates a laser sensor driver and generates laser sensor data. 
  */
#ifndef LASERSENSOR_H_
#define LASERSENSOR_H_

#include <math.h>
#include <stdexcept>
#include "Sensor.h"

class LaserSensor: public Sensor {
 public:
/// Class Constructor
  LaserSensor();

/** @brief Initiates Laser Sensor Driver
  * @param numberOfSensors sets the number of sensors in the module
  * @param gain sets the gain of the module
  * @param maxRange sets the maximum range of the module
  * @return void function does not return anything
  * 
  * This method executes all initialization functions for the module.  
  */
  virtual void initDriver(int numberOfSensors, int gain, int maxRange);

/** @brief Retrieves the Laser Sensor data
  * @param none 
  * @return vector<int> vector containing 4 sensor readings
  */
  virtual std::vector<int> getSensorData();

/** @brief Generates the Laser Sensor data
  * @param none 
  * @return void function does not return anything
  */
  virtual void generateSensorData();

/** @brief Parses the Laser Sensor data vector into individual variables
  * @param data vector containing 4 integer readings
  * @return void function does not return anything
  */
  virtual void parseSensorData(std::vector<int> data);

/** @brief Sets the Sensor type as Laser
  * @param none 
  * @return void function does not return anything
  */
  virtual void setSensorType();

/** @brief Sets the maximum range of the Laser Sensor
  * @param maxRange maximum range 
  * @return void function does not return anything
  */
  virtual void setMaximumRange(int maxRange);

/** @brief Sets the gain of the Laser Sensor
  * @param gain sensor gain 
  * @return void function does not return anything
  */
  virtual void setGain(int gain);

/** @brief Retrieves the Sensor type: laser
  * @param none
  * @return string Contains the sensor type (laser)
  */
  virtual std::string getSensorType();

/** @brief Configures the number of laser sensors to be used (4)
  * @param number number of sensors
  * @return void function does not return anything
  */
  virtual void setNumberOfSensors(int number);

/** @brief Sets the device IDs of the laser sensors
  * @param numberOfDevices number of devices
  * @return void function does not return anything
  */
  virtual void setSensorDeviceID(int numberOfDevices);

/** @brief Prints to the screen the device IDs of the laser sensors
  * @param none
  * @return void function does not return anything
  */
  virtual void getSensorDeviceID();

/** @brief Prints to the screen the laser sensor readings time stamp
  * @param none
  * @return void function does not return anything
  */
  virtual void getTimeStamp();

 private:
  std::vector<int> sensorData;	///< sensor readings
  std::vector<int> deviceID;	///< sensors device IDs
  std::string sensorType;	///< sensor type
  std::string timeStamp;	///< sensor readings time stamp
  int sensorGain;		///< sensor gain
  int sensorMaximumRange;	///< maximum range of sensors
  int numberOfSensors;		///< number of sensors
  int laserSensorFront;		///< Front sensor reading
  int laserSensorBack;		///< Back sensor reading
  int laserSensorLeft;		///< Left sensor reading
  int laserSensorRight;		///< Right sensor reading
};

#endif /* LASERSENSOR_H_ */
