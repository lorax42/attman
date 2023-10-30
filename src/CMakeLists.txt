cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB src "*.cpp")

project(attman)

add_executable(${PROJECT_NAME} ${src})
