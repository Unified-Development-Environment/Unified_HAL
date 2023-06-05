/*
 *
 * uf_stm32f7.h
 * This header file consists of the various Unified HAL definitions for the STM32F7 MCU
 * 
 */

#ifndef UF_STM32F7_H
#define UF_STM32F7_H

#ifdef UF_USE_GPIO
    // include GPIO sub-library
    #include "uf_stm32_gpio_common_.h"
    #include "uf_stm32_gpiof7.h"
#endif

#ifdef UF_USE_SPI
    // include SPI sub-library
    #include "uf_stm32_spi_common.h"
    #include "uf_stm32f7_spi.h"
#endif

void uf_gpioToggle(char PORT[], int PIN);       


#endif 