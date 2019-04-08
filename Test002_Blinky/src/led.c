/* LED */
#include "led.h"
/**/
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"

/* LED init */
uint8_t led__init(void){
	uint8_t led_handler = LED_OK;
	
	/* Create configuration files */
	GPIO_InitTypeDef GPIO_LED_RED_YELLOW;
	GPIO_InitTypeDef GPIO_LED_GREEN;
	
	/* Enable GPIO ports */
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOI, ENABLE);
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
	
	/* Prepare configuration file - RED & YELLOW */
	GPIO_LED_RED_YELLOW.GPIO_Pin = LED_RED | LED_YELLOW;
	GPIO_LED_RED_YELLOW.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_LED_RED_YELLOW.GPIO_OType = GPIO_OType_PP;
	GPIO_LED_RED_YELLOW.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_LED_RED_YELLOW.GPIO_PuPd = GPIO_PuPd_NOPULL;
	
	/* Prepare configuration file - GREEN */
	GPIO_LED_GREEN.GPIO_Pin = LED_GREEN;
	GPIO_LED_GREEN.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_LED_GREEN.GPIO_OType = GPIO_OType_PP;
	GPIO_LED_GREEN.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_LED_GREEN.GPIO_PuPd = GPIO_PuPd_NOPULL;
	
	/* Configure GPIOs */
	GPIO_Init(LED_RED_PORT, &GPIO_LED_RED_YELLOW);
	GPIO_Init(LED_GREEN_PORT, &GPIO_LED_GREEN);
	
	//
	return led_handler;
}

/* Red LED ON */
uint8_t led__red_on(void){
	uint8_t led_handler = LED_OK;
	//
  GPIO_SetBits(LED_RED_PORT, LED_RED);
	//
	return led_handler;
}

/* Red LED OFF */
uint8_t led__red_off(void){
	uint8_t led_handler = LED_OK;
	//
	GPIO_ResetBits(LED_RED_PORT, LED_RED);
	//
	return led_handler;
}

/* Green LED ON */
uint8_t led__green_on(void){
	uint8_t led_handler = LED_OK;
	//
  GPIO_SetBits(LED_GREEN_PORT, LED_GREEN);
	//
	return led_handler;
}

/* Green LED OFF */
uint8_t led__green_off(void){
	uint8_t led_handler = LED_OK;
	//
	GPIO_ResetBits(LED_GREEN_PORT, LED_GREEN);
	//
	return led_handler;
}

/* Yellow LED ON */
uint8_t led__yellow_on(void){
	uint8_t led_handler = LED_OK;
	//
  GPIO_SetBits(LED_YELLOW_PORT, LED_YELLOW);
	//
	return led_handler;
}

/* Yellow LED OFF */
uint8_t led__yellow_off(void){
	uint8_t led_handler = LED_OK;
	//
	GPIO_ResetBits(LED_YELLOW_PORT, LED_YELLOW);
	//
	return led_handler;
}