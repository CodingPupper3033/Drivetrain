//
// Created by codin on 8/4/2024.
//

#ifndef DRIVETRAIN_DRIVETRAININPUT_H
#define DRIVETRAIN_DRIVETRAININPUT_H
#include <Arduino.h>

class DrivetrainInput {
public:
    DrivetrainInput() = default;
    void setup();
    uint8_t getDirection();

private:
    uint8_t direction;
};


#endif //DRIVETRAIN_DRIVETRAININPUT_H
