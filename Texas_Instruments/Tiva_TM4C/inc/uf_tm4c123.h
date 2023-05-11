/*
 *
 * uf_tm4c123.h
 * This header file consists of the various Unified HAL definitions for the TM4C123 MCU
 * 
 */

#ifndef uf_tm4c123_h
#define uf_tm4c123_h

#include "TExaS.h"

#define GPIO_PORTF_DATA_R   (*((volatile unsigned long *) 0x400253FC))  //gpio data register

void uf_gpioWrite(char PORT[], int PIN, int VALUE);     //GPIO write function declaration 
int uf_gpioRead(char PORT[], int PIN);          //GPIO read function declaration

#endif
