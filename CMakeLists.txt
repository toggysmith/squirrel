cmake_minimum_required(VERSION 3.27.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

project(Squirrel LANGUAGES CXX)

set(sources src/main.cpp src/io.cpp)

add_executable(out ${sources})
