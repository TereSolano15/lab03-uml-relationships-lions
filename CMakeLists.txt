cmake_minimum_required(VERSION 3.14)
project(lab03-uml-relationship-lions)

set(SOURCE_FILES  Carro.h Carro.cpp AutoBus.h Autobus.cpp Motor.cpp Motor.h Chofer.h Chofer.cpp)
add_executable(lab03-uml-relationship-lions ${SOURCE_FILES})