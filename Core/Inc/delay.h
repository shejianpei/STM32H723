#ifndef _DELAY_H
#define _DELAY_H

#include "stm32h7xx_hal.h"
void Delay_Tim_Init(void);
void delay_us(uint16_t us);
void delay_ms(uint16_t ms);
#endif
