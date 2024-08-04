#include <Arduino.h>
#include "../lib/drivetrain/Drivetrain.h"

#define LEFT_MOTOR_F 10
#define LEFT_MOTOR_R 11
#define RIGHT_MOTOR_F 12
#define RIGHT_MOTOR_R 13

#define MOTOR_IN0 2
#define MOTOR_IN1 3
#define MOTOR_IN2 4

Drivetrain drivetrain;

void setup() {
    Serial.begin(9600);

    Drivetrain::MotorPins motorPinsIn = {LEFT_MOTOR_F, LEFT_MOTOR_R, RIGHT_MOTOR_F, RIGHT_MOTOR_R};
    DrivetrainInput::DrivetrainInputPin drivetrainInputPinsIn = {MOTOR_IN0, MOTOR_IN1, MOTOR_IN2};

    drivetrain.setup(&motorPinsIn, &drivetrainInputPinsIn);
}

void loop() {
    drivetrain.loop();
}