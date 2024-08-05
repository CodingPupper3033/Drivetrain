//
// Created by codin on 8/4/2024.
//

#include "DrivetrainInput.h"
#include <Arduino.h>
#include <SoftwareSerial.h>

void DrivetrainInput::setup() {
    Serial.begin(9600);
    delay(500);
}

uint8_t DrivetrainInput::getDirection() {
    direction = Serial.read();
    Serial.print("Direction: ");
    Serial.println(direction, BIN);
    return direction;
}
