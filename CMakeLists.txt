cmake_minimum_required(VERSION 3.10)

project(CalculatorApp)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)

file(GLOB SOURCES "src/*.cpp")

add_executable(CalculatorApp
    src/main.cpp
    src/calculator.cpp
)