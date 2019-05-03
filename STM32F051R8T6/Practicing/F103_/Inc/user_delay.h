/*
 * user_delay.h
 *
 *  Created on: Apr 22, 2019
 *      Author: hoai
 */

#ifndef USER_DELAY_H_
#define USER_DELAY_H_
#include "main.h"
//Phai goi ham nay truoc khi su dung cac ham delay khac
void delay_init(uint8_t SYSCLK);
//Tao tre ms
void delay_ms(uint16_t nms);
//Tao tre us
void delay_us(uint32_t nus);
/**************************************************************/

#endif /* USER_DELAY_H_ */