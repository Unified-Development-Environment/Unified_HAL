/*
 *
 * uf_stm32f7.h
 * This header file consists of the various Unified HAL definitions for the STM32F7 MCU
 * 
 */

#ifndef INC_UF_STM32F7_H_
#define INC_UF_STM32F7_H_

void uf_gpioWrite(char PORT[], int PIN, int VALUE);     //GPIO write function declaration
int uf_gpioRead(char PORT[], int PIN);          //GPIO read function declaration

#endif 