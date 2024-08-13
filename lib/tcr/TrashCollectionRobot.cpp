//
// Created by codin on 8/5/2024.
//

#include "TrashCollectionRobot.h"

void TrashCollectionRobot::setup(Drivetrain::MotorPins *motorPinsIn, int grabberPin, Arm::ArmPins *armMotorPinsIn) {
    appInput.setup();
    drivetrain.setup(motorPinsIn);
    grabber.setup(grabberPin);
    arm.setup(armMotorPinsIn);
}

void TrashCollectionRobot::loop() {
    byte direction = appInput.getCommand();
    Serial.println(direction);
    //direction = 0b11011111; // Grabber Open
    //direction = 0b11101111; // Grabber Close
    //direction = 0b11111111; // Nothing

    drivetrain.setDirection(direction & 0xF);

    direction = direction >> 4;
    grabber.changeState(direction & 0x3);

    direction = direction >> 2;
    arm.setDirection(direction & 0x3);
}

TrashCollectionRobot::TrashCollectionRobot() {
    drivetrain = Drivetrain();
    grabber = Grabber();
    appInput = AppInput();
}
