#define GPIO_PORTF_DATA_R   (*((volatile unsigned long *) 0x400253FC))

void uf_gpioWrite(char* PORT, int PIN, int VALUE);