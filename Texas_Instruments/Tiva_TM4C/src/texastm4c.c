#include "texastm4x_hal.h"

unsigned uint_pow(unsigned base, unsigned exp)
{
    unsigned result = 1;
    while (exp)
    {
        if (exp % 2)
           result *= base;
        exp /= 2;
        base *= base;
    }
    return result;
}

void uf_gpioWrite(char* PORT, int PIN, int VALUE) {

    if(VALUE == 0) {    
        GPIO_PORTF_DATA_R = 0;   //LED is off
    } else {
        GPIO_PORTF_DATA_R = uint_pow(2, PIN);   //LED is on
    }

}

int uf_gpioRead(char* PORT, int PIN) {

	return GPIO_PORTF_DATA_R & uint_pow(2, PIN);

}
