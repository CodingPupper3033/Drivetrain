//
// Created by codin on 8/5/2024.
//

#ifndef DRIVETRAIN_GRABBER_H
#define DRIVETRAIN_GRABBER_H

#include <Arduino.h>
#include <Servo.h>

class Grabber {
public:
    enum State {
        OPEN,
        CLOSED,
        UNKNOWN
    };

    Grabber() = default;
    void setup(int pin);
    void changeState(byte direction);

private:
    Servo servo;
    State state;

    int openAngle = 50;
    int closeAngle = 120;
};


#endif //DRIVETRAIN_GRABBER_H
