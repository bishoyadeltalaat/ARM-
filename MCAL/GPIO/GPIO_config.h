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
#ifndef GPIO_CONFIG_H
#define GPIO_CONFIG_H


/* Options For Ports
GPIOA_MODER
GPIOB_MODER
GPIOC_MODER
 */
#define GPIO_DataPort      GPIOA_MODER 

/* Options For Pins
GPIOA_MODER
GPIOB_MODER
GPIOC_MODER
 */
#define GPIO_Pin 

/* Options For Modes 
GPIO_InputMode    
GPIO_OutputMode   
GPIO_AlternateMode
GPIO_AnalogMode   
 */
#define GPIO_Mode        GPIO_InputMode


/* Options For Output Modes 

GPIO_OutputOpenDrain
GPIO_OutputPushPull 

 */
#define GPIO_OutputMode        GPIO_OutputOpenDrain


/* Options For Output Speeds 

GPIO_LowSpeed     
GPIO_MediumSpeed  
GPIO_HighSpeed    
GPIO_VeryHighSpeed

 */
#define GPIO_OutputSpeed        GPIO_LowSpeed








#endif 