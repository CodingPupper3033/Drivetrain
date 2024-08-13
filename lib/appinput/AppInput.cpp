//
// Created by codin on 8/5/2024.
//

#include "AppInput.h"

void AppInput::setup() {
    Serial.begin(9600);
    delay(500);
}

byte AppInput::getCommand() {
    command = Serial.read();
    //Serial.print("Command: ");
    //Serial.println(command, BIN);
    return command;
}