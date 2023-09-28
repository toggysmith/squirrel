cmake_minimum_required(VERSION 3.27.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

include(FetchContent)

project(Squirrel LANGUAGES CXX)

set(sources src/main.cpp src/io.cpp src/game.cpp src/player.cpp)

add_executable(out ${sources})

FetchContent_Declare(fmt GIT_REPOSITORY https://github.com/fmtlib/fmt GIT_TAG 10.1.1)
FetchContent_MakeAvailable(fmt)
target_link_libraries(out fmt::fmt)
