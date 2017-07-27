//
// Created by teeeb on 2017-07-27.
//

#ifndef OPENCONTROLLERPROJECT_CONFIG_H
#define OPENCONTROLLERPROJECT_CONFIG_H
/*
 * Debug config
 */
#define BAUD_RATE 9500;

/*
 * X axis
 */
#define X_AXIS_MIN 0
#define X_AXIS_MAX 255

/*
 * Y axis
 */
#define Y_AXIS_MIN 0
#define Y_AXIS_MAX 255

/*
 * VERTICAL_AXIS axis
 */
#define HAS_VERTICAL_AXIS   //comment this line if the joystick does not have a vertical axis
#define VERT_AXIS_MIN 0
#define VERT_AXIS_MAX 255

/*
 * Potentiometer
 */
#define FIRE_ACTUATION 200


//DISPLAY
#define HAS_LCD

//OTHER
/*
 * Used to store user settings
 */
#define USE_EEPROM

#endif //OPENCONTROLLERPROJECT_CONFIG_H
