#define GPIO_PORTF_DATA_R   (*((volatile unsigned long *) 0x400253FC))

void GPIO_Write(char* PORT, int PIN, int VALUE);