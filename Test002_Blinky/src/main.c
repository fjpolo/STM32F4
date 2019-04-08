/* uC Device Drivers*/
#include "stm32f4xx.h"
/* STM32f407 */
#include "stm32f407xx.h"
/* GPIO */
#include "stm32f4xx_gpio.h"
/* Delay */
#include "delay.h"
/* LED */
#include "led.h"

/*
* MAIN
*/
int main(void){
	uint8_t	ledHandler = LED_OK;
	uint8_t delayHandler = DELAY_OK;

	/* Init */
	ledHandler = led__init();

	/* Superloop */
	for(;;){
		/* Red LED ON */
		ledHandler |= led__red_on();
		/* Delay */
		delayHandler |= delay__ms(500);
		/* Red LED OFF */
		ledHandler |= led__red_off();
		/* Delay */
		delayHandler |= delay__ms(500);
	}

	/* Return 0 */
	return 0;
}
