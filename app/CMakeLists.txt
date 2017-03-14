add_executable(shell-app main.cpp LaserSensor.cpp SensorFusion.cpp UltrasonicSensor.cpp ObstacleAvoidanceModule.cpp MotorController.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
