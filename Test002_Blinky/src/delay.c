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

/* delay__s*/
uint8_t delay_s(uint32_t value_s){
  uint8_t delay_handler = DELAY_OK;
  //
  /* Loop until value_s is met */
  for(uint32_t i = 0; i<value_s; i++){
    /* Call 1000mS delay */
    delay_ms(1000);
  }
  //
  return delay_handler;
}
