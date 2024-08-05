//
// Created by codin on 8/4/2024.
//

#include "Motor.h"

void Motor::setup(int pin1, int pin2) {
    this->pin1 = pin1;
    this->pin2 = pin2;

    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);

    setDirection(STOP);
}

void Motor::setDirection(uint8_t direction) {
    if (direction == NO_DIRECTION) return;
    this->direction = direction;

    Serial.print("Setting direction to ");
    Serial.println(direction, BIN);

    digitalWrite(pin1, direction & 1);
    digitalWrite(pin2, direction & 2);
}

