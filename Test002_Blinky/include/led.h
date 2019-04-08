/**
  ******************************************************************************
  * @file    led.h
  * @author  II-VI Highyag - Franco Polo - franco.polo@II-VI.com
  * @version V0.01
  * @date    04.04.2019
  * @brief   This file contains functions related to LEDs.
	*
  ******************************************************************************
  * @attention
  *
  * RED 		LED		PI7
	* GREEN 	LED		PB7
	*	YELLOW	LED		PI5
	*
  ******************************************************************************
  */
 
#ifndef __LED_H
#define __LED_H

/* Standard C */
#include <stdint.h>
//#include <stdtypes.h>
#include <stdio.h>
#include <stdbool.h>
 
/* Definitions */
#define LED_OK	0

/* RED LED */
#define LED_RED_PORT			GPIOI
#define LED_RED						GPIO_Pin_7
/* GREEN LED */
#define LED_GREEN_PORT		GPIOB
#define LED_GREEN					GPIO_Pin_7
/* YELLOW LED */
#define LED_YELLOW_PORT		GPIOI
#define LED_YELLOW				GPIO_Pin_5

/* LED init */
uint8_t led__init(void);
/* Red LED ON */
uint8_t led__red_on(void);
/* Red LED OFF */
uint8_t led__red_off(void);
/* Green LED ON */
uint8_t led__green_on(void);
/* Green LED OFF */
uint8_t led__green_off(void);
/* Yellow LED ON */
uint8_t led__yellow_on(void);
/* Yellow LED OFF */
uint8_t led__yellow_off(void);

 
#endif	//__LED_H