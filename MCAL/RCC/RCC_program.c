//Library Inclusion
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

//Lower Layer Inclusion


//Self Leyer Inclusion

//Self Files Inclusion
#include "../include/RCC_Interface.h"
#include "../include/RCC_Private.h"
#include "../include/RCC_Cfg.h"


//Pre_Build Configuration
void RCC_voidInit(void)
{
	#if RCC_CLOCK_SOURCE == RCC_CLK_HSI
		SET_BIT(RCC_CR, RCC_CR_HSION);		//Enable  HSI
		CLR_BIT(RCC_CR, RCC_CR_HSEON);		//Disable HSE
		CLR_BIT(RCC_CR, RCC_CR_PLLON);		//Disable PLL
		
		//Polling (Busy Wait) Till the HSI Is Ready
		while(GET_BIT(RCC_CR, RCC_CR_HSIRDY) == 0);
		
		//Select the HSI As Input Clock Source To The Processor
		CLR_BIT(RCC_CFGR, RCC_CFGR_SW0);
		CLR_BIT(RCC_CFGR, RCC_CFGR_SW1);
		
	#elif RCC_CLOCK_SOURCE == RCC_CLK_HSE
		CLR_BIT(RCC_CR, RCC_CR_HSION);		//Disable HSI
		SET_BIT(RCC_CR, RCC_CR_HSEON);		//Enable  HSE
		CLR_BIT(RCC_CR, RCC_CR_PLLON);		//Disable PLL
		
		//Polling (Busy Wait) Till the HSE Is Ready
		while(GET_BIT(RCC_CR, RCC_CR_HSERDY) == 0);
		
		//Select the HSE As Input Clock Source To The Processor
		SET_BIT(RCC_CFGR, RCC_CFGR_SW0);
		CLR_BIT(RCC_CFGR, RCC_CFGR_SW1);
		
	#elif RCC_CLOCK_SOURCE == RCC_CLK_PLL
		#if RCC_CLK_PLL_SRC == RCC_CLK_HSI
			CLR_BIT(RCC_PLLCFGR, RCC_PLLCFGR_PLLSRC);
			
		#elif RCC_CLK_PLL_SRC == RCC_CLK_HSE
			SET_BIT(RCC_PLLCFGR, RCC_PLLCFGR_PLLSRC);
		
		#else
			#error "RCC_CLK_PLL_SRC Configuration Error"
		
		#endif
		CLR_BIT(RCC_CR, RCC_CR_HSION);		//Disable  HSI
		CLR_BIT(RCC_CR, RCC_CR_HSEON);		//Disable  HSE
		SET_BIT(RCC_CR, RCC_CR_PLLON);		//Enable   PLL
		
		//Polling (Busy Wait) Till the PLL Is Ready
		while(GET_BIT(RCC_CR, RCC_CR_PLLRDY) == 0);
		
		//Select the HSE As Input Clock Source To The Processor
		CLR_BIT(RCC_CFGR, RCC_CFGR_SW0);
		SET_BIT(RCC_CFGR, RCC_CFGR_SW1);
		
	#else
		#error "RCC_CLOCK_SOURCE Configuration Error"
	#endif
	
    //AHB Prescaler Settings
    RCC_CR &= ~(RCC_AHB_PRESCALER_MASK << 4);
    RCC_CR |= (RCC_AHB_PRESCALER << 4);
	
    //APB1 Prescaler Settings
    RCC_CR &= ~(RCC_APB1_PRESCALER_MASK << 10);
    RCC_CR |= (RCC_APB1_PRESCALER << 10);
	
    //APB2 Prescaler Settings
    RCC_CR &= ~(RCC_APB2_PRESCALER_MASK << 13);
    RCC_CR |= (RCC_APB2_PRESCALER << 13);
	
}

//Post-Build Configuration
void RCC_voidEnableClockSource(u8 Copy_u8ClockSource)
{
	if(Copy_u8ClockSource == RCC_HSI)
	{
		SET_BIT(RCC_CR, RCC_CR_HSION);
	}
	else if(Copy_u8ClockSource == RCC_HSE)
	{
		SET_BIT(RCC_CR, RCC_CR_HSEON);
	}
	else if(Copy_u8ClockSource == RCC_PLL)
	{
		SET_BIT(RCC_CR, RCC_CR_PLLON);
	}
	else
	{
			//Error
	}
}

void RCC_voidDisableClockSource(u8 Copy_u8ClockSource)
{
	if(Copy_u8ClockSource == RCC_HSI)
	{
		CLR_BIT(RCC_CR, RCC_CR_HSION);
	}
	else if(Copy_u8ClockSource == RCC_HSE)
	{
		CLR_BIT(RCC_CR, RCC_CR_HSEON);
	}
	else if(Copy_u8ClockSource == RCC_PLL)
	{
		CLR_BIT(RCC_CR, RCC_CR_PLLON);
	}
	else
	{
			//Error
	}
}



void RCC_voidEnablePeripheralClock(u8 Copy_u8BusName, u8 Copy_u8PeripheralName)
{
	switch(Copy_u8BusName)
	{
		case RCC_AHB:
			SET_BIT(RCC_AHB1ENR, Copy_u8PeripheralName);
		break;
		
		case RCC_APB1:
			SET_BIT(RCC_APB1ENR, Copy_u8PeripheralName);
		break;
		
		case RCC_APB2:
			SET_BIT(RCC_APB2ENR, Copy_u8PeripheralName);
		break;
		
		default:
			//ERROR
		break;
		
	}
}

void RCC_voidDisablePeripheralClock(u8 Copy_u8BusName, u8 Copy_u8PeripheralName)
{
		switch(Copy_u8BusName)
	{
		case RCC_AHB:
			CLR_BIT(RCC_AHB1ENR, Copy_u8PeripheralName);
		break;
		
		case RCC_APB1:
			CLR_BIT(RCC_APB1ENR, Copy_u8PeripheralName);
		break;
		
		case RCC_APB2:
			CLR_BIT(RCC_APB2ENR, Copy_u8PeripheralName);
		break;
		
		default:
			//ERROR
		break;
		
	}
}