#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H


#define 	RCC_HSI							0
#define 	RCC_HSE							1
#define 	RCC_PLL							2
		
#define		RCC_CR_HSION					0
#define		RCC_CR_HSIRDY					1
#define		RCC_CR_HSEON					16
#define		RCC_CR_HSERDY					17
#define		RCC_CR_HSEBYP					18
#define		RCC_CR_CSSON					19
#define		RCC_CR_PLLON					24
#define		RCC_CR_PLLRDY					25
#define		RCC_CR_PLL2SON					26
#define		RCC_CR_PLL2SRDY					27
		
#define		RCC_PLLCFGR_PLLM0				0
#define		RCC_PLLCFGR_PLLM1				1
#define		RCC_PLLCFGR_PLLM2				2
#define		RCC_PLLCFGR_PLLM3				3
#define		RCC_PLLCFGR_PLLM4				4
#define		RCC_PLLCFGR_PLLM5				5
#define		RCC_PLLCFGR_PLLP0				16
#define		RCC_PLLCFGR_PLLP1				17
#define		RCC_PLLCFGR_PLLSRC				22
#define		RCC_PLLCFGR_PLLQ0				24
#define		RCC_PLLCFGR_PLLQ1				25
#define		RCC_PLLCFGR_PLLQ2				26
#define		RCC_PLLCFGR_PLLQ3				27
		
#define		RCC_CFGR_SW0					0
#define		RCC_CFGR_SW1					1
#define		RCC_CFGR_SWS0					2
#define		RCC_CFGR_SWS1					3
#define		RCC_CFGR_I2SSCR					23
		
#define		RCC_CIR_LSIRDYF					0
#define		RCC_CIR_LSERDYF					1
#define		RCC_CIR_HSIRDYF					2
#define		RCC_CIR_HSERDYF					3
#define		RCC_CIR_PLLRDYF					4
#define		RCC_CIR_PLLI2SRDYF				5
#define		RCC_CIR_CSSF					7
#define		RCC_CIR_LSIRDYIE				8
#define		RCC_CIR_LSERDYIE				9
#define		RCC_CIR_HSIRDYIE				10
#define		RCC_CIR_HSERDYIE				11
#define		RCC_CIR_PLLRDYIE				12
#define		RCC_CIR_PLLI2SRDYIE				13
#define		RCC_CIR_LSIRDYC					16
#define		RCC_CIR_LSERDYC					17
#define		RCC_CIR_HSIRDYC					18
#define		RCC_CIR_HSERDYC					19
#define		RCC_CIR_PLLRDYC					20
#define		RCC_CIR_PLLI2SRDYC				21
#define		RCC_CIR_CSSC					23
		
		
#define		RCC_AHB1RSTR_GPIOARST			0
#define		RCC_AHB1RSTR_GPIOBRST			1
#define		RCC_AHB1RSTR_GPIOCRST			2
#define		RCC_AHB1RSTR_GPIODRST			3
#define		RCC_AHB1RSTR_GPIOERST			4
#define		RCC_AHB1RSTR_GPIOHRST			7
#define		RCC_AHB1RSTR_CRCRST				12
#define		RCC_AHB1RSTR_DMA1RST			21
#define		RCC_AHB1RSTR_DMA2RST			22
		
#define		RCC_APB1RSTR_TIM2RST			0
#define		RCC_APB1RSTR_TIM3RST			1
#define		RCC_APB1RSTR_TIM4RST			2
#define		RCC_APB1RSTR_TIM5RST			3
#define		RCC_APB1RSTR_WWDGRST			11
#define		RCC_APB1RSTR_SPI2RST			14
#define		RCC_APB1RSTR_SPI3RST			15
#define		RCC_APB1RSTR_USART2RST			17
#define		RCC_APB1RSTR_I2C1RST			21
#define		RCC_APB1RSTR_I2C2RST			22
#define		RCC_APB1RSTR_I2C3RST			23
#define		RCC_APB1RSTR_PWRRST				28
		
#define		RCC_APB2RSTR_TIM1RST			0
#define		RCC_APB2RSTR_USART1RST			4
#define		RCC_APB2RSTR_USART6RST			5
#define		RCC_APB2RSTR_ADC1RST			8
#define		RCC_APB2RSTR_SDIORST			11
#define		RCC_APB2RSTR_SPI1RST			12
#define		RCC_APB2RSTR_SPI4RST			13
#define		RCC_APB2RSTR_SYSCFGRST			14
#define		RCC_APB2RSTR_TIM9RST			16
#define		RCC_APB2RSTR_TIM10RST			17
#define		RCC_APB2RSTR_TIM11RST			18

#define		RCC_AHB1ENR_GPIOAEN				0
#define		RCC_AHB1ENR_GPIOBEN				1
#define		RCC_AHB1ENR_GPIOCEN				2
#define		RCC_AHB1ENR_GPIODEN				3
#define		RCC_AHB1ENR_GPIOEEN				4
#define		RCC_AHB1ENR_GPIOHEN				7
#define		RCC_AHB1ENR_CRCEN				12
#define		RCC_AHB1ENR_DMA1EN				21
#define		RCC_AHB1ENR_DMA2EN				22

#define		RCC_APB1ENR_TIM2EN				0
#define		RCC_APB1ENR_TIM2EN				1
#define		RCC_APB1ENR_TIM3EN				2
#define		RCC_APB1ENR_TIM4EN				3
#define		RCC_APB1ENR_WWDGEN				11
#define		RCC_APB1ENR_SPI2EN				14
#define		RCC_APB1ENR_SPI3EN				15
#define		RCC_APB1ENR_USART2EN			17
#define		RCC_APB1ENR_I2C1EN				21
#define		RCC_APB1ENR_I2C2EN				22
#define		RCC_APB1ENR_I2C3EN				23
#define		RCC_APB1ENR_PWREN				28

#define		RCC_APB2ENR_TIM1EN				0
#define		RCC_APB2ENR_USART1EN			4
#define		RCC_APB2ENR_USART6EN			5
#define		RCC_APB2ENR_ADC1EN				8
#define		RCC_APB2ENR_SDIOEN				11
#define		RCC_APB2ENR_SPI1EN				12
#define		RCC_APB2ENR_SPI4EN				13
#define		RCC_APB2ENR_SYSCFGEN			14
#define		RCC_APB2ENR_TIM9EN				16
#define		RCC_APB2ENR_TIM10EN				17
#define		RCC_APB2ENR_TIM11EN				18

#define		RCC_AHB1LPENR_GPIOALPEN			0
#define		RCC_AHB1LPENR_GPIOBLPEN			1
#define		RCC_AHB1LPENR_GPIOCLPEN			2
#define		RCC_AHB1LPENR_GPIODLPEN			3
#define		RCC_AHB1LPENR_GPIOELPEN			4
#define		RCC_AHB1LPENR_GPIOHLPEN			7
#define		RCC_AHB1LPENR_CRCLPEN			12
#define		RCC_AHB1LPENR_FLITFLPEN			15
#define		RCC_AHB1LPENR_SRAM1LPEN			16
#define		RCC_AHB1LPENR_DMA1LPEN			21
#define		RCC_AHB1LPENR_DMA2LPEN			22

void RCC_voidInit(void);
void RCC_voidEnableClockSource(u8 Copy_u8ClockSource);
void RCC_voidDisableClockSource(u8 Copy_u8ClockSource);
void RCC_voidEnablePeripheralClock(u8 Copy_u8BusName, u8 Copy_u8PeripheralName);
void RCC_voidDisablePeripheralClock(u8 Copy_u8BusName, u8 Copy_u8PeripheralName);




#endif