cmake_minimum_required(VERSION 3.0)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId})

set (CMAKE_CXX_STANDARD 11)
# set(CMAKE_BUILD_TYPE Debug)

file(GLOB SOURCES  *.c)

add_executable(${PROJECT_NAME} ${SOURCES})
