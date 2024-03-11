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
// Library Inclusion
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

// Lower Layer Inclusion

// Self Layer Inclusion

// Self Files Inclusion
#include "../include/STK_interface.h"
#include "../include/STK_private.h"
#include "../include/STK_config.h"

void MSTK_voidInit(void){

// Choose the Clock Source 
#if  STK_CLK_SRC == STK_AHB
SET_BIT(STK->CTRL,STK_CLK_SRC_BIT);

#elif STK_CLK_SRC == STK_AHB_DIV_8
CLR_BIT(STK->CTRL,STK_CLK_SRC_BIT);

#else 
#error "STK_CLK_SRC  Configuration Error"

#endif 
/****************************************************************/



// Control THE SYSTICK Interrupt   
#if  STK_INT_CTRL == STK_DISABLE
CLR_BIT(STK->CTRL,STK_INT_CTRL_BIT);

#elif STK_INT_CTRL == STK_ENABLE
SET_BIT(STK->CTRL,STK_INT_CTRL_BIT);

#else 
#error "STK_INT_CTRL  Configuration Error"

#endif 

/****************************************************************/

// Control THE SYSTICK Counter Enable/Disable    
#if  STK_CTRL == STK_DISABLE
CLR_BIT(STK->CTRL,STK_CTRL_BIT);

#elif STK_CTRL == STK_ENABLE
SET_BIT(STK->CTRL,STK_CTRL_BIT);

#else 
#error "STK_CTRL  Configuration Error"

#endif 

}
void MSTK_voidBusyWait(u32 Copy_u32Ticks ){

// Load The Ticks Value into the Load Register 
STK->LOAD = Copy_u32Ticks;
// BUSY WAIT on the flag
while ( GET_BIT(STK -> CTRL,16)==0);
// Clear the Flag
STK->VAL =0;

}
