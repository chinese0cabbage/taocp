cmake_minimum_required(VERSION 3.15)
project(taocp)

set(CMAKE_CXX_STANDARD 14)

include_directories(algorithm)

add_executable(taocp
        algorithm/DataAlgorithm.h
        main.cpp)
