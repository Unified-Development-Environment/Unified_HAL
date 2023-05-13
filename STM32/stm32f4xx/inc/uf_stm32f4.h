/*
 *
 * uf_stm32f4.h
 * This header file consists of the various Unified HAL definitions for the STM32F4 MCU
 * 
 */

#ifndef INC_UF_STM32F4_H_
#define INC_UF_STM32F4_H_

void uf_gpioWrite(char PORT[], int PIN, int VALUE);     //GPIO write function declaration
int uf_gpioRead(char PORT[], int PIN);          //GPIO read function declaration
void uf_gpioToggle(char PORT[], int PIN);       

void uf_delay(int DELAY);

#endif 
