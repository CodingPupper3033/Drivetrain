//
// Created by codin on 8/5/2024.
//

#include "Arm.h"

void Arm::setup(ArmPins *armPinsIn) {
    armPins = *armPinsIn;
    pinMode(armPins.pin1, OUTPUT);
    pinMode(armPins.pin2, OUTPUT);
    direction = 0;
    setDirection(2);
}

void Arm::setDirection(byte direction) {
    if (direction == 3) return;
    if (this->direction == direction) return;

    digitalWrite(armPins.pin1, direction & 1);
    digitalWrite(armPins.pin2, direction & 2);

    if (direction == 1) {
        delay(armRetractTime);
        this->direction = 1;
    }

    if (direction == 2) {
        delay(armExtendTime);
        this->direction = 2;
    }

    digitalWrite(armPins.pin1, 0);
    digitalWrite(armPins.pin2, 0);

}
