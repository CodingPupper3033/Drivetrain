//
// Created by codin on 8/4/2024.
//

#ifndef DRIVETRAIN_MOTOR_H
#define DRIVETRAIN_MOTOR_H

#include <Arduino.h>

const int STOP = 0;
const int FORWARD = 1;
const int BACKWARD = 2;
const int NO_DIRECTION = 3;

class Motor {
public:
    Motor() = default;
    void setup(int pin1, int pin2);
    void setDirection(uint8_t direction);

private:
    int pin1;
    int pin2;
    int direction;
};


#endif //DRIVETRAIN_MOTOR_H
