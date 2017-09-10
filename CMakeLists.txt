cmake_minimum_required(VERSION 3.8)
project(Milk)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-static")

set(SOURCE_FILES main.cpp UI.cpp UI.h)
add_executable(Milk ${SOURCE_FILES})