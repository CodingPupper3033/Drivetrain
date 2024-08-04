//
// Created by codin on 8/4/2024.
//

#include "DrivetrainInput.h"
#include <Arduino.h>

void DrivetrainInput::setup(DrivetrainInputPin *drivetrainInputPinsIn) {
    drivetrainInputPins = *drivetrainInputPinsIn;

    pinMode(drivetrainInputPins.BIT0_PIN, INPUT);
    pinMode(drivetrainInputPins.BIT1_PIN, INPUT);
    pinMode(drivetrainInputPins.BIT2_PIN, INPUT);
    pinMode(drivetrainInputPins.BIT3_PIN, INPUT);
}

uint8_t DrivetrainInput::getDirection() {
    int bit0 = digitalRead(drivetrainInputPins.BIT0_PIN);
    int bit1 = digitalRead(drivetrainInputPins.BIT1_PIN);
    int bit2 = digitalRead(drivetrainInputPins.BIT2_PIN);
    int bit3 = digitalRead(drivetrainInputPins.BIT3_PIN);

    return bit0 + bit1 * 2 + bit2 * 4 + bit3 * 8;
}
