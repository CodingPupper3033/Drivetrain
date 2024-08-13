#include <Arduino.h>
#include "TrashCollectionRobot.h"

#define LEFT_MOTOR_F 10
#define LEFT_MOTOR_R 11
#define RIGHT_MOTOR_F 12
#define RIGHT_MOTOR_R 13

#define ARM_F 6
#define ARM_R 7

#define GRABBER_PIN 3

TrashCollectionRobot trashCollectionRobot;

void setup() {
    Serial.begin(9600);

    Drivetrain::MotorPins motorPinsIn = {LEFT_MOTOR_F, LEFT_MOTOR_R, RIGHT_MOTOR_F, RIGHT_MOTOR_R};
    Arm::ArmPins armPinsIn = {ARM_F, ARM_R};

    trashCollectionRobot.setup(&motorPinsIn, GRABBER_PIN, &armPinsIn);
}

void loop() {
    trashCollectionRobot.loop();
}