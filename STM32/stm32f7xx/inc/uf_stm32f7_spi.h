/* STM32F7_SPI_H */

#ifndef STM32F7_SPI_H
#define STM32F7_SPI_H

void spi_init(void);
void spi_transfer(char* data, int len);

#endif 
