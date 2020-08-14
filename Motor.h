//
// Created by Usuario on 14/8/2020.
//

#ifndef BASIC_00_EXAMPLE_MOTOR_H
#define BASIC_00_EXAMPLE_MOTOR_H


class Motor {

private:

    int modelo;

public:

    Motor(int modelo);

    virtual ~Motor();

    int getModelo() const;

    void setModelo(int modelo);

};


#endif //BASIC_00_EXAMPLE_MOTOR_H
