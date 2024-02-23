1// Library Inclusion

#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

// Lower Layer Inclusion

// Self Layer Inclusion

// Self Files Inclusion

#include "../include/RCC_interface.h"
#include "../include/RCC_private.h"
#include "../include/RCC_config.h"



// Pre-Build Configuration
void RCC_voidInit(void)
{
#if RCC_CLOCK_SOURCE == RCC_CLK_HSI
    SET_BIT(RCC CR, 0);  // Enable  HSI
    CLR_BIT(RCC CR, 16); // Disable HSE
    CLR_BIT(RCC CR, 24); // Disable PLL
    
    //Polling (Busy Wait) Till the HSI Is Ready
    while(GET_BIT(RCC_CR,1)==0);

// Select The HSI As Input Clock Source To The Processor 

CLR_BIT(RCC_CFGR, 0);
CLR_BIT(RCC_CFGR, 1);

#elif RCC_CLOCK_SOURCE == RCC_CLK_HSE
    CLR_BIT(RCC CR, 0);  // Disable HSI
    SET_BIT(RCC CR, 16); // Enable  HSE
    CLR_BIT(RCC CR, 24); // Disable PLL

 //Polling (Busy Wait) Till the HSE Is Ready
    while(GET_BIT(RCC_CR,17)==0);

// Select The HSE As Input Clock Source To The Processor 

SET_BIT(RCC_CFGR, 1);
CLR_BIT(RCC_CFGR, 0);


#elif RCC_CLOCK_SOURCE == RCC_CLK_PLL
    #if RCC_CLOCK_SOURCE == RCC_CLK_HSI

     CLR_BIT(RCC_PLLCFGR,22);

    #elif RCC_CLOCK_SOURCE == RCC_CLK_HSE
     
     SET_BIT(RCC_PLLCFGR,22);

    #else
         #error "RCC_CLOCK_SOURCE Configuration Error"

    #endif
    CLR_BIT(RCC CR, 0);  // Disable HSI
    CLR_BIT(RCC CR, 16); // Disable HSE
    SET_BIT(RCC CR, 24); // Enable  PLL

    //Polling (Busy Wait) Till the PLL Is Ready
    while(GET_BIT(RCC_CR,25)==0);

// Select The PLL As Input Clock Source To The Processor 

CLR_BIT(RCC_CFGR, 0);
SET_BIT(RCC_CFGR, 1);


#else

#error "RCC_CLOCK_SOURCE Configuration Error"

#endif

//AHB Prescaler Settings
RCC_CR &= ~(RCC_AHB_PRESCALER_MASK <<4);
RCC_CR |= (RCC_AHB_PRESCALER<<4);
//APB1 Prescaler Settings
RCC_CR &= ~(RCC_APB1_PRESCALER_MASK <<10);
RCC_CR |= (RCC_APB1_PRESCALER<<10);


//APB1 Prescaler Settings
RCC_CR &= ~(RCC_APB2_PRESCALER_MASK<<13);
RCC_CR |=  (RCC_APB2_PRESCALER<<13);

}

// Post-Build Configuration
void RCC_voidEnableClockSource(u8 Copy_u8ClockSource)
{

    switch (Copy_u8ClockSource)
    {
    case RCC_HSI:
        SET_BIT(RCC CR, 0);
        break;
    case RCC_HSE:
        SET_BIT(RCC CR, 16);
        break;
    case RCC_PLL:
        SET_BIT(RCC CR, 24);
        break;
    default:
        break;
    }
}

void RCC_voidDisableClockSource(u8 Copy_u8ClockSource)
{

    switch (Copy_u8ClockSource)
    {
    case RCC_HSI:
        CLR_BIT(RCC CR, 0);
        break;
    case RCC_HSE:
        CLR_BIT(RCC CR, 16);
        break;
    case RCC_PLL:
        CLR_BIT(RCC CR, 24);
        break;
    default:
        break;
    }
}
void RCC_voidEnablePeripheralClock(u8 Copy_u8BusName, u8 Copy_u8PeripheralName)
{
     switch(Copy_u8BusName)
     {
       case RCC_AHB:
       SET_BIT(RCC_AHB1ENR,Copy_u8PeripheralName);
       break;
       case RCC_APB1:
       SET_BIT(RCC_APB1ENR,Copy_u8PeripheralName);
       break;
       case RCC_APB1:
       SET_BIT(RCC_APB2ENR,Copy_u8PeripheralName);
       break;
       default:
       //Error
       break;


     }




}
void RCC_voidDisablePeripheralClock(u8 Copy_u8BusName, u8 Copy_u8PeripheralName)
{
switch(Copy_u8BusName)
     {
       case RCC_AHB:
       CLR_BIT(RCC_AHB1ENR,Copy_u8PeripheralName);
       break;
       case RCC_APB1:
       CLR_BIT(RCC_APB1ENR,Copy_u8PeripheralName);
       break;
       case RCC_APB1:
       CLR_BIT(RCC_APB2ENR,Copy_u8PeripheralName);
       break;
       default:
       //Error
       break;


     }




}