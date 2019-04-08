/**
  ******************************************************************************
  * @file    delay.h
  * @author  II-VI Highyag - Franco Polo - franco.polo@II-VI.com
  * @version V0.01
  * @date    04.04.2019
  * @brief   This file contains functions related to time delays.
	*
  ******************************************************************************
  * @attention
  *
  * XXX
	*
  ******************************************************************************
  */

#ifndef __DELAY_H
#define __DELAY_H

/* Standard C */
#include <stdint.h>
//#include <stdtypes.h>
#include <stdio.h>
#include <stdbool.h>

/**/
#define DELAY_OK	0

/* delay__ms */
uint8_t delay__ms(uint32_t value_ms);

/* delay__s*/
uint8_t delay_s(uint32_t value_s);


#endif	//DELAY_H
