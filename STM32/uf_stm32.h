//uf_stm32.h
//STM32 MCU selector header file

#ifndef UF_STM32_H 
#define UF_STM32_H 

#ifdef STM32F7 
    // include MCU header file 
    #include "uf_stm32f7.h" 
#endif

#ifdef STM32F4 
    // include MCU header file 
    #include "uf_stm32f4.h" 
#endif

#endif
