/*********************************************
 * Author:				Bishoy Adel
 * Creation Data:		11 APRIL, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				MCAL
 ********************************************/

/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  11 APRIL, 2024		Bishoy Adel			    Initial Creation
 *********************************************/
#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H

#define     MNVIC_INT_DISABLE       0
#define     MNVIC_INT_ENABLE        1

void MNVIC_voidInit(void);
void MNVIC_voidPeripheralInterruptControl(u8 Copy_u8PeripheralID, u8 Copy_u8InterruptState);
void MNVIC_voidSetPendingFlag(u8 Copy_u8PeripheralID);
void MNVIC_voidSetPeripheralPriority(u8 Copy_u8PeripheralID, u8 Copy_u8Priority);

#endif