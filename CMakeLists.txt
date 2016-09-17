cmake_minimum_required(VERSION 2.6)

project(YieldEngine CXX)

add_definitions(-std=c++11)

add_executable(yield-engine YieldEngine.cpp Security.cpp Security.h Utility.cpp Utility.h)
