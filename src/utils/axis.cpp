//
// Created by teeeb on 2017-07-27.
//
#include "axis.h"

Axis::Axis(){
    range_min=0;
    range_max=0;
    current=0;
};

Axis::Axis(float min, float max) {
    range_min=min;
    range_max=max;
    current=0;
}
float Axis::getPercentage() {
    return ((current-range_min)/(range_max-range_min))*100;
}
