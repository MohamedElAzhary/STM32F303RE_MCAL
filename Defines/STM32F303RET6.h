/*****************************************************************************/
// FileName     : STM32F303RET6.h
// Author       : Mohamed ElAzhary
// Description  : This file contains STM32F303RET6 definitions
//
//
/*****************************************************************************/
#ifndef _STM_H_
#define _STM_H_

/*******************************File-Includes*********************************/
#include "stdint.h"
/*****************************************************************************/

/**********************************Macros*************************************/
#define STD_ON		(1U)
#define STD_OFF		(2U)

/******************************************************************************/
/*                                                                            */
/*                               Memory Mapping                               */
/*                                                                            */
/******************************************************************************/

#define FLASH_BASE            ((uint32_t)0x08000000) /*!< FLASH base address in the alias region */
#define CCM_RAM_BASE          ((uint32_t)0x10000000) /*!< CCM RAM base address in the alias region */
#define SYSTEM_MEMORY_BASE    ((uint32_t)0x1FFFD800) /*!< System Memory base address in the alias region */
#define OPTION_BYTES_BASE     ((uint32_t)0x1FFFF800) /*!< Option bytes base address in the alias region */
#define SRAM_BASE             ((uint32_t)0x20000000) /*!< SRAM base address in the alias region */

#define PERIPH_BASE           ((uint32_t)0x40000000) /*!< Peripheral base address in the alias region */


#define SRAM_BB_BASE          ((uint32_t)0x22000000) /*!< SRAM base address in the bit-band region */
#define PERIPH_BB_BASE        ((uint32_t)0x42000000) /*!< Peripheral base address in the bit-band region */


#define APB1PERIPH_BASE       PERIPH_BASE
#define APB2PERIPH_BASE       (PERIPH_BASE + 0x00010000)
#define AHB1PERIPH_BASE       (PERIPH_BASE + 0x00020000)
#define AHB2PERIPH_BASE       (PERIPH_BASE + 0x08000000)
#define AHB3PERIPH_BASE       (PERIPH_BASE + 0x10000000)



/******************************************************************************/
/*                                                                            */
/*                            General Purpose I/O (PORT)                      */
/*                                                                            */
/******************************************************************************/


/* Ports Base Addresses */
#define PORT_REG_PORT_A_BASE_REG   ((uint32_t) 0x48000000 )
#define PORT_REG_PORT_B_BASE_REG   ((uint32_t) 0x48000400 )
#define PORT_REG_PORT_C_BASE_REG   ((uint32_t) 0x48000800 )
#define PORT_REG_PORT_D_BASE_REG   ((uint32_t) 0x48000C00 )
#define PORT_REG_PORT_E_BASE_REG   ((uint32_t) 0x48001000 )
#define PORT_REG_PORT_F_BASE_REG   ((uint32_t) 0x48001400 )
#define PORT_REG_PORT_G_BASE_REG   ((uint32_t) 0x48001800 )
#define PORT_REG_PORT_H_BASE_REG   ((uint32_t) 0x48001C00 )

/* Ports Offset Addresses */
#define PORT_REG_MODER_OFFSET		   ((uint32_t) 0x00000000)
#define PORT_REG_OTYPER_OFFSET		   ((uint32_t) 0x00000004)
#define PORT_REG_OSPEEDR_OFFSET		   ((uint32_t) 0x00000008)
#define PORT_REG_PUPDR_OFFSET		   ((uint32_t) 0x0000000C)
#define PORT_REG_IDR_OFFSET		   	   ((uint32_t) 0x00000010)
#define PORT_REG_ODR_OFFSET		   	   ((uint32_t) 0x00000014)
#define PORT_REG_BSRR_OFFSET		   ((uint32_t) 0x00000018)
#define PORT_REG_LCKR_OFFSET		   ((uint32_t) 0x0000001C)
#define PORT_REG_BSRR_OFFSET		   ((uint32_t) 0x00000018)
#define PORT_REG_AFRL_OFFSET		   ((uint32_t) 0x00000020)
#define PORT_REG_AFRH_OFFSET		   ((uint32_t) 0x00000024)
#define PORT_REG_BRR_OFFSET		   	   ((uint32_t) 0x00000028)

/* Port MODER Registers addresses */
#define PORT_REG_PORT_A_MODER		(*((volatile uint32_t*)( PORT_REG_PORT_A_BASE_REG + PORT_REG_MODER_OFFSET )))
#define PORT_REG_PORT_B_MODER		(*((volatile uint32_t*)( PORT_REG_PORT_B_BASE_REG + PORT_REG_MODER_OFFSET )))
#define PORT_REG_PORT_C_MODER		(*((volatile uint32_t*)( PORT_REG_PORT_C_BASE_REG + PORT_REG_MODER_OFFSET )))
#define PORT_REG_PORT_D_MODER		(*((volatile uint32_t*)( PORT_REG_PORT_D_BASE_REG + PORT_REG_MODER_OFFSET )))
#define PORT_REG_PORT_E_MODER		(*((volatile uint32_t*)( PORT_REG_PORT_E_BASE_REG + PORT_REG_MODER_OFFSET )))
#define PORT_REG_PORT_F_MODER		(*((volatile uint32_t*)( PORT_REG_PORT_F_BASE_REG + PORT_REG_MODER_OFFSET )))
#define PORT_REG_PORT_G_MODER		(*((volatile uint32_t*)( PORT_REG_PORT_G_BASE_REG + PORT_REG_MODER_OFFSET )))
#define PORT_REG_PORT_H_MODER		(*((volatile uint32_t*)( PORT_REG_PORT_H_BASE_REG + PORT_REG_MODER_OFFSET )))

/* Port OTYPER Registers addresses */
#define PORT_REG_PORT_A_OTYPER		(*((volatile uint32_t*)( PORT_REG_PORT_A_BASE_REG + PORT_REG_OTYPER_OFFSET )))
#define PORT_REG_PORT_B_OTYPER		(*((volatile uint32_t*)( PORT_REG_PORT_B_BASE_REG + PORT_REG_OTYPER_OFFSET )))
#define PORT_REG_PORT_C_OTYPER		(*((volatile uint32_t*)( PORT_REG_PORT_C_BASE_REG + PORT_REG_OTYPER_OFFSET )))
#define PORT_REG_PORT_D_OTYPER		(*((volatile uint32_t*)( PORT_REG_PORT_D_BASE_REG + PORT_REG_OTYPER_OFFSET )))
#define PORT_REG_PORT_E_OTYPER		(*((volatile uint32_t*)( PORT_REG_PORT_E_BASE_REG + PORT_REG_OTYPER_OFFSET )))
#define PORT_REG_PORT_F_OTYPER		(*((volatile uint32_t*)( PORT_REG_PORT_F_BASE_REG + PORT_REG_OTYPER_OFFSET )))
#define PORT_REG_PORT_G_OTYPER		(*((volatile uint32_t*)( PORT_REG_PORT_G_BASE_REG + PORT_REG_OTYPER_OFFSET )))
#define PORT_REG_PORT_H_OTYPER		(*((volatile uint32_t*)( PORT_REG_PORT_H_BASE_REG + PORT_REG_OTYPER_OFFSET )))

/* Port OSPEEDR Registers addresses */
#define PORT_REG_PORT_A_OSPEEDR		(*((volatile uint32_t*)( PORT_REG_PORT_A_BASE_REG + PORT_REG_OSPEEDR_OFFSET )))
#define PORT_REG_PORT_B_OSPEEDR		(*((volatile uint32_t*)( PORT_REG_PORT_B_BASE_REG + PORT_REG_OSPEEDR_OFFSET )))
#define PORT_REG_PORT_C_OSPEEDR		(*((volatile uint32_t*)( PORT_REG_PORT_C_BASE_REG + PORT_REG_OSPEEDR_OFFSET )))
#define PORT_REG_PORT_D_OSPEEDR		(*((volatile uint32_t*)( PORT_REG_PORT_D_BASE_REG + PORT_REG_OSPEEDR_OFFSET )))
#define PORT_REG_PORT_E_OSPEEDR		(*((volatile uint32_t*)( PORT_REG_PORT_E_BASE_REG + PORT_REG_OSPEEDR_OFFSET )))
#define PORT_REG_PORT_F_OSPEEDR		(*((volatile uint32_t*)( PORT_REG_PORT_F_BASE_REG + PORT_REG_OSPEEDR_OFFSET )))
#define PORT_REG_PORT_G_OSPEEDR		(*((volatile uint32_t*)( PORT_REG_PORT_G_BASE_REG + PORT_REG_OSPEEDR_OFFSET )))
#define PORT_REG_PORT_H_OSPEEDR		(*((volatile uint32_t*)( PORT_REG_PORT_H_BASE_REG + PORT_REG_OSPEEDR_OFFSET )))

/* Port PUPDR Registers addresses */
#define PORT_REG_PORT_A_PUPDR		(*((volatile uint32_t*)( PORT_REG_PORT_A_BASE_REG + PORT_REG_PUPDR_OFFSET )))
#define PORT_REG_PORT_B_PUPDR		(*((volatile uint32_t*)( PORT_REG_PORT_B_BASE_REG + PORT_REG_PUPDR_OFFSET )))
#define PORT_REG_PORT_C_PUPDR		(*((volatile uint32_t*)( PORT_REG_PORT_C_BASE_REG + PORT_REG_PUPDR_OFFSET )))
#define PORT_REG_PORT_D_PUPDR		(*((volatile uint32_t*)( PORT_REG_PORT_D_BASE_REG + PORT_REG_PUPDR_OFFSET )))
#define PORT_REG_PORT_E_PUPDR		(*((volatile uint32_t*)( PORT_REG_PORT_E_BASE_REG + PORT_REG_PUPDR_OFFSET )))
#define PORT_REG_PORT_F_PUPDR		(*((volatile uint32_t*)( PORT_REG_PORT_F_BASE_REG + PORT_REG_PUPDR_OFFSET )))
#define PORT_REG_PORT_G_PUPDR		(*((volatile uint32_t*)( PORT_REG_PORT_G_BASE_REG + PORT_REG_PUPDR_OFFSET )))
#define PORT_REG_PORT_H_PUPDR		(*((volatile uint32_t*)( PORT_REG_PORT_H_BASE_REG + PORT_REG_PUPDR_OFFSET )))

/* Port IDR Registers addresses */
#define PORT_REG_PORT_A_IDR		(*((volatile uint32_t*)( PORT_REG_PORT_A_BASE_REG + PORT_REG_IDR_OFFSET )))
#define PORT_REG_PORT_B_IDR		(*((volatile uint32_t*)( PORT_REG_PORT_B_BASE_REG + PORT_REG_IDR_OFFSET )))
#define PORT_REG_PORT_C_IDR		(*((volatile uint32_t*)( PORT_REG_PORT_C_BASE_REG + PORT_REG_IDR_OFFSET )))
#define PORT_REG_PORT_D_IDR		(*((volatile uint32_t*)( PORT_REG_PORT_D_BASE_REG + PORT_REG_IDR_OFFSET )))
#define PORT_REG_PORT_E_IDR		(*((volatile uint32_t*)( PORT_REG_PORT_E_BASE_REG + PORT_REG_IDR_OFFSET )))
#define PORT_REG_PORT_F_IDR		(*((volatile uint32_t*)( PORT_REG_PORT_F_BASE_REG + PORT_REG_IDR_OFFSET )))
#define PORT_REG_PORT_G_IDR		(*((volatile uint32_t*)( PORT_REG_PORT_G_BASE_REG + PORT_REG_IDR_OFFSET )))
#define PORT_REG_PORT_H_IDR		(*((volatile uint32_t*)( PORT_REG_PORT_H_BASE_REG + PORT_REG_IDR_OFFSET )))

/* Port ODR Registers addresses */
#define PORT_REG_PORT_A_ODR		(*((volatile uint32_t*)( PORT_REG_PORT_A_BASE_REG + PORT_REG_ODR_OFFSET )))
#define PORT_REG_PORT_B_ODR		(*((volatile uint32_t*)( PORT_REG_PORT_B_BASE_REG + PORT_REG_ODR_OFFSET )))
#define PORT_REG_PORT_C_ODR		(*((volatile uint32_t*)( PORT_REG_PORT_C_BASE_REG + PORT_REG_ODR_OFFSET )))
#define PORT_REG_PORT_D_ODR		(*((volatile uint32_t*)( PORT_REG_PORT_D_BASE_REG + PORT_REG_ODR_OFFSET )))
#define PORT_REG_PORT_E_ODR		(*((volatile uint32_t*)( PORT_REG_PORT_E_BASE_REG + PORT_REG_ODR_OFFSET )))
#define PORT_REG_PORT_F_ODR		(*((volatile uint32_t*)( PORT_REG_PORT_F_BASE_REG + PORT_REG_ODR_OFFSET )))
#define PORT_REG_PORT_G_ODR		(*((volatile uint32_t*)( PORT_REG_PORT_G_BASE_REG + PORT_REG_ODR_OFFSET )))
#define PORT_REG_PORT_H_ODR		(*((volatile uint32_t*)( PORT_REG_PORT_H_BASE_REG + PORT_REG_ODR_OFFSET )))

/* Port BSRR Registers addresses */
#define PORT_REG_PORT_A_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_A_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_B_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_B_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_C_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_C_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_D_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_D_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_E_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_E_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_F_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_F_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_G_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_G_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_H_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_H_BASE_REG + PORT_REG_BSRR_OFFSET )))

/* Port LCKR Registers addresses */
#define PORT_REG_PORT_A_LCKR		(*((volatile uint32_t*)( PORT_REG_PORT_A_BASE_REG + PORT_REG_LCKR_OFFSET )))
#define PORT_REG_PORT_B_LCKR		(*((volatile uint32_t*)( PORT_REG_PORT_B_BASE_REG + PORT_REG_LCKR_OFFSET )))
#define PORT_REG_PORT_C_LCKR		(*((volatile uint32_t*)( PORT_REG_PORT_C_BASE_REG + PORT_REG_LCKR_OFFSET )))
#define PORT_REG_PORT_D_LCKR		(*((volatile uint32_t*)( PORT_REG_PORT_D_BASE_REG + PORT_REG_LCKR_OFFSET )))
#define PORT_REG_PORT_E_LCKR		(*((volatile uint32_t*)( PORT_REG_PORT_E_BASE_REG + PORT_REG_LCKR_OFFSET )))
#define PORT_REG_PORT_F_LCKR		(*((volatile uint32_t*)( PORT_REG_PORT_F_BASE_REG + PORT_REG_LCKR_OFFSET )))
#define PORT_REG_PORT_G_LCKR		(*((volatile uint32_t*)( PORT_REG_PORT_G_BASE_REG + PORT_REG_LCKR_OFFSET )))
#define PORT_REG_PORT_H_LCKR		(*((volatile uint32_t*)( PORT_REG_PORT_H_BASE_REG + PORT_REG_LCKR_OFFSET )))

/* Port BSRR Registers addresses */
#define PORT_REG_PORT_A_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_A_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_B_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_B_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_C_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_C_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_D_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_D_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_E_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_E_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_F_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_F_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_G_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_G_BASE_REG + PORT_REG_BSRR_OFFSET )))
#define PORT_REG_PORT_H_BSRR		(*((volatile uint32_t*)( PORT_REG_PORT_H_BASE_REG + PORT_REG_BSRR_OFFSET )))

/* Port AFRL Registers addresses */
#define PORT_REG_PORT_A_AFRL		(*((volatile uint32_t*)( PORT_REG_PORT_A_BASE_REG + PORT_REG_AFRL_OFFSET )))
#define PORT_REG_PORT_B_AFRL		(*((volatile uint32_t*)( PORT_REG_PORT_B_BASE_REG + PORT_REG_AFRL_OFFSET )))
#define PORT_REG_PORT_C_AFRL		(*((volatile uint32_t*)( PORT_REG_PORT_C_BASE_REG + PORT_REG_AFRL_OFFSET )))
#define PORT_REG_PORT_D_AFRL		(*((volatile uint32_t*)( PORT_REG_PORT_D_BASE_REG + PORT_REG_AFRL_OFFSET )))
#define PORT_REG_PORT_E_AFRL		(*((volatile uint32_t*)( PORT_REG_PORT_E_BASE_REG + PORT_REG_AFRL_OFFSET )))
#define PORT_REG_PORT_F_AFRL		(*((volatile uint32_t*)( PORT_REG_PORT_F_BASE_REG + PORT_REG_AFRL_OFFSET )))
#define PORT_REG_PORT_G_AFRL		(*((volatile uint32_t*)( PORT_REG_PORT_G_BASE_REG + PORT_REG_AFRL_OFFSET )))
#define PORT_REG_PORT_H_AFRL		(*((volatile uint32_t*)( PORT_REG_PORT_H_BASE_REG + PORT_REG_AFRL_OFFSET )))

/* Port AFRH Registers addresses */
#define PORT_REG_PORT_A_AFRH		(*((volatile uint32_t*)( PORT_REG_PORT_A_BASE_REG + PORT_REG_AFRH_OFFSET )))
#define PORT_REG_PORT_B_AFRH		(*((volatile uint32_t*)( PORT_REG_PORT_B_BASE_REG + PORT_REG_AFRH_OFFSET )))
#define PORT_REG_PORT_C_AFRH		(*((volatile uint32_t*)( PORT_REG_PORT_C_BASE_REG + PORT_REG_AFRH_OFFSET )))
#define PORT_REG_PORT_D_AFRH		(*((volatile uint32_t*)( PORT_REG_PORT_D_BASE_REG + PORT_REG_AFRH_OFFSET )))
#define PORT_REG_PORT_E_AFRH		(*((volatile uint32_t*)( PORT_REG_PORT_E_BASE_REG + PORT_REG_AFRH_OFFSET )))
#define PORT_REG_PORT_F_AFRH		(*((volatile uint32_t*)( PORT_REG_PORT_F_BASE_REG + PORT_REG_AFRH_OFFSET )))
#define PORT_REG_PORT_G_AFRH		(*((volatile uint32_t*)( PORT_REG_PORT_G_BASE_REG + PORT_REG_AFRH_OFFSET )))
#define PORT_REG_PORT_H_AFRH		(*((volatile uint32_t*)( PORT_REG_PORT_H_BASE_REG + PORT_REG_AFRH_OFFSET )))

/* Port BRR Registers addresses */
#define PORT_REG_PORT_A_BRR		(*((volatile uint32_t*)( PORT_REG_PORT_A_BASE_REG + PORT_REG_BRR_OFFSET )))
#define PORT_REG_PORT_B_BRR		(*((volatile uint32_t*)( PORT_REG_PORT_B_BASE_REG + PORT_REG_BRR_OFFSET )))
#define PORT_REG_PORT_C_BRR		(*((volatile uint32_t*)( PORT_REG_PORT_C_BASE_REG + PORT_REG_BRR_OFFSET )))
#define PORT_REG_PORT_D_BRR		(*((volatile uint32_t*)( PORT_REG_PORT_D_BASE_REG + PORT_REG_BRR_OFFSET )))
#define PORT_REG_PORT_E_BRR		(*((volatile uint32_t*)( PORT_REG_PORT_E_BASE_REG + PORT_REG_BRR_OFFSET )))
#define PORT_REG_PORT_F_BRR		(*((volatile uint32_t*)( PORT_REG_PORT_F_BASE_REG + PORT_REG_BRR_OFFSET )))
#define PORT_REG_PORT_G_BRR		(*((volatile uint32_t*)( PORT_REG_PORT_G_BASE_REG + PORT_REG_BRR_OFFSET )))
#define PORT_REG_PORT_H_BRR		(*((volatile uint32_t*)( PORT_REG_PORT_H_BASE_REG + PORT_REG_BRR_OFFSET )))



/*******************  Bit definition for PORT_REG_MODER register  *****************/
#define PORT_REG_MODER_BITS_MASK	   ((uint32_t)0x00000003)
#define PORT_REG_MODER_MODER0_0        ((uint32_t)0x00000000)
#define PORT_REG_MODER_MODER1_0        ((uint32_t)0x00000002)
#define PORT_REG_MODER_MODER2_0        ((uint32_t)0x00000004)
#define PORT_REG_MODER_MODER3_0        ((uint32_t)0x00000006)
#define PORT_REG_MODER_MODER4_0        ((uint32_t)0x00000008)
#define PORT_REG_MODER_MODER5_0        ((uint32_t)0x0000000A)
#define PORT_REG_MODER_MODER6_0        ((uint32_t)0x0000000C)
#define PORT_REG_MODER_MODER7_0        ((uint32_t)0x0000000E)
#define PORT_REG_MODER_MODER8_0        ((uint32_t)0x00000010)
#define PORT_REG_MODER_MODER9_0        ((uint32_t)0x00000012)
#define PORT_REG_MODER_MODER10_0       ((uint32_t)0x00000014)
#define PORT_REG_MODER_MODER11_0       ((uint32_t)0x00000016)
#define PORT_REG_MODER_MODER12_0       ((uint32_t)0x00000018)
#define PORT_REG_MODER_MODER13_0       ((uint32_t)0x0000001A)
#define PORT_REG_MODER_MODER14_0       ((uint32_t)0x0000001C)
#define PORT_REG_MODER_MODER15_0       ((uint32_t)0x0000001E)


/******************  Bit definition for PORT_REG_OTYPER register  *****************/
#define PORT_REG_OTYPER_BITS_MASK	     ((uint32_t)0x00000001)
#define PORT_REG_OTYPER_OTYPER0_0        ((uint32_t)0x00000000)
#define PORT_REG_OTYPER_OTYPER1_0        ((uint32_t)0x00000001)
#define PORT_REG_OTYPER_OTYPER2_0        ((uint32_t)0x00000002)
#define PORT_REG_OTYPER_OTYPER3_0        ((uint32_t)0x00000003)
#define PORT_REG_OTYPER_OTYPER4_0        ((uint32_t)0x00000004)
#define PORT_REG_OTYPER_OTYPER5_0        ((uint32_t)0x00000005)
#define PORT_REG_OTYPER_OTYPER6_0        ((uint32_t)0x00000006)
#define PORT_REG_OTYPER_OTYPER7_0        ((uint32_t)0x00000007)
#define PORT_REG_OTYPER_OTYPER8_0        ((uint32_t)0x00000008)
#define PORT_REG_OTYPER_OTYPER9_0        ((uint32_t)0x00000009)
#define PORT_REG_OTYPER_OTYPER10_0       ((uint32_t)0x0000000A)
#define PORT_REG_OTYPER_OTYPER11_0       ((uint32_t)0x0000000B)
#define PORT_REG_OTYPER_OTYPER12_0       ((uint32_t)0x0000000C)
#define PORT_REG_OTYPER_OTYPER13_0       ((uint32_t)0x0000000D)
#define PORT_REG_OTYPER_OTYPER14_0       ((uint32_t)0x0000000E)
#define PORT_REG_OTYPER_OTYPER15_0       ((uint32_t)0x0000000F)

/****************  Bit definition for PORT_REG_OSPEEDR register  ******************/
#define PORT_REG_OSPEEDR_BITS_MASK	        ((uint32_t)0x00000003)
#define PORT_REG_OSPEEDR_OSPEEDR0_0        ((uint32_t)0x00000000)
#define PORT_REG_OSPEEDR_OSPEEDR1_0        ((uint32_t)0x00000002)
#define PORT_REG_OSPEEDR_OSPEEDR2_0        ((uint32_t)0x00000004)
#define PORT_REG_OSPEEDR_OSPEEDR3_0        ((uint32_t)0x00000006)
#define PORT_REG_OSPEEDR_OSPEEDR4_0        ((uint32_t)0x00000008)
#define PORT_REG_OSPEEDR_OSPEEDR5_0        ((uint32_t)0x0000000A)
#define PORT_REG_OSPEEDR_OSPEEDR6_0        ((uint32_t)0x0000000C)
#define PORT_REG_OSPEEDR_OSPEEDR7_0        ((uint32_t)0x0000000E)
#define PORT_REG_OSPEEDR_OSPEEDR8_0        ((uint32_t)0x00000010)
#define PORT_REG_OSPEEDR_OSPEEDR9_0        ((uint32_t)0x00000012)
#define PORT_REG_OSPEEDR_OSPEEDR10_0       ((uint32_t)0x00000014)
#define PORT_REG_OSPEEDR_OSPEEDR11_0       ((uint32_t)0x00000016)
#define PORT_REG_OSPEEDR_OSPEEDR12_0       ((uint32_t)0x00000018)
#define PORT_REG_OSPEEDR_OSPEEDR13_0       ((uint32_t)0x0000001A)
#define PORT_REG_OSPEEDR_OSPEEDR14_0       ((uint32_t)0x0000001C)
#define PORT_REG_OSPEEDR_OSPEEDR15_0       ((uint32_t)0x0000001E)

/*******************  Bit definition for PORT_REG_PUPDR register ******************/
#define PORT_REG_PUPDR_BITS_MASK	   ((uint32_t)0x00000003)
#define PORT_REG_PUPDR_PUPDR0_0        ((uint32_t)0x00000000)
#define PORT_REG_PUPDR_PUPDR1_0        ((uint32_t)0x00000002)
#define PORT_REG_PUPDR_PUPDR2_0        ((uint32_t)0x00000004)
#define PORT_REG_PUPDR_PUPDR3_0        ((uint32_t)0x00000006)
#define PORT_REG_PUPDR_PUPDR4_0        ((uint32_t)0x00000008)
#define PORT_REG_PUPDR_PUPDR5_0        ((uint32_t)0x0000000A)
#define PORT_REG_PUPDR_PUPDR6_0        ((uint32_t)0x0000000C)
#define PORT_REG_PUPDR_PUPDR7_0        ((uint32_t)0x0000000E)
#define PORT_REG_PUPDR_PUPDR8_0        ((uint32_t)0x00000010)
#define PORT_REG_PUPDR_PUPDR9_0        ((uint32_t)0x00000012)
#define PORT_REG_PUPDR_PUPDR10_0       ((uint32_t)0x00000014)
#define PORT_REG_PUPDR_PUPDR11_0       ((uint32_t)0x00000016)
#define PORT_REG_PUPDR_PUPDR12_0       ((uint32_t)0x00000018)
#define PORT_REG_PUPDR_PUPDR13_0       ((uint32_t)0x0000001A)
#define PORT_REG_PUPDR_PUPDR14_0       ((uint32_t)0x0000001C)
#define PORT_REG_PUPDR_PUPDR15_0       ((uint32_t)0x0000001E)

/****************** Bit definition for PORT_REG_LCKR register  ********************/
#define PORT_REG_LCKR_BITS_MASK	     ((uint32_t)0x00000001)
#define PORT_REG_LCKR_LCKR0_0        ((uint32_t)0x00000000)
#define PORT_REG_LCKR_LCKR1_0        ((uint32_t)0x00000001)
#define PORT_REG_LCKR_LCKR2_0        ((uint32_t)0x00000002)
#define PORT_REG_LCKR_LCKR3_0        ((uint32_t)0x00000003)
#define PORT_REG_LCKR_LCKR4_0        ((uint32_t)0x00000004)
#define PORT_REG_LCKR_LCKR5_0        ((uint32_t)0x00000005)
#define PORT_REG_LCKR_LCKR6_0        ((uint32_t)0x00000006)
#define PORT_REG_LCKR_LCKR7_0        ((uint32_t)0x00000007)
#define PORT_REG_LCKR_LCKR8_0        ((uint32_t)0x00000008)
#define PORT_REG_LCKR_LCKR9_0        ((uint32_t)0x00000009)
#define PORT_REG_LCKR_LCKR10_0       ((uint32_t)0x0000000A)
#define PORT_REG_LCKR_LCKR11_0       ((uint32_t)0x0000000B)
#define PORT_REG_LCKR_LCKR12_0       ((uint32_t)0x0000000C)
#define PORT_REG_LCKR_LCKR13_0       ((uint32_t)0x0000000D)
#define PORT_REG_LCKR_LCKR14_0       ((uint32_t)0x0000000E)
#define PORT_REG_LCKR_LCKR15_0       ((uint32_t)0x0000000F)

/****************** Bit definition for PORT_REG_AFRL register  ********************/
#define PORT_REG_AFRL_BITS_MASK          ((uint32_t)0x0000000F)
#define PORT_REG_AFRL_AFRL0_0            ((uint32_t)0x00000000)
#define PORT_REG_AFRL_AFRL1_0            ((uint32_t)0x00000004)
#define PORT_REG_AFRL_AFRL2_0            ((uint32_t)0x00000008)
#define PORT_REG_AFRL_AFRL3_0            ((uint32_t)0x0000000C)
#define PORT_REG_AFRL_AFRL4_0            ((uint32_t)0x00000010)
#define PORT_REG_AFRL_AFRL5_0            ((uint32_t)0x00000014)
#define PORT_REG_AFRL_AFRL6_0            ((uint32_t)0x00000018)
#define PORT_REG_AFRL_AFRL7_0            ((uint32_t)0x0000001C)

/****************** Bit definition for PORT_REG_AFRH register  ********************/
#define PORT_REG_AFRH_BITS_MASK          ((uint32_t)0x0000000F)
#define PORT_REG_AFRH_AFRH0_0            ((uint32_t)0x00000000)
#define PORT_REG_AFRH_AFRH1_0            ((uint32_t)0x00000004)
#define PORT_REG_AFRH_AFRH2_0            ((uint32_t)0x00000008)
#define PORT_REG_AFRH_AFRH3_0            ((uint32_t)0x0000000C)
#define PORT_REG_AFRH_AFRH4_0            ((uint32_t)0x00000010)
#define PORT_REG_AFRH_AFRH5_0            ((uint32_t)0x00000014)
#define PORT_REG_AFRH_AFRH6_0            ((uint32_t)0x00000018)
#define PORT_REG_AFRH_AFRH7_0            ((uint32_t)0x0000001C)


/****************** Bit definition for PORT_REG_BRR register  *********************/
#define PORT_REG_BRR_BITS_MASK	   ((uint32_t)0x00000001)
#define PORT_REG_BRR_BRR0_0        ((uint32_t)0x00000000)
#define PORT_REG_BRR_BRR1_0        ((uint32_t)0x00000001)
#define PORT_REG_BRR_BRR2_0        ((uint32_t)0x00000002)
#define PORT_REG_BRR_BRR3_0        ((uint32_t)0x00000003)
#define PORT_REG_BRR_BRR4_0        ((uint32_t)0x00000004)
#define PORT_REG_BRR_BRR5_0        ((uint32_t)0x00000005)
#define PORT_REG_BRR_BRR6_0        ((uint32_t)0x00000006)
#define PORT_REG_BRR_BRR7_0        ((uint32_t)0x00000007)
#define PORT_REG_BRR_BRR8_0        ((uint32_t)0x00000008)
#define PORT_REG_BRR_BRR9_0        ((uint32_t)0x00000009)
#define PORT_REG_BRR_BRR10_0       ((uint32_t)0x0000000A)
#define PORT_REG_BRR_BRR11_0       ((uint32_t)0x0000000B)
#define PORT_REG_BRR_BRR12_0       ((uint32_t)0x0000000C)
#define PORT_REG_BRR_BRR13_0       ((uint32_t)0x0000000D)
#define PORT_REG_BRR_BRR14_0       ((uint32_t)0x0000000E)
#define PORT_REG_BRR_BRR15_0       ((uint32_t)0x0000000F)


/******************************************************************************/
/*                                                                            */
/*                        Reset and Clock Control (RCC)                       */
/*                                                                            */
/******************************************************************************/
/* RCC Constants */
#define RCC_CONST_CLOCK_ENABLED			(1U)
#define RCC_CONST_CLOCK_DISABLED		(0U)

/* RCC Registers Base Addresses and Offset */
#define RCC_REG_RCC_BASE_REG       		((uint32_t)0x40021000)
#define RCC_REG_AHBENR_OFFSET	   		((uint32_t)0x00000014)

/* RCC Registers */
#define RCC_REG_AHBENR   	       (*((volatile uint32_t*)( RCC_REG_RCC_BASE_REG + RCC_REG_AHBENR_OFFSET )))


/*********** Bit definition for RCC_REG_AHBENR register  *********************/

#define RCC_REG_AHBENR_DMA1EN	(0U)
#define RCC_REG_AHBENR_DMA2EN	(1U)
#define RCC_REG_AHBENR_SRAMEN	(2U)
#define RCC_REG_AHBENR_FLITFEN	(4U)
#define RCC_REG_AHBENR_FMCEN	(5U)
#define RCC_REG_AHBENR_CRCEN	(6U)
#define RCC_REG_AHBENR_IOPHEN	(16U)
#define RCC_REG_AHBENR_IOPAEN	(17U)
#define RCC_REG_AHBENR_IOPBEN	(18U)
#define RCC_REG_AHBENR_IOPCEN	(19U)
#define RCC_REG_AHBENR_IOPDEN	(20U)
#define RCC_REG_AHBENR_IOPEEN	(21U)
#define RCC_REG_AHBENR_IOPFEN	(22U)
#define RCC_REG_AHBENR_IOPGEN	(23U)
#define RCC_REG_AHBENR_TSCEN	(24U)
#define RCC_REG_AHBENR_ADC12EN	(28U)
#define RCC_REG_AHBENR_ADC34EN	(29U)


/******************************************************************************/
/*                                                                            */
/*         Universal Sync Async Receiver Transmitter Protocol (USART)         */
/*                                                                            */
/******************************************************************************/
#define USART_REG_USART1_BASE_ADDRESS		((uint32_t) 0x40013800)
#define USART_REG_USART2_BASE_ADDRESS		((uint32_t) 0x40004400)
#define USART_REG_USART3_BASE_ADDRESS		((uint32_t) 0x40004800)
#define USART_REG_USART2_BASE_ADDRESS		((uint32_t) 0x40004C00)
#define USART_REG_USART3_BASE_ADDRESS		((uint32_t) 0x40005000)

#define USART_REG_CR1_OFFSET				((uint32_t) 0x00000000)


#define USART_REG_USART1_CR1				(*((volatile uint32_t*) (USART_REG_USART1_BASE_ADDRESS + USART_REG_CR1_OFFSET) ))
#define USART_REG_USART2_CR1				(*((volatile uint32_t*) (USART_REG_USART2_BASE_ADDRESS + USART_REG_CR1_OFFSET) ))
#define USART_REG_USART3_CR1				(*((volatile uint32_t*) (USART_REG_USART3_BASE_ADDRESS + USART_REG_CR1_OFFSET) ))
#define USART_REG_USART4_CR1				(*((volatile uint32_t*) (USART_REG_USART4_BASE_ADDRESS + USART_REG_CR1_OFFSET) ))
#define USART_REG_USART5_CR1				(*((volatile uint32_t*) (USART_REG_USART5_BASE_ADDRESS + USART_REG_CR1_OFFSET) ))

/****************** Bit definition for USART_REG_USART_CR1 register ********************/
#define USART_REG_CR1_UE			(0U)
#define USART_REG_CR1_UESM			(1U)
#define USART_REG_CR1_RE			(2U)
#define USART_REG_CR1_TE			(3U)
#define USART_REG_CR1_IDLEIE		(4U)
#define USART_REG_CR1_RXNEIE		(5U)
#define USART_REG_CR1_TCIE			(6U)
#define USART_REG_CR1_TXEIE			(7U)
#define USART_REG_CR1_PEIE			(8U)
#define USART_REG_CR1_PS			(9U)
#define USART_REG_CR1_PCE			(10U)
#define USART_REG_CR1_WAKE			(11U)
#define USART_REG_CR1_M0			(12U)
#define USART_REG_CR1_MME			(13U)
#define USART_REG_CR1_CMIE			(14U)
#define USART_REG_CR1_OVER8			(15U)
#define USART_REG_CR1_DEDT_DEDT0	(16U)
#define USART_REG_CR1_DEAT_DEAT0	(21U)
#define USART_REG_CR1_RTOIE			(26U)
#define USART_REG_CR1_EOBIE			(27U)
#define USART_REG_CR1_M1			(28U)



/****************** Reset values for USART Registers *************************/
#define USART_REG_CR1_RESET_VALUE			((uint32_t) 0x00000000)
/*****************************************************************************/

/*******************************Global-Variables******************************/

/*****************************************************************************/

/*****************************Function-Prototypes*****************************/

/*****************************************************************************/

/*****************************Function-Definitions****************************/

/*****************************************************************************/

#endif /* End of #ifndef */
