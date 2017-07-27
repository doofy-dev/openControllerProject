//
// Created by teeeb on 2017-07-27.
//

#include "joystick.h"
#include "potentiometer.h"

Joystick::Joystick(Potentiometer &x, Potentiometer &y):m_Axis_X(&x),m_Axis_Y(&y) {

}