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
//Library Inclusion
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

//Lower Layer Inclusion


//Self Leyer Inclusion

//Self Files Inclusion
#include "../include/GPIO_Interface.h"
#include "../include/GPIO_Private.h"
#include "../include/GPIO_Cfg.h"


//Pre_Build Configuration
/* Pins */
void GPIO_voidSetPinMode(GPIO_PORT_e portID, GPIO_PIN_e pinID ,GPIO_Mode_e pinMODE ){


if((portID<=GPIO_PORTC) && (pinID<=PIN15)&&(pinMODE<=GPIO_Analog)){
switch (portID)
{
case GPIO_PORTA:
 switch (pinMODE)
 {

 case GPIO_Input :
    CLR_BIT(GPIOA_MODER,(pinID*2));
    CLR_BIT(GPIOA_MODER,(pinID*2)+1);

    break;

    case GPIO_Output :
    CLR_BIT(GPIOA_MODER,(pinID*2));
    SET_BIT(GPIOA_MODER,(pinID*2)+1);
    
    break;
 
 case GPIO_Alternate :
    SET_BIT(GPIOA_MODER,(pinID*2));
    CLR_BIT(GPIOA_MODER,(pinID*2)+1);
    break;
 
    case GPIO_Analog :
    SET_BIT(GPIOA_MODER,(pinID*2));
    SET_BIT(GPIOA_MODER,(pinID*2)+1);
    break;
 
 default:
    break;
 }   
    break;


case GPIO_PORTB:
 switch (pinMODE)
 {

 case GPIO_Input :
    CLR_BIT(GPIOB_MODER,(pinID*2));
    CLR_BIT(GPIOB_MODER,(pinID*2)+1);

    break;

    case GPIO_Output :
    CLR_BIT(GPIOB_MODER,(pinID*2));
    SET_BIT(GPIOB_MODER,(pinID*2)+1);
    
    break;
 
 case GPIO_Alternate :
    SET_BIT(GPIOB_MODER,(pinID*2));
    CLR_BIT(GPIOB_MODER,(pinID*2)+1);
    break;
 
    case GPIO_Analog :
    SET_BIT(GPIOB_MODER,(pinID*2));
    SET_BIT(GPIOB_MODER,(pinID*2)+1);
    break;
 

  default:
    break;
  }

    break;


case GPIO_PORTC:
switch (pinMODE)
 {

 case GPIO_Input :
    CLR_BIT(GPIOC_MODER,(pinID*2));
    CLR_BIT(GPIOC_MODER,(pinID*2)+1);

    break;

    case GPIO_Output :
    CLR_BIT(GPIOC_MODER,(pinID*2));
    SET_BIT(GPIOC_MODER,(pinID*2)+1);
    
    break;
 
 case GPIO_Alternate :
    SET_BIT(GPIOC_MODER,(pinID*2));
    CLR_BIT(GPIOC_MODER,(pinID*2)+1);
    break;
 
    case GPIO_Analog :
    SET_BIT(GPIOC_MODER,(pinID*2));
    SET_BIT(GPIOC_MODER,(pinID*2)+1);
    break;
 
    break;
default:
    break;
}

default: //ERROR

break;


}

}else{

//NOTHING!


}
}
void GPIO_voidSetPinOutputMode(GPIO_PORT_e portID, GPIO_PIN_e pinID ,GPIO_OutputMode_e pinOutputMODE){

if((portID<=GPIO_PORTC) && (pinID<=PIN15)&&(pinOutputMODE<=GPIO_Output_OpenDrain)){
switch (portID)
{
case GPIO_PORTA:
 switch (pinOutputMODE)
 {

   case GPIO_Output_PushPull :
    CLR_BIT(GPIOA_OTYPER,pinID);

    break;

    case GPIO_Output_OpenDrain :
    CLR_BIT(GPIOA_OTYPER,pinID);
    
    
    break;
 
 default:
    break;
 }   
    break;


case GPIO_PORTB:
 switch (pinOutputMODE)
 {

   case GPIO_Output_PushPull :
    CLR_BIT(GPIOB_OTYPER,pinID);
    

    break;

    case GPIO_Output_OpenDrain :
    CLR_BIT(GPIOB_OTYPER,pinID);
   
    
    break;
 
 default:
    break;
 }   
    break;


case GPIO_PORTC:
switch (pinOutputMODE)
 {

 case GPIO_Output_PushPull :
    CLR_BIT(GPIOC_OTYPER,pinID);
    

    break;

    case GPIO_Output_OpenDrain :
    CLR_BIT(GPIOC_OTYPER,pinID);
   
    
    break;
 
 
default:
    break;
}

default: //ERROR

break;


}

}else{

//NOTHING!


}


}


void GPIO_voidSetPinOutputSpeed(GPIO_PORT_e portID, GPIO_PIN_e pinID ,GPIO_OutputSpeed_e pinOutputSpeed){

   if((portID<=GPIO_PORTC) && (pinID<=PIN15)&&(pinOutputSpeed<=GPIO_VeryHighSpeed)){
switch (portID)
{
case GPIO_PORTA:
 switch (pinMODE)
 {

 case GPIO_LowSpeed :
    CLR_BIT(GPIOA_OSPEEDR,(pinID*2));
    CLR_BIT(GPIOA_OSPEEDR,(pinID*2)+1);

    break;

    case GPIO_MediumSpeed :
    CLR_BIT(GPIOA_OSPEEDR,(pinID*2));
    SET_BIT(GPIOA_OSPEEDR,(pinID*2)+1);
    
    break;
 
 case GPIO_HighSpeed :
    SET_BIT(GPIOA_OSPEEDR,(pinID*2));
    CLR_BIT(GPIOA_OSPEEDR,(pinID*2)+1);
    break;
 
    case GPIO_VeryHighSpeed :
    SET_BIT(GPIOA_OSPEEDR,(pinID*2));
    SET_BIT(GPIOA_OSPEEDR,(pinID*2)+1);
    break;
 
 default:
    break;
 }   
    break;


case GPIO_PORTB:
 switch (pinMODE)
 {

 case GPIO_LowSpeed :
    CLR_BIT(GPIOB_OSPEEDR,(pinID*2));
    CLR_BIT(GPIOB_OSPEEDR,(pinID*2)+1);

    break;

    case GPIO_MediumSpeed :
    CLR_BIT(GPIOB_OSPEEDR,(pinID*2));
    SET_BIT(GPIOB_OSPEEDR,(pinID*2)+1);
    
    break;
 
 case GPIO_HighSpeed :
    SET_BIT(GPIOB_OSPEEDR,(pinID*2));
    CLR_BIT(GPIOB_OSPEEDR,(pinID*2)+1);
    break;
 
    case GPIO_VeryHighSpeed :
    SET_BIT(GPIOB_OSPEEDR,(pinID*2));
    SET_BIT(GPIOB_OSPEEDR,(pinID*2)+1);
    break;
 

  default:
    break;
  }

    break;


case GPIO_PORTC:
switch (pinMODE)
 {

 case GPIO_LowSpeed :
    CLR_BIT(GPIOC_OSPEEDR,(pinID*2));
    CLR_BIT(GPIOC_OSPEEDR,(pinID*2)+1);

    break;

    case GPIO_MediumSpeed :
    CLR_BIT(GPIOC_OSPEEDR,(pinID*2));
    SET_BIT(GPIOC_OSPEEDR,(pinID*2)+1);
    
    break;
 
 case GPIO_HighSpeed :
    SET_BIT(GPIOC_OSPEEDR,(pinID*2));
    CLR_BIT(GPIOC_OSPEEDR,(pinID*2)+1);
    break;
 
    case GPIO_HighSpeed :
    SET_BIT(GPIOC_OSPEEDR,(pinID*2));
    SET_BIT(GPIOC_OSPEEDR,(pinID*2)+1);
    break;
 
    break;
default:
    break;
}

default: //ERROR

break;


}

}else{

//NOTHING!


}
}
void GPIO_voidSetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID ,GPIO_Value_e pinValue){


if((portID<=GPIO_PORTC) && (pinID<=PIN15)&&(pinValue<=GPIO_SET)){
switch (portID)
{
case GPIO_PORTA:
 switch (pinValue)
 {

case GPIO_RESET :
    CLR_BIT(GPIOA_BSRR,(pinID+16));

    break;

 case GPIO_SET :
    SET_BIT(GPIOA_BSRR,pinID);
    
    break;

 default:
    break;
 }   
    break;


case GPIO_PORTB:
 switch (pinMODE)
 {

case GPIO_RESET :
    CLR_BIT(GPIOB_BSRR,(pinID+16));

    break;

 case GPIO_SET :
    SET_BIT(GPIOB_BSRR,pinID);
    
    break;

  default:
    break;
  }

    break;


case GPIO_PORTC:
switch (pinMODE)
 {

case GPIO_RESET :
    CLR_BIT(GPIOC_BSRR,(pinID+16));

    break;

 case GPIO_SET :
    SET_BIT(GPIOC_BSRR,pinID);
    
    break;
 
default:
    break;
}

default: //ERROR

break;


}

}else{

//NOTHING!


}
}
u8 GPIO_u8GetPinValue(GPIO_PORT_e pinID , GPIO_PIN_e pinID){

u8 PinValue=0; 


if((portID<=GPIO_PORTC) && (pinID<=PIN15)){
switch (portID)
{
case GPIO_PORTA:
    
PinValue= GET_BIT(GPIO_PORTA,pinID);
    break;

case GPIO_PORTB:

PinValue= GET_BIT(GPIO_PORTB,pinID);

    break;


case GPIO_PORTC:

PinValue= GET_BIT(GPIO_PORTC,pinID);

 break;

default: //ERROR

break;


}

}else{

//NOTHING!


}


}
/*void GPIO_voidLockPine(GPIO_PORT_e pinID , GPIO_PIN_e pinID){
if((portID<=GPIO_PORTC) && (pinID<=PIN15)){
switch (portID)
{
case GPIO_PORTA:
    
PinValue= GET_BIT(GPIO_PORTA,pinID);
    break;

case GPIO_PORTB:

PinValue= GET_BIT(GPIO_PORTB,pinID);

    break;


case GPIO_PORTC:

PinValue= GET_BIT(GPIO_PORTC,pinID);

 break;

default: //ERROR

break;

}else{

//NOTHING 

}


}

*/
/*****************************************************/
/* Ports */

void GPIO_voidSetPortMode(GPIO_PORT_e portID,GPIO_Mode_e portMODE)
{



}
void GPIO_voidSetPortOutputMode(GPIO_PORT_e portID,GPIO_OutputMode_e portOutputMODE){



}
void GPIO_voidSetPortOutputSpeed(GPIO_PORT_e portID,GPIO_OutputSpeed_e portOutputSpeed){



}
void GPIO_voidSetPortValue(GPIO_PORT_e portID,GPIO_Value_e portValue){



}
u8 GPIO_u8GetPortValue(GPIO_PORT_e pinID){



}
void GPIO_voidLockPort(GPIO_PORT_e pinID){




}