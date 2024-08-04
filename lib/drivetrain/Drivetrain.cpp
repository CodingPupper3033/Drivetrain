//
// Created by codin on 8/4/2024.
//

#include "Drivetrain.h"

Drivetrain::Drivetrain() {
    leftMotor = Motor();
    rightMotor = Motor();
    drivetrainInput = DrivetrainInput();
}

void Drivetrain::setup(MotorPins *motorPinsIn, DrivetrainInput::DrivetrainInputPin *drivetrainInputPinsIn) {
    leftMotor.setup(motorPinsIn->pin1, motorPinsIn->pin2);
    rightMotor.setup(motorPinsIn->pin3, motorPinsIn->pin4);
    drivetrainInput.setup(drivetrainInputPinsIn);
}

void Drivetrain::loop() {
    byte direction = drivetrainInput.getDirection();

    leftMotor.setDirection(direction >> 2);
    rightMotor.setDirection(direction & 3);
}
