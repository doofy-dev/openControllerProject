//
// Created by teeeb on 2017-07-27.
//

#ifndef OPENCONTROLLERPROJECT_POTENTIOMETER_H
#define OPENCONTROLLERPROJECT_POTENTIOMETER_H

class Axis;
class Potentiometer {
private:
    Axis *m_Axis;
    Potentiometer(Axis &axis);

public:
    ~Potentiometer();
};


#endif //OPENCONTROLLERPROJECT_POTENTIOMETER_H
