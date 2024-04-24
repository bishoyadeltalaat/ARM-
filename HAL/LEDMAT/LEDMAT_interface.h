/*********************************************
 * Author:				Bishoy Adel
 * Creation Data:		16 April, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				HAL
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.1		  16 April, 2024	   Bishoy Adel		      Initial Creation
*********************************************/
#ifndef LEDMAT_INTERFACE_H
#define LEDMAT_INTERFACE_H

void HLEDMAT_voidInit(void);
void HLED_voidDisplay(u8 * Copy_pu8Data);


#endif