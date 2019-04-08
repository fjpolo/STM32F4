/*
 *	file: delay.c
 */
 
/* delay */
#include "delay.h"

/* delay__ms */
uint8_t delay__ms(uint32_t value_ms){
	uint8_t delay_handler = DELAY_OK;
	//
	uint32_t i;

	while(value_ms--){
		/**/
		i = 1000;
		while(i--);
	}
	//
	return delay_handler;
}

