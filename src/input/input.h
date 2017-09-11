//
// Created by teeebor on 2017-09-05.
//

#pragma once

#include "../config.h"
class Input{
    VALUE_TYPE m_Value;

public:
    Input():m_Value(0){

    }
    void set(VALUE_TYPE value){
        m_Value=value;
    }

    virtual VALUE_TYPE get(){
        return m_Value;
    }
};