/*
 * 
 * uf_stm32_gpio_common.c
 * Consists of COMMON GPIO Implementations of the Unified HAL functions targetting the STM32 MCU 
 *     
 */

#include "uf_stm32_gpio_common.h"
#include "stm32f7xx_hal_gpio.h"

void uf_gpioWrite(char GPIOx[], int GPIO_Pin, int PinState) {
    HAL_GPIO_WritePin(GPIOx, GPIO_Pin, PinState);
}

uint8_t uf_gpioRead(char GPIOx[], uint16_t GPIO_Pin) {
    return HAL_GPIO_ReadPin(GPIOx, GPIO_Pin);
}