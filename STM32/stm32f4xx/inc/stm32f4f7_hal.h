/*
 * stm32f4f7_hal.h
 *
 *  Created on: Apr 27, 2023
 *      Author: apple
 */

#ifndef INC_STM32F4F7_HAL_H_
#define INC_STM32F4F7_HAL_H_

void uf_gpioWrite(char* PORT, int PIN, int VALUE);
int uf_gpioRead(char* PORT, int PIN);

#endif /* INC_STM32F4F7_HAL_H_ */
