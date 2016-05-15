cmake_minimum_required(VERSION 3.5)
project(Biped)
set(${PROJECT_NAME}_BOARD uno)
set(${PROJECT_NAME}_SRCS protocol/src/index.cpp-txt)
set(${PROJECT_NAME}_PORT )
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        protocol/src/classes/Ankle.cpp
        protocol/src/classes/Ankle.h
        protocol/src/index.cpp-txt
        protocol/src/classes/Leg.cpp
        protocol/src/classes/Leg.h
        protocol/src/classes/Arm.cpp
        protocol/src/classes/Arm.h
        protocol/src/classes/Hip.cpp
        protocol/src/classes/Hip.h
        protocol/src/classes/Knee.cpp
        protocol/src/classes/Knee.h
        protocol/src/main.cpp)

add_executable(Biped ${SOURCE_FILES})
#generate_arduino_firmware(${PROJECT_NAME})