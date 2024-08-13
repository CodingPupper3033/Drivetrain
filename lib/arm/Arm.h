//
// Created by codin on 8/5/2024.
//

#ifndef DRIVETRAIN_ARM_H
#define DRIVETRAIN_ARM_H

#include <Arduino.h>


class Arm {
public:
    struct ArmPins {
        int pin1;
        int pin2;
    };

    Arm() = default;
    void setup(ArmPins *armPinsIn);
    void setDirection(byte direction);

private:
    ArmPins armPins;
    int armExtendTime = 13000;
    int armRetractTime = 11000;
    byte direction;
};


#endif //DRIVETRAIN_ARM_H
