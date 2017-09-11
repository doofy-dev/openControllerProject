//
// Created by teeebor on 2017-08-08.
//

#pragma once

#include "../utils/Vector.h"

class Input;
class ShiftRegister {
private:
    int m_ClockPin;
    int m_DataPin;
    int m_LatchPin;
    Input *inputs[];

public:
    ShiftRegister(int clockPin,int dataPin, int latchPin);
    void assignInput(Input *i);
};

