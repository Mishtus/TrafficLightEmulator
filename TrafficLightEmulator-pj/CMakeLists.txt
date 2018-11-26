cmake_minimum_required(VERSION 3.12)
project(TrafficLightEmulator_pj)

set(CMAKE_CXX_STANDARD 98)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread")

add_subdirectory(Logger)
add_subdirectory(TrafficLight)
add_subdirectory(TrafficLightEmulator)
add_subdirectory(TrafficLightFSM)
add_subdirectory(TrafficLightStates)
