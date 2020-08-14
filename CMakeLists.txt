cmake_minimum_required(VERSION 3.14)
project(basic-00-example)

set(SOURCE_FILES Auto.h AutoBus.h Auto.cpp Autobus.cpp)
add_executable(Chofer.cpp Chofer.h cmake-build-debug/Motor.cpp cmake-build-debug/Motor.h)