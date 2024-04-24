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
#ifndef SYSTIK_PRIVATE_H
#define SYSTIK_PRIVATE_H

#define STK_AHB          0
#define STK_AHB_DIV_8    1
#define STK_DISABLE      1
#define STK_ENABLE       0

#define STK_CLK_SRC_BIT       2
#define STK_INT_CTRL_BIT      1
#define STK_CTRL_BIT          0

typedef struct {

volatile u32 CTRL  ;
volatile u32 LOAD  ;
volatile u32 VAL   ;
volatile u32 CALIB ;
}STK_t;

#define SINGLE_INTERVAL       0
#define PEROIDIC_INTERVAL     1

#define STK              ((volatile STK_t*)0xE000E010)















#endif
