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
u32 MSTK_u32SetRemainingTime(void);
u32 MSTK_u32GetElapsedTime(void);
void MSTK_voidResetTimer(void);
void MSTK_voidPreloadValue(u32 Copy_u32PreLoadValue);
void MSTK_voidSetPeriodicInterval(void (*CallBackFunction)(void));
void MSTK_voidSetSingleInterval(void (*CallBackFunction)(void));
void MSTK_voidSTKEnable(void);
void MSTK_voidSTKDisable(void);
#endif
