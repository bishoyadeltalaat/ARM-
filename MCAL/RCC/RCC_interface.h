#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#define     RCC_AHB                         0 // RCC AHB Bus
#define 	RCC_APB1					    1 // RCC APB1 Bus
#define 	RCC_APB2				     	2 // RCC APB2 Bus


#define 	RCC_HSI							0 // RCC HSI Clock Source
#define 	RCC_HSE							1 // RCC HSE Clock Source
#define 	RCC_PLL							2 // RCC PLL Clock Source
		
#define		RCC_CR_HSION					0 // RCC CR HSION bit
#define		RCC_CR_HSIRDY					1 // RCC CR HSIRDY bit
#define		RCC_CR_HSEON					16 // RCC CR HSEON bit
#define		RCC_CR_HSERDY					17 // RCC CR HSERDY bit
#define		RCC_CR_HSEBYP					18 // RCC CR HSEBYP bit
#define		RCC_CR_CSSON					19 // RCC CR CSSON bit
#define		RCC_CR_PLLON					24 // RCC CR PLLON bit
#define		RCC_CR_PLLRDY					25 // RCC CR PLLRDY bit
#define		RCC_CR_PLL2SON					26 // RCC CR PLL2SON bit
#define		RCC_CR_PLL2SRDY					27 // RCC CR PLL2SRDY bit
		
#define		RCC_PLLCFGR_PLLM0				0 // RCC PLLCFGR PLLM0 bit
#define		RCC_PLLCFGR_PLLM1				1 // RCC PLLCFGR PLLM1 bit
#define		RCC_PLLCFGR_PLLM2				2 // RCC PLLCFGR PLLM2 bit
#define		RCC_PLLCFGR_PLLM3				3 // RCC PLLCFGR PLLM3 bit
#define		RCC_PLLCFGR_PLLM4				4 // RCC PLLCFGR PLLM4 bit
#define		RCC_PLLCFGR_PLLM5				5 // RCC PLLCFGR PLLM5 bit
#define		RCC_PLLCFGR_PLLP0				16 // RCC PLLCFGR PLLP0 bit
#define		RCC_PLLCFGR_PLLP1				17 // RCC PLLCFGR PLLP1 bit
#define		RCC_PLLCFGR_PLLSRC				22 // RCC PLLCFGR PLLSRC bit
#define		RCC_PLLCFGR_PLLQ0				24 // RCC PLLCFGR PLLQ0 bit
#define		RCC_PLLCFGR_PLLQ1				25 // RCC PLLCFGR PLLQ1 bit
#define		RCC_PLLCFGR_PLLQ2				26 // RCC PLLCFGR PLLQ2 bit
#define		RCC_PLLCFGR_PLLQ3				27 // RCC PLLCFGR PLLQ3 bit
		
#define		RCC_CFGR_SW0					0 // RCC CFGR SW0 bit
#define		RCC_CFGR_SW1					1 // RCC CFGR SW1 bit
#define		RCC_CFGR_SWS0					2 // RCC CFGR SWS0 bit
#define		RCC_CFGR_SWS1					3 // RCC CFGR SWS1 bit
#define		RCC_CFGR_I2SSCR					23 // RCC CFGR I2SSCR bit
		
#define		RCC_CIR_LSIRDYF					0 // RCC CIR LSIRDYF bit
#define		RCC_CIR_LSERDYF					1 // RCC CIR LSERDYF bit
#define		RCC_CIR_HSIRDYF					2 // RCC CIR HSIRDYF bit
#define		RCC_CIR_HSERDYF					3 // RCC CIR HSERDYF bit
#define		RCC_CIR_PLLRDYF					4 // RCC CIR PLLRDYF bit
#define		RCC_CIR_PLLI2SRDYF				5 // RCC CIR PLLI2SRDYF bit
#define		RCC_CIR_CSSF					7 // RCC CIR CSSF bit
#define		RCC_CIR_LSIRDYIE				8 // RCC CIR LSIRDYIE bit
#define		RCC_CIR_LSERDYIE				9 // RCC CIR LSERDYIE bit
#define		RCC_CIR_HSIRDYIE				10 // RCC CIR HSIRDYIE bit
#define		RCC_CIR_HSERDYIE				11 // RCC CIR HSERDYIE bit
#define		RCC_CIR_PLLRDYIE				12 // RCC CIR PLLRDYIE bit
#define		RCC_CIR_PLLI2SRDYIE				13 // RCC CIR PLLI2SRDYIE bit
#define		RCC_CIR_LSIRDYC					16 // RCC CIR LSIRDYC bit
#define		RCC_CIR_LSERDYC					17 // RCC CIR LSERDYC bit
#define		RCC_CIR_HSIRDYC					18 // RCC CIR HSIRDYC bit
#define		RCC_CIR_HSERDYC					19 // RCC CIR HSERDYC bit
#define		RCC_CIR_PLLRDYC					20 // RCC CIR PLLRDYC bit
#define		RCC_CIR_PLLI2SRDYC				21 // RCC CIR PLLI2SRDYC bit
#define		RCC_CIR_CSSC					23 // RCC CIR CSSC bit
		
		
#define		RCC_AHB_GPIOARST			0 // RCC AHB GPIOA Reset
#define		RCC_AHB_GPIOBRST			1 // RCC AHB GPIOB Reset
#define		RCC_AHB_GPIOCRST			2 // RCC AHB GPIOC Reset
#define		RCC_AHB_GPIODRST			3 // RCC AHB GPIOD Reset
#define		RCC_AHB_GPIOERST			4 // RCC AHB GPIOE Reset
#define		RCC_AHB_GPIOHRST			7 // RCC AHB GPIOH Reset
#define		RCC_AHB_CRCRST				12 // RCC AHB CRC Reset
#define		RCC_AHB_DMA1RST			    21 // RCC AHB DMA1 Reset
#define		RCC_AHB_DMA2RST			    22 // RCC AHB DMA2 Reset
		
#define		RCC_APB1RSTR_TIM2RST			0 // RCC APB1 Timer 2 Reset
#define		RCC_APB1RSTR_TIM3RST			1 // RCC APB1 Timer 3 Reset
#define		RCC_APB1RSTR_TIM4RST			2 // RCC APB1 Timer 4 Reset
#define		RCC_APB1RSTR_TIM5RST			3 // RCC APB1 Timer 5 Reset
#define		RCC_APB1RSTR_WWDGRST			11 // RCC APB1 Window Watchdog Reset
#define		RCC_APB1RSTR_SPI2RST			14 // RCC APB1 SPI2 Reset
#define		RCC_APB1RSTR_SPI3RST			15 // RCC APB1 SPI3 Reset
#define		RCC_APB1RSTR_USART2RST			17 // RCC APB1 USART2 Reset
#define		RCC_APB1RSTR_I2C1RST			21 // RCC APB1 I2C1 Reset
#define		RCC_APB1RSTR_I2C2RST			22 // RCC APB1 I2C2 Reset
#define		RCC_APB1RSTR_I2C3RST			23 // RCC APB1 I2C3 Reset
#define		RCC_APB1RSTR_PWRRST				28 // RCC APB1 Power Reset
		
#define		RCC_APB2RSTR_TIM1RST			0 // RCC APB2 Timer 1 Reset
#define		RCC_APB2RSTR_USART1RST			4 // RCC APB2 USART1 Reset
#define		RCC_APB2RSTR_USART6RST			5 // RCC APB2 USART6 Reset
#define		RCC_APB2RSTR_ADC1RST			8 // RCC APB2 ADC1 Reset
#define		RCC_APB2RSTR_SDIORST			11 // RCC APB2 SDIO Reset
#define		RCC_APB2RSTR_SPI1RST			12 // RCC APB2 SPI1 Reset
#define		RCC_APB2RSTR_SPI4RST			13 // RCC APB2 SPI4 Reset
#define		RCC_APB2RSTR_SYSCFGRST			14 // RCC APB2 System Configuration Controller Reset
#define		RCC_APB2RSTR_TIM9RST			16 // RCC APB2 Timer 9 Reset
#define		RCC_APB2RSTR_TIM10RST			17 // RCC APB2 Timer 10 Reset
#define		RCC_APB2RSTR_TIM11RST			18 // RCC APB2 Timer 11 Reset

#define		RCC_AHB1ENR_GPIOAEN				0 // RCC AHB1 GPIOA Enable
#define		RCC_AHB1ENR_GPIOBEN				1 // RCC AHB1 GPIOB Enable
#define		RCC_AHB1ENR_GPIOCEN				2 // RCC AHB1 GPIOC Enable
#define		RCC_AHB1ENR_GPIODEN				3 // RCC AHB1 GPIOD Enable
#define		RCC_AHB1ENR_GPIOEEN				4 // RCC AHB1 GPIOE Enable
#define		RCC_AHB1ENR_GPIOHEN				7 // RCC AHB1 GPIOH Enable
#define		RCC_AHB1ENR_CRCEN				12 // RCC AHB1 CRC Enable
#define		RCC_AHB1ENR_DMA1EN				21 // RCC AHB1 DMA1 Enable
#define		RCC_AHB1ENR_DMA2EN				22 // RCC AHB1 DMA2 Enable

#define		RCC_APB1ENR_TIM2EN				0 // RCC APB1 Timer 2 Enable
#define		RCC_APB1ENR_TIM3EN				1 // RCC APB1 Timer 3 Enable
#define		RCC_APB1ENR_TIM4EN				2 // RCC APB1 Timer 4 Enable
#define		RCC_APB1ENR_TIM5EN				3 // RCC APB1 Timer 5 Enable
#define		RCC_APB1ENR_WWDGEN				11 // RCC APB1 Window Watchdog Enable
#define		RCC_APB1ENR_SPI2EN				14 // RCC APB1 SPI2 Enable
#define		RCC_APB1ENR_SPI3EN				15 // RCC APB1 SPI3 Enable
#define		RCC_APB1ENR_USART2EN			17 // RCC APB1 USART2 Enable
#define		RCC_APB1ENR_I2C1EN				21 // RCC APB1 I2C1 Enable
#define		RCC_APB1ENR_I2C2EN				22 // RCC APB1 I2C2 Enable
#define		RCC_APB1ENR_I2C3EN				23 // RCC APB1 I2C3 Enable
#define		RCC_APB1ENR_PWREN				28 // RCC APB1 Power Enable

#define		RCC_APB2ENR_TIM1EN				0 // RCC APB2 Timer 1 Enable
#define		RCC_APB2ENR_USART1EN			4 // RCC APB2 USART1 Enable
#define		RCC_APB2ENR_USART6EN			5 // RCC APB2 USART6 Enable
#define		RCC_APB2ENR_ADC1EN				8 // RCC APB2 ADC1 Enable
#define		RCC_APB2ENR_SDIOEN				11 // RCC APB2 SDIO Enable
#define		RCC_APB2ENR_SPI1EN				12 // RCC APB2 SPI1 Enable
#define		RCC_APB2ENR_SPI4EN				13 // RCC APB2 SPI4 Enable
#define		RCC_APB2ENR_SYSCFGEN			14 // RCC APB2 System Configuration Controller Enable
#define		RCC_APB2ENR_TIM9EN				16 // RCC APB2 Timer 9 Enable
#define		RCC_APB2ENR_TIM10EN				17 // RCC APB2 Timer 10 Enable
#define		RCC_APB2ENR_TIM11EN				18 // RCC APB2 Timer 11 Enable

#define		RCC_AHB1LPENR_GPIOALPEN			0 // RCC AHB1 GPIOA Low Power Enable
#define		RCC_AHB1LPENR_GPIOBLPEN			1 // RCC AHB1 GPIOB Low Power Enable
#define		RCC_AHB1LPENR_GPIOCLPEN			2 // RCC AHB1 GPIOC Low Power Enable
#define		RCC_AHB1LPENR_GPIODLPEN			3 // RCC AHB1 GPIOD Low Power Enable
#define		RCC_AHB1LPENR_GPIOELPEN			4 // RCC AHB1 GPIOE Low Power Enable
#define		RCC_AHB1LPENR_GPIOHLPEN			7 // RCC AHB1 GPIOH Low Power Enable
#define		RCC_AHB1LPENR_CRCLPEN			12 // RCC AHB1 CRC Low Power Enable
#define		RCC_AHB1LPENR_FLITFLPEN			15 // RCC AHB1 FLITF Low Power Enable
#define		RCC_AHB1LPENR_SRAM1LPEN			16 // RCC AHB1 SRAM1 Low Power Enable
#define		RCC_AHB1LPENR_DMA1LPEN			21 // RCC AHB1 DMA1 Low Power Enable
#define		RCC_AHB1LPENR_DMA2LPEN			22 // RCC AHB1 DMA2 Low Power Enable

void RCC_voidInit(void); // RCC Initialization Function Declaration
void RCC_voidEnableClockSource(u8 Copy_u8ClockSource); // RCC Clock Source Enable Function Declaration
void RCC_voidDisableClockSource(u8 Copy_u8ClockSource); // RCC Clock Source Disable Function Declaration
void RCC_voidEnablePeripheralClock(u8 Copy_u8BusName, u8 Copy_u8PeripheralName); // RCC Peripheral Clock Enable Function Declaration
void RCC_voidDisablePeripheralClock(u8 Copy_u8BusName, u8 Copy_u8PeripheralName); // RCC Peripheral Clock Disable Function Declaration

#endif // End of RCC_INTERFACE_H
