//
// Created by codin on 8/4/2024.
//

#ifndef DRIVETRAIN_DRIVETRAININPUT_H
#define DRIVETRAIN_DRIVETRAININPUT_H
#include "Motors.h"
#include <Arduino.h>

class DrivetrainInput {
public:
    struct DrivetrainInputPin {
        int BIT0_PIN;
        int BIT1_PIN;
        int BIT2_PIN;
        int BIT3_PIN;
    };

    DrivetrainInput() = default;
    void setup(DrivetrainInputPin *drivetrainInputPinsIn);
    uint8_t getDirection();

private:
    DrivetrainInputPin drivetrainInputPins;
};


#endif //DRIVETRAIN_DRIVETRAININPUT_H
