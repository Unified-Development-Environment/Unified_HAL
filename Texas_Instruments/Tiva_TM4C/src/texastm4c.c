#include "texastm4x_hal.h"

void GPIO_Write(char* PORT, int PIN, int VALUE) {

    if(VALUE == 0) {
        GPIO_PORTF_DATA_R = 0x00;
    } else {
        GPIO_PORTF_DATA_R = 0x04;
    }

}