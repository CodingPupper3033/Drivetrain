//
// Created by codin on 8/4/2024.
//

#ifndef DRIVETRAIN_DRIVETRAIN_H
#define DRIVETRAIN_DRIVETRAIN_H
#include "Motor.h"

class Drivetrain {
public:
    struct MotorPins {
        int pin1;
        int pin2;
        int pin3;
        int pin4;
    };

    Drivetrain();
    void setup(MotorPins *motorPinsIn);
    void setDirection(byte direction);
private:
    Motor leftMotor{};
    Motor rightMotor{};
};


#endif //DRIVETRAIN_DRIVETRAIN_H
