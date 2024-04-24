/*********************************************
 * Author:				Bishoy Adel
 * Creation Data:		9 Mar, 2024
 * Version:				v1.2
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				MCAL
 ********************************************/

/*********************************************
 * Version	  Date				  Author				  Description
 * v1.2		  9 Mar, 2024		Bishoy Adel			    Initial Creation
 *********************************************/

// Library Inclusion
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

// Lower Layer Inclusion

// Self Layer Inclusion

// Self Files Inclusion
#include "../include/GPIO_interface.h"
#include "../include/GPIO_private.h"
#include "../include/GPIO_config.h"

// Pre_Build Configuration
/* Pins */
void MGPIO_voidSetPinMode(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_Mode_e Copy_u8PinMode)
{
	/* Check For The Port Name*/
	switch(portID)
	{
	case GPIO_PORTA:
		// Bit Masking
		GPIOA_MODER &= ~(MODER_MASK << (pinID * PIN_OFFSET));
		GPIOA_MODER |= (Copy_u8PinMode << ((pinID * PIN_OFFSET)));
		break;

	case GPIO_PORTB:
		GPIOB_MODER &= ~(MODER_MASK << (pinID * PIN_OFFSET));
		GPIOB_MODER |= (Copy_u8PinMode << ((pinID * PIN_OFFSET)));
		break;

	case GPIO_PORTC:
		GPIOC_MODER &= ~(MODER_MASK << (pinID * PIN_OFFSET));
		GPIOC_MODER |= (Copy_u8PinMode << ((pinID * PIN_OFFSET)));
		break;

	default:
		// Error
		break;
	}
}

void MGPIO_voidSetPinOutputMode(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_OutputMode_e pinOutputMODE) {

	if ((portID <= GPIO_PORTC) && (pinID <= PIN15) && (pinOutputMODE <= GPIO_Output_OpenDrain)) {
		switch(portID)
		{
		case GPIO_PORTA:
			// Bit Masking
			GPIOA_OTYPER &= ~(OTYPE_MASK << pinID);
			GPIOA_OTYPER |= (pinOutputMODE << pinID);
			break;

		case GPIO_PORTB:
			GPIOB_OTYPER &= ~(OTYPE_MASK << pinID);
			GPIOB_OTYPER |= (pinOutputMODE << pinID);
			break;

		case GPIO_PORTC:
			GPIOC_OTYPER &= ~(OTYPE_MASK << pinID);
			GPIOC_OTYPER |= (pinOutputMODE << pinID);
			break;

		default:
			// Error
			break;
		}
	}

}
void MGPIO_voidTogglePin(GPIO_PORT_e portID, GPIO_PIN_e pinID)
{
	// Check if portID, pinID, and pinValue are within valid range
	if ((portID <= GPIO_PORTC) && (pinID <= PIN15))
	{
		// Switch on the port
		switch (portID)
		{
		// If port is A
		case GPIO_PORTA:
			TOGGLE_BIT(GPIOA_ODR,pinID);
			break;

			// If port is B
		case GPIO_PORTB:
			TOGGLE_BIT(GPIOB_ODR,pinID);
			break;

			// If port is C
		case GPIO_PORTC:
			TOGGLE_BIT(GPIOC_ODR,pinID);
			break;
		}
	}
	else
	{
		// Do Nothing
	}
}
void MGPIO_voidSetPinOutputSpeed(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_OutputSpeed_e pinOutputSpeed) {


	if ((portID <= GPIO_PORTC) && (pinID <= PIN15) && (pinOutputSpeed <= GPIO_VeryHighSpeed)) {

		switch(portID)
		{
		case GPIO_PORTA:
			// Bit Masking
			GPIOA_OSPEEDR &= ~(OSPEEDR_MASK << (pinID * PIN_OFFSET));
			GPIOA_OSPEEDR |= (pinOutputSpeed << ((pinID * PIN_OFFSET)));
			break;

		case GPIO_PORTB:
			// Bit Masking
			GPIOB_OSPEEDR &= ~(OSPEEDR_MASK << (pinID * PIN_OFFSET));
			GPIOB_OSPEEDR |= (pinOutputSpeed << ((pinID * PIN_OFFSET)));
			break;

		case GPIO_PORTC:
			// Bit Masking
			GPIOC_OSPEEDR &= ~(OSPEEDR_MASK << (pinID * PIN_OFFSET));
			GPIOC_OSPEEDR |= (pinOutputSpeed << ((pinID * PIN_OFFSET)));
			break;

		default:
			// Error
			break;
		}
	}
}

// Function to set the pin value (reset , set) of a specific pin
void MGPIO_voidSetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID, GPIO_Value_e pinValue) {
	// Check if portID, pinID, and pinValue are within valid range
	if ((portID <= GPIO_PORTC) && (pinID <= PIN15) && (pinValue <= GPIO_SET)) {
		// Switch on the port
		switch(portID)
		{
		case GPIO_PORTA:
			switch(pinValue)
			{
			case GPIO_RESET:

				GPIOA_BSRR = 1 << (pinID+16);
				break;

			case GPIO_SET:

				GPIOA_BSRR = 1 << pinID;
				break;

			default:
				// Error
				break;
			}
			break;

			case GPIO_PORTB:
				switch(pinValue)
				{
				case GPIO_RESET:
					//SET_BIT(GPIOA_BSRR, (Copy_u8PinNumber+16));
					GPIOB_BSRR = 1 << (pinID+16);
					break;

				case GPIO_SET:
					//SET_BIT(GPIOA_BSRR, Copy_u8PinNumber);
					GPIOB_BSRR = 1 << pinID;
					break;

				default:
					// Error
					break;
				}
				break;

				case GPIO_PORTC:
					switch(pinValue)
					{
					case GPIO_RESET:
						//SET_BIT(GPIOA_BSRR, (Copy_u8PinNumber+16));
						GPIOC_BSRR = 1 << (pinID+16);
						break;

					case GPIO_SET:
						//SET_BIT(GPIOA_BSRR, Copy_u8PinNumber);
						GPIOC_BSRR = 1 << pinID;
						break;

					default:
						// Error
						break;
					}
					break;

					default:
						// Error
						break;
		}
	}
}

	u16 MGPIO_u8GetPinValue(GPIO_PORT_e portID, GPIO_PIN_e pinID) {

		u16 PinValue = 0;

		if ((portID <= GPIO_PORTC) && (pinID <= PIN15)) {
			switch (portID) {
			case GPIO_PORTA:

				PinValue = GET_BIT(GPIOA_IDR, pinID);
				break;

			case GPIO_PORTB:

				PinValue = GET_BIT(GPIOB_IDR, pinID);
				break;

			case GPIO_PORTC:

				PinValue = GET_BIT(GPIOC_IDR, pinID);
				break;
			}

		} else {

			// NOTHING!

		}
		return PinValue;

	}

	/*****************************************************/
	/* Ports */

	void MGPIO_voidSetPortMode(GPIO_PORT_e portID, GPIO_Mode_e portMODE) {
		// Check if portID is within valid range
		if (portID <= GPIO_PORTC) {
			u32 modeValue = 0;

			// Iterate through all pins and set the modeValue accordingly
			for (int i = 0; i < 16; i++) {
				modeValue |= (portMODE << (2 * i));
			}

			// Switch on the port to set the modeValue in the corresponding MODER register
			switch (portID) {
			// If port is A
			case GPIO_PORTA:
				GPIOA_MODER = modeValue;
				break;

				// If port is B
			case GPIO_PORTB:
				GPIOB_MODER = modeValue;
				break;

				// If port is C
			case GPIO_PORTC:
				GPIOC_MODER = modeValue;
				break;
			}
		} else {
			// Do Nothing
		}
	}

	// Function to set the output mode (push pull , open drain) of a specific port
	void MGPIO_voidSetPortOutputMode(GPIO_PORT_e portID, GPIO_OutputMode_e portOutputMode) {
		// Check if portID is within valid range
		if ((portID <= GPIO_PORTC)) {
			u32 modeValue = 0;

			// Iterate through all pins and set the speedValue accordingly
			for (int i = 0; i < 16; i++) {
				modeValue |= (portOutputMode << (i));
			}

			// Switch on the port to set the portOutputMode in the corresponding OTYPER register
			switch (portID) {
			// If port is A
			case GPIO_PORTA:
				GPIOA_OTYPER = modeValue;
				break;

				// If port is B
			case GPIO_PORTB:
				GPIOB_OTYPER = modeValue;
				break;

				// If port is C
			case GPIO_PORTC:
				GPIOC_OTYPER = modeValue;
				break;
			}
		} else {
			// Do Nothing
		}
	}

	// Function to set the output speed (low , medium , high , very high) of a specific port
	void MGPIO_voidSetPortOutputSpeed(GPIO_PORT_e portID, GPIO_OutputSpeed_e portOutputSpeed) {
		// Check if portID is within valid range
		if (portID <= GPIO_PORTC) {
			u32 speedValue = 0;

			// Iterate through all pins and set the speedValue accordingly
			for (int i = 0; i < 16; i++) {
				speedValue |= (portOutputSpeed << (2 * i));
			}

			// Switch on the port to set the speedValue in the corresponding OSPEEDR register
			switch (portID) {
			// If port is A
			case GPIO_PORTA:
				GPIOA_OSPEEDR = speedValue;
				break;

				// If port is B
			case GPIO_PORTB:
				GPIOB_OSPEEDR = speedValue;
				break;

				// If port is C
			case GPIO_PORTC:
				GPIOC_OSPEEDR = speedValue;
				break;
			}
		} else {
			// Do Nothing
		}
	}

	// Function to set the port value (reset , set) of a specific port
	void MGPIO_voidSetPortValue(GPIO_PORT_e portID, GPIO_Value_e portValue) {
		// Check if portID is within valid range
		if ((portID <= GPIO_PORTC)) {
			u32 Portvalue = 0;

			// Iterate through all pins and set the speedValue accordingly
			for (int i = 0; i < 16; i++) {
				Portvalue |= (portValue << (i));
			}
			// Switch on the port to set the specified portValue in the corresponding ODR register
			switch (portID) {
			// If port is A
			case GPIO_PORTA:
				GPIOA_ODR = Portvalue;
				break;

				// If port is B
			case GPIO_PORTB:
				GPIOB_ODR = Portvalue;
				break;

				// If port is C
			case GPIO_PORTC:
				GPIOC_ODR = Portvalue;
				break;
			}
		} else {
			// Do Nothing
		}
	}

	// Function to get the port value (reset , set) of a specific port
	u16 MGPIO_u8GetPortValue(GPIO_PORT_e portID) {
		u16 value = 0;

		// Switch on the port to read the value from the corresponding IDR register
		switch (portID) {
		// If port is A
		case GPIO_PORTA:
			value = (u16)GPIOA_IDR;
			break;

			// If port is B
		case GPIO_PORTB:
			value = (u16)GPIOB_IDR;
			break;

			// If port is C
		case GPIO_PORTC:
			value = (u16)GPIOC_IDR;
			break;

		default:
			// Do Nothing
			break;
		}

		return value;
	}
