#include <Joystick.h>
#include <utils/linkedList.h>
#include "input/joystick.h"
#include "utils/ShiftRegister.h"

#include "progmemHelper.h"

#if defined(_USING_HID)

#define JOYSTICK_REPORT_ID  0x03
#define JOYSTICK_STATE_SIZE 4

static const uint8_t _hidReportDescriptor[] PROGMEM = {
        USAGE_PAGE(GENERIC_DESKTOP),    //Generic desktop
        USAGE(USAGE_JOYSTICK),        //Joystick
        COLLECTION(COLLECTION_APP),   //Application
            REPORT(JOYSTICK_REPORT_ID),
            //16 button
            USAGE_PAGE(USAGE_PAGE_BUTTON),       //Button
            USAGE_MINIMUM(0x01),    //Button 1
            USAGE_MAXIMUM(0x10),    //Button 16
            LOGICAL_MINIMUM(0x00),  //0
            LOGICAL_MAXIMUM(0x01),  //1
            REPORT_SIZE(0x01),      //1
            REPORT_COUNT(0x10),     //16
            UNIT_EXPONENT(0x00),    //0
            UNIT(UNIT_NONE),             //none
            INPUT_TYPE(INPUT_DVA),       //data, var, abs
            //x and y
            USAGE_PAGE(GENERIC_DESKTOP),
            USAGE(USAGE_POINTER),            //pointer
            LOGICAL_MINIMUM(0x81),  //-127
            LOGICAL_MAXIMUM(0x7f),  //127
            COLLECTION(COLLECTION_PHYSICAL),       //physical
                USAGE(0x30),            //x
                USAGE(0x31),            //y
                REPORT_SIZE(0x08),      //8
                REPORT_COUNT(0x02),     //2
                INPUT_TYPE(INPUT_DVA),       //data, var, abs
            END_COLLECTION,
        END_COLLECTION
};
#endif

ShiftRegister registers[];

void setup() {
    // put your setup code here, to run once:

}

void loop() {
    // put your main code here, to run repeatedly:

}