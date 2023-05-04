#include "texastm4x_hal.h"

void uf_gpioWrite(char* PORT, int PIN, int VALUE) {

    if(VALUE == 0) {    
        GPIO_PORTF_DATA_R = 0x00;   //LED is off
    } else {
        GPIO_PORTF_DATA_R = 0x04;   //LED is on
    }

}