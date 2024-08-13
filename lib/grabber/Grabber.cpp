//
// Created by codin on 8/5/2024.
//

#include "Grabber.h"

void Grabber::setup(int pin) {
    servo.attach(pin);
    state = UNKNOWN;
    changeState(1);
}

void Grabber::changeState(byte direction) {
    if (direction == 3) {
        return;
    }

    if (state == OPEN && direction == 1) {
        return;
    }

    if (state == CLOSED && direction == 2) {
        return;
    }

    if (direction == 1) {
        Serial.println("Opening grabber");
        for (int angle = closeAngle; angle >= openAngle; angle--) {
            servo.write(angle);
            delay(10);
        }
        servo.write(openAngle);
        state = OPEN;
    } else if (direction == 2) {
        Serial.println("Closing grabber");
        for (int angle = openAngle; angle <= closeAngle; angle++) {
            servo.write(angle);
            delay(10);
        }
        servo.write(closeAngle);
        state = CLOSED;
    } else {
    }
}
