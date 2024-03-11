/*********************************************
 * Author:				Bishoy Adel
 * Creation Data:		11 Mar, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				MCAL
 ********************************************/

/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  11 Mar, 2024		Bishoy Adel			    Initial Creation
 *********************************************/
#ifndef SYSTIK_INTERFACE_H
#define SYSTIK_INTERFACE_H


void MSTK_voidInit(void);
void MSTK_voidBusyWait(u32 Copy_u32Ticks );

#endif