#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

// Clock source definitions
#define RCC_CLK_HSI               0 // High-Speed Internal (HSI) clock
#define RCC_CLK_HSE               1 // High-Speed External (HSE) clock
#define RCC_CLK_PLL               2 // Phase-Locked Loop (PLL) clock

// AHB Bus prescaler definitions
#define RCC_AHB_DIV_1             0b0000 // AHB clock not divided
#define RCC_AHB_DIV_2             0b1000 // AHB clock divided by 2
#define RCC_AHB_DIV_4             0b1001 // AHB clock divided by 4
#define RCC_AHB_DIV_8             0b1010 // AHB clock divided by 8
#define RCC_AHB_DIV_16            0b1011 // AHB clock divided by 16
#define RCC_AHB_DIV_64            0b1100 // AHB clock divided by 64
#define RCC_AHB_DIV_128           0b1101 // AHB clock divided by 128
#define RCC_AHB_DIV_256           0b1110 // AHB clock divided by 256
#define RCC_AHB_DIV_512           0b1111 // AHB clock divided by 512

// APB1 Bus prescaler definitions
#define RCC_APB1_DIV_1            0b000 // APB1 clock not divided
#define RCC_APB1_DIV_2            0b100 // APB1 clock divided by 2
#define RCC_APB1_DIV_4            0b101 // APB1 clock divided by 4
#define RCC_APB1_DIV_8            0b110 // APB1 clock divided by 8
#define RCC_APB1_DIV_16           0b111 // APB1 clock divided by 16

// APB2 Bus prescaler definitions
#define RCC_APB2_DIV_1            0b000 // APB2 clock not divided
#define RCC_APB2_DIV_2            0b100 // APB2 clock divided by 2
#define RCC_APB2_DIV_4            0b101 // APB2 clock divided by 4
#define RCC_APB2_DIV_8            0b110 // APB2 clock divided by 8
#define RCC_APB2_DIV_16           0b111 // APB2 clock divided by 16

// Bit masks for prescaler settings
#define RCC_AHB_PRESCALER_MASK    0b1111 // Mask for AHB prescaler bits
#define RCC_APB1_PRESCALER_MASK   0b111 // Mask for APB1 prescaler bits
#define RCC_APB2_PRESCALER_MASK   0b111 // Mask for APB2 prescaler bits

// Base address for RCC registers
#define RCC_BASE_ADDRESS          0x40023800

// Register addresses
#define RCC_CR                    *((volatile u32 *) (RCC_BASE_ADDRESS + 0x00)) // RCC Clock Control Register
#define RCC_PLLCFGR               *((volatile u32 *) (RCC_BASE_ADDRESS + 0x04)) // RCC PLL Configuration Register
#define RCC_CFGR                  *((volatile u32 *) (RCC_BASE_ADDRESS + 0x08)) // RCC Configuration Register
#define RCC_CIR                   *((volatile u32 *) (RCC_BASE_ADDRESS + 0x0C)) // RCC Clock Interrupt Register
#define RCC_AHB1RSTR              *((volatile u32 *) (RCC_BASE_ADDRESS + 0x10)) // RCC AHB1 Peripheral Reset Register
#define RCC_AHB2RSTR              *((volatile u32 *) (RCC_BASE_ADDRESS + 0x14)) // RCC AHB2 Peripheral Reset Register
#define RCC_APB1RSTR              *((volatile u32 *) (RCC_BASE_ADDRESS + 0x20)) // RCC APB1 Peripheral Reset Register
#define RCC_APB2RSTR              *((volatile u32 *) (RCC_BASE_ADDRESS + 0x24)) // RCC APB2 Peripheral Reset Register
#define RCC_AHB1ENR               *((volatile u32 *) (RCC_BASE_ADDRESS + 0x30)) // RCC AHB1 Peripheral Clock Enable Register
#define RCC_AHB2ENR               *((volatile u32 *) (RCC_BASE_ADDRESS + 0x34)) // RCC AHB2 Peripheral Clock Enable Register
#define RCC_APB1ENR               *((volatile u32 *) (RCC_BASE_ADDRESS + 0x40)) // RCC APB2 Peripheral Clock Enable Register
#define RCC_APB2ENR               *((volatile u32 *) (RCC_BASE_ADDRESS + 0x44)) // RCC APB2 Peripheral Clock Enable Register
#define RCC_AHB1LPENR             *((volatile u32 *) (RCC_BASE_ADDRESS + 0x50)) // RCC AHB1 Low-Power Peripheral Clock Enable Register
#define RCC_AHB2LPENR             *((volatile u32 *) (RCC_BASE_ADDRESS + 0x54)) // RCC AHB2 Low-Power Peripheral Clock Enable Register
#define RCC_APB1LPENR             *((volatile u32 *) (RCC_BASE_ADDRESS + 0x60)) // RCC APB1 Low-Power Peripheral Clock Enable Register
#define RCC_APB2LPENR             *((volatile u32 *) (RCC_BASE_ADDRESS + 0x64)) // RCC APB2 Low-Power Peripheral Clock Enable Register
#define RCC_BDCR                  *((volatile u32 *) (RCC_BASE_ADDRESS + 0x70)) // RCC Backup Domain Control Register
#define RCC_CSR                   *((volatile u32 *) (RCC_BASE_ADDRESS + 0x74)) // RCC Control/Status Register
#define RCC_SSCGR                 *((volatile u32 *) (RCC_BASE_ADDRESS + 0x80)) // RCC Spread Spectrum Clock Generation Register
#define RCC_PLLI2SCFGR            *((volatile u32 *) (RCC_BASE_ADDRESS + 0x84)) // RCC PLLI2S Configuration Register
#define RCC_DCKCFGR               *((volatile u32 *) (RCC_BASE_ADDRESS + 0x8C)) // RCC Dedicated Clock Configuration Register

#endif