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
 * Configuring the input numbers
*/
#define X_AXIS 1
#define Y_AXIS 2
#define Z_AXIS 3

#define ACTION_SWITCH_LEFT 4
#define ACTION_SWITCH_MIDDLE 5
#define ACTION_SWITCH_RIGHT 6

#define X_BUTTON 7
#define A_BUTTON 8
#define B_BUTTON 9
#define Y_BUTTON 10

#define ROCKET_SWITCH 11
#define PRIMARY_FIRE 12
#define SECONDARY_FIRE 13

#define ARROW_UP 14
#define ARROW_DOWN 15
#define ARROW_LEFT 16
#define ARROW_RIGHT 17

#define LOOK_UP 18
#define LOOK_DOWN 19
#define LOOK_LEFT 20
#define LOOK_RIGHT 21

#define REGISTER_COUNT 5
#define REGISTER_PINS {1,2,5,7,8};

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

#define VALUE_TYPE uint8_t;

#endif //OPENCONTROLLERPROJECT_CONFIG_H
