//
// Created by teeeb on 2017-07-27.
//

#ifndef OPENCONTROLLERPROJECT_JOYSTICK_H
#define OPENCONTROLLERPROJECT_JOYSTICK_H

class Potentiometer;
class Joystick {
private:
    Potentiometer *m_Axis_X;
    Potentiometer *m_Axis_Y;
public:
    Joystick(Potentiometer &x, Potentiometer &y);
};


#endif //OPENCONTROLLERPROJECT_JOYSTICK_H
