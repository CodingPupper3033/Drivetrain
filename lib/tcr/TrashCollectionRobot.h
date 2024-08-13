//
// Created by codin on 8/5/2024.
//

#ifndef DRIVETRAIN_TRASHCOLLECTIONROBOT_H
#define DRIVETRAIN_TRASHCOLLECTIONROBOT_H

#include "Motor.h"
#include "../drivetrain/Drivetrain.h"
#include "Grabber.h"
#include "../appinput/AppInput.h"
#include "../arm/Arm.h"

class TrashCollectionRobot {
public:
    TrashCollectionRobot();
    void setup(Drivetrain::MotorPins *motorPinsIn, int grabberPin, Arm::ArmPins *armPinsIn);
    void loop();

private:
    AppInput appInput{};
    Drivetrain drivetrain;
    Grabber grabber;
    Arm arm;
};


#endif //DRIVETRAIN_TRASHCOLLECTIONROBOT_H
