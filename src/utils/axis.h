//
// Created by teeeb on 2017-07-27.
//

#ifndef OPENCONTROLLERPROJECT_AXIS_H
#define OPENCONTROLLERPROJECT_AXIS_H

struct Axis{
    float current;
    float range_min;
    float range_max;

    Axis(float,float);
    Axis();
    float getPercentage();
};

#endif //OPENCONTROLLERPROJECT_AXIS_H
