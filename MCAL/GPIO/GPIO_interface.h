/*********************************************
 * Author:                Bishoy Adel
 * Creation Data:         9 Mar, 2024
 * Version:               v1.2
 * Compiler:              GNU ARM-GCC
 * Controller:            STM32F401CCU6
 * Layer:                 MCAL 
 ********************************************/

/*********************************************
 * Version     Date                  Author                  Description
 * v1.2        9 Mar, 2024           Bishoy Adel             Initial Creation
*********************************************/

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

/* Enums for GPIO configurations */
typedef enum{
    GPIO_PORTA=0 ,      // GPIO Port A
    GPIO_PORTB,         // GPIO Port B
    GPIO_PORTC          // GPIO Port C
}GPIO_PORT_e ;

typedef enum{
    PIN0=0 ,            // GPIO Pin 0
    PIN1,               // GPIO Pin 1
    PIN2,               // GPIO Pin 2
    PIN3,               // GPIO Pin 3
    PIN4,               // GPIO Pin 4
    PIN5,               // GPIO Pin 5
    PIN6,               // GPIO Pin 6
    PIN7,               // GPIO Pin 7
    PIN8,               // GPIO Pin 8
    PIN9,               // GPIO Pin 9
    PIN10,              // GPIO Pin 10
    PIN11,              // GPIO Pin 11
    PIN12,              // GPIO Pin 12
    PIN13,              // GPIO Pin 13
    PIN14,              // GPIO Pin 14
    PIN15               // GPIO Pin 15
}GPIO_PIN_e ;

typedef enum{
    GPIO_Input=0   ,    // GPIO Input mode
    GPIO_Output    ,    // GPIO Output mode
    GPIO_Alternate ,    // GPIO Alternate function mode
    GPIO_Analog    ,    // GPIO Analog mode
}GPIO_Mode_e ;

typedef enum{
    GPIO_Output_PushPull=0 ,    // GPIO Output push-pull mode
    GPIO_Output_OpenDrain       // GPIO Output open-drain mode
}GPIO_OutputMode_e ;

typedef enum{
    GPIO_LowSpeed =0,           // GPIO Low-speed output
    GPIO_MediumSpeed,           // GPIO Medium-speed output
    GPIO_HighSpeed  ,           // GPIO High-speed output
    GPIO_VeryHighSpeed          // GPIO Very high-speed output
}GPIO_OutputSpeed_e;

typedef enum{
    GPIO_RESET=0,       // GPIO Low
    GPIO_SET            // GPIO High
}GPIO_Value_e ;

/* Pins */
void MGPIO_voidSetPinMode(GPIO_PORT_e portID, GPIO_PIN_e pinID ,GPIO_Mode_e pinMODE ); // Set pin mode
void MGPIO_voidSetPinOutputMode(GPIO_PORT_e portID, GPIO_PIN_e pinID ,GPIO_OutputMode_e pinOutputMODE); // Set pin output mode
void MGPIO_voidSetPinOutputSpeed(GPIO_PORT_e portID, GPIO_PIN_e pinID ,GPIO_OutputSpeed_e pinOutputSpeed); // Set pin output speed
void MGPIO_voidSetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID ,GPIO_Value_e pinValue); // Set pin value
//void GPIO_voidSetPullUpDownResistor(GPIO_PORT_e portID, GPIO_PIN_e pinID ,); // Set pull-up/pull-down resistor
u16 MGPIO_u8GetPinValue(GPIO_PORT_e portID , GPIO_PIN_e pinID); // Get pin value
void MGPIO_voidLockPine(GPIO_PORT_e portID , GPIO_PIN_e pinID); // Lock pin configuration

/*****************************************************/
/* Ports */
void MGPIO_voidSetPortMode(GPIO_PORT_e portID,GPIO_Mode_e portMODE); // Set port mode
void MGPIO_voidSetPortOutputMode(GPIO_PORT_e portID,GPIO_OutputMode_e portOutputMODE); // Set port output mode
void MGPIO_voidSetPortOutputSpeed(GPIO_PORT_e portID,GPIO_OutputSpeed_e portOutputSpeed); // Set port output speed
void MGPIO_voidSetPortValue(GPIO_PORT_e portID,GPIO_Value_e portValue); // Set port value
u16 MGPIO_u8GetPortValue(GPIO_PORT_e pinID); // Get port value
void MGPIO_voidLockPort(GPIO_PORT_e pinID); // Lock port configuration

#endif 
