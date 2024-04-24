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
 * v1.1		  23 APRIL, 2024    Bishoy Adel			    Adding NEW APIs
 *                                                      u32 MSTK_u32SetRemainingTime(void);
                                                        u32 MSTK_u32GetElapsedTime(void);
                                                        void MSTK_voidResetTimer(void);
                                                        void MSTK_voidPreloadValue(u32 Copy_u32PreLoadValue);
                                                        void MSTK_voidSetPeriodicInterval(void (*CallBackFunction)(void));
                                                        void MSTK_voidSetSingleInterval(void (*CallBackFunction)(void));
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


static void (*pNotificationFunction)(void) = NULLPTR;
static u8InternalTypeFlag = SINGLE_INTERVAL;

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
CLR_BIT(STK -> CTRL,STK_INT_CTRL_BIT);

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
// Time remaining
u32 MSTK_u32SetRemainingTime(void){

	u32 Local_u32RemainingTime;
	Local_u32RemainingTime=STK->VAL;

	return Local_u32RemainingTime;

}
//Time passed
u32 MSTK_u32GetElapsedTime(void){


	u32 Local_u32RemainingTime;
	Local_u32RemainingTime= STK->LOAD - STK->VAL;

	return Local_u32RemainingTime;

}

void MSTK_voidResetTimer(void)
{


	STK ->VAL=0;


}

void MSTK_voidPreloadValue(u32 Copy_u32PreLoadValue)
{

	STK-> LOAD= Copy_u32PreLoadValue;


}

//single interrupt
void MSTK_voidSetSingleInterval(void (*CallBackFunction)(void)){



	pNotificationFunction=CallBackFunction;
	u8InternalTypeFlag=SINGLE_INTERVAL;
	SET_BIT(STK->CTRL,0);


}

void MSTK_voidSTKEnable(void){

	SET_BIT(STK->CTRL,0);

}

void MSTK_voidSTKDisable(void){

	CLR_BIT(STK->CTRL,STK_CTRL_BIT);

}

//periodic interrupt
void MSTK_voidSetPeriodicInterval(void (*CallBackFunction)(void)){


	pNotificationFunction=CallBackFunction;
	u8InternalTypeFlag=PEROIDIC_INTERVAL;


}
void SysTick_Handler(void){

    u8 LocalTempVar = 0;
    if(u8InternalTypeFlag == SINGLE_INTERVAL)
    {
        // Disable Timer
        STK -> LOAD = 0;
        STK -> VAL = 0;
        CLR_BIT(STK->CTRL, 0);
    }
    if(pNotificationFunction != NULLPTR)
    {
        pNotificationFunction();
    }
    // Flag Clearance
    LocalTempVar = GET_BIT(STK -> CTRL, 16);
}
