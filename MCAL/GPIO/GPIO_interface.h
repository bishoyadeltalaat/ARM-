/*********************************************
 * Author:				Bishoy Adel
 * Creation Data:		1 Mar, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				MCAL 
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  1 Mar, 2024		Bishoy Adel			    Initial Creation
*********************************************/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H


/* Pins */
void GPIO_voidSetPinMode();
void GPIO_voidSetPinOutputMode();
void GPIO_voidSetPinOutputSpeed();
void GPIO_voidSetPinValue();
void GPIO_voidSetPullUpDownResistor();
u8 GPIO_u8GetPinValue();
void GPIO_voidLockPine();
/*****************************************************/
/* Ports */
void GPIO_voidSetPortMode();
void GPIO_voidSetPortOutputMode();
void GPIO_voidSetPortOutputSpeed();
void GPIO_voidSetPortValue();
u8 GPIO_u8GetPortValue();
void GPIO_voidLockPort();

#endif 