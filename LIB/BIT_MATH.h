/*********************************************
 * Author:				Bishoy Adel
 * Creation Data:		1 Mar, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				LIB
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.1		  3 Mar, 2024		Bishoy Adel			    Initial Creation
*********************************************/
#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(Reg, bitnum)                    (Reg |=1<<bitnum)
#define CLR_BIT(Reg, bitnum)                    (Reg &=~(1<<bitnum))
#define GET_BIT(Reg, bitnum)                    ((Reg>>bitnum)& 0x01)
#define TOGGLE_BIT(Reg, bitnum)                 (Reg ^=(1<<bitnum))

#define SET_BYTE(Reg,value)                     ( Reg = value )

#define CONC_BIT(b7,b6,b5,b4,b3,b2,b1,b0)       Conc_help(b7,b6,b5,b4,b3,b2,b1,b0)
#define Conc_help(b7,b6,b5,b4,b3,b2,b1,b0)      0b##b7##b6##b5##b4##b3##b2##b1##b0


#endif
