cmake_minimum_required(VERSION 3.0)

project(train_4_1)

set (CMAKE_CXX_STANDARD 11)
# set(CMAKE_BUILD_TYPE Debug)

file(GLOB SOURCES  *.c)

add_executable(${PROJECT_NAME} ${SOURCES})