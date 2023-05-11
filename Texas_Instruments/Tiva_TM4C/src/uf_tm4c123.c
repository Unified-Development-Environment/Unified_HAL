/*
 * 
 * uf_tm4c123.c
 * Consists of Implementations of the Unified HAL functions targetting the TM4C123 MCU 
 *     
 */

#include "uf_tm4c123.h"

unsigned uint_pow(unsigned base, unsigned exp)   //calculates powers for integers
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

void uf_gpioWrite(char PORT[], int PIN, int VALUE) {	    //Write GPIO_OUTPUT function

    if(VALUE == 0) {    
        GPIO_PORTF_DATA_R = 0;   //turns led off
    } else {
        GPIO_PORTF_DATA_R = uint_pow(2, PIN);   //turns led on
    }

}

int uf_gpioRead(char PORT[], int PIN) {			//Read GPIO_INPUT function

	return GPIO_PORTF_DATA_R & uint_pow(2, PIN);

}
