cmake_minimum_required(VERSION 3.2.1)
#cmake_minimum_required(VERSION 2.8.12.2)
project (ObstacleAvoidance)

include(CMakeToolsHelpers OPTIONAL)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -Wpedantic")
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(app)
add_subdirectory(test)
add_subdirectory(vendor/googletest/googletest)
