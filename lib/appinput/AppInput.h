//
// Created by codin on 8/5/2024.
//

#ifndef DRIVETRAIN_APPINPUT_H
#define DRIVETRAIN_APPINPUT_H
#include "Arduino.h"

class AppInput {
public:
    AppInput() = default;
    void setup();
    byte getCommand();
private:
    byte command;
};


#endif //DRIVETRAIN_APPINPUT_H
