#include <gtest/gtest.h>
#include "LaserSensor.h"
#include "UltrasonicSensor.h"
#include "ObstacleAvoidanceModule.h"
#include "SensorFusion.h"

TEST(PidConstructor, InvalidNegativeGainInputs) {
//  EXPECT_THROW(PidController(-22.0, -0.1, -5.7,1.0), std::domain_error);
}

//TEST(PidConstructor, InvalidNegativeTimeArgument) {
//  EXPECT_THROW(PidController(18.0, 7.3, 1.5,-1.0), std::domain_error);
//}

//TEST(PidConstructor, InvalidZeroTimeArgument) {
//  EXPECT_THROW(PidController(34.0, 3.6, 2.8,0), std::runtime_error);
//}

//TEST(PidController, Compute_CurrentAndTargetSetPointAreTheSame) {
  /* No Change needed if the current and computed velocity are the same */
//  PidController controller = PidController(1.0, 0.0, 0.0,1.0);
//  EXPECT_EQ(0, controller.computePID(100, 100));
//}

//TEST(PidController, Compute_PositivePowerWhenVelecityBelowSetPoint) {
  /* If measured velocity is less than set point, need more power to equalize
   * given only proportional gain is set */
//  PidController controller = PidController(1.0, 0.0, 0.0,1.0);
//  EXPECT_GT(controller.computePID(100, 50), 0);
//}

//TEST(PidController, Compute_NegativeOutputWhenVelecityAboveSetPoint) {
  /* If measured velocity is greater than set point, need less power to equalize
   * given only proportional gain is set */
//  PidController controller = PidController(1.0, 0.0, 0.0,1.0);
//  EXPECT_LT(controller.computePID(50, 100), 0);
//}
