/** Copyright 2017 Christian Ramos
  * @file SensorFusion.h
  * @version 1.0
  * @date Mar 7, 2017
  * @author Christian Ramos
  * @brief Module that combines the data received from ultrasonic and laser sensors into a single averaged data set.
  */
#ifndef SENSORFUSION_H_
#define SENSORFUSION_H_

#include "UltrasonicSensor.h"
#include "LaserSensor.h"

class SensorFusion {
 public:
/// Class Constructor
  SensorFusion();

/** @brief Fuses readings from laser and ultrasonic sensors
  * @param udata vector containing ultrasonic readings
  * @param ldata vector containing laser readings
  * @return void function does not return anything
  */
  void fuseSensorData(std::vector<int> udata, std::vector<int> ldata);

/** @brief Retrieves fused sensor forward reading
  * @param none
  * @return int front sensor reading
  */
  int getFusedSensorFwd();

/** @brief Retrieves fused sensor back reading
  * @param none
  * @return int back sensor reading
  */
  int getFusedSensorBack();

/** @brief Retrieves fused sensor left reading
  * @param none
  * @return int left sensor reading
  */
  int getFusedSensorLeft();

/** @brief Retrieves fused sensor right reading
  * @param none
  * @return int right sensor reading
  */
  int getFusedSensorRight();

/** @brief Prints to screen all fused sensor readings
  * @param none
  * @return void Function does not return anything
  */
  void outputFusedSensorData();
 private:
  int fusedSensorFwd;		///< fused sensor front reading
  int fusedSensorBack;		///< fused sensor back reading
  int fusedSensorLeft;		///< fused sensor left reading
  int fusedSensorRight;		///< fused sensor right reading
};
#endif /* SENSORFUSION_H_ */
