//
// Created by Usuario on 14/8/2020.
//

#include "Motor.h"

int Motor::getModelo() const {
    return modelo;
}

void Motor::setModelo(int modelo) {
    Motor::modelo = modelo;
}

Motor::Motor(int modelo) : modelo(modelo) {}

Motor::~Motor() {

}
