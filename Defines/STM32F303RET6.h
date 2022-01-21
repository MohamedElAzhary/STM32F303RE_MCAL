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
/*******************  Reset values for PORT_REG_PORTx registers   *****************/


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

/*******************  Bit definition for PORT_REG_IDR register  *******************/
#define PORT_REG_IDR_BITS_MASK	   ((uint32_t)0x00000001)
#define PORT_REG_IDR_IDR0_0        ((uint32_t)0x00000000)
#define PORT_REG_IDR_IDR1_0        ((uint32_t)0x00000001)
#define PORT_REG_IDR_IDR2_0        ((uint32_t)0x00000002)
#define PORT_REG_IDR_IDR3_0        ((uint32_t)0x00000003)
#define PORT_REG_IDR_IDR4_0        ((uint32_t)0x00000004)
#define PORT_REG_IDR_IDR5_0        ((uint32_t)0x00000005)
#define PORT_REG_IDR_IDR6_0        ((uint32_t)0x00000006)
#define PORT_REG_IDR_IDR7_0        ((uint32_t)0x00000007)
#define PORT_REG_IDR_IDR8_0        ((uint32_t)0x00000008)
#define PORT_REG_IDR_IDR9_0        ((uint32_t)0x00000009)
#define PORT_REG_IDR_IDR10_0       ((uint32_t)0x0000000A)
#define PORT_REG_IDR_IDR11_0       ((uint32_t)0x0000000B)
#define PORT_REG_IDR_IDR12_0       ((uint32_t)0x0000000C)
#define PORT_REG_IDR_IDR13_0       ((uint32_t)0x0000000D)
#define PORT_REG_IDR_IDR14_0       ((uint32_t)0x0000000E)
#define PORT_REG_IDR_IDR15_0       ((uint32_t)0x0000000F)

/******************  Bit definition for PORT_REG_ODR register  ********************/
#define PORT_REG_ODR_BITS_MASK	   ((uint32_t)0x00000001)
#define PORT_REG_ODR_ODR0_0        ((uint32_t)0x00000000)
#define PORT_REG_ODR_ODR1_0        ((uint32_t)0x00000001)
#define PORT_REG_ODR_ODR2_0        ((uint32_t)0x00000002)
#define PORT_REG_ODR_ODR3_0        ((uint32_t)0x00000003)
#define PORT_REG_ODR_ODR4_0        ((uint32_t)0x00000004)
#define PORT_REG_ODR_ODR5_0        ((uint32_t)0x00000005)
#define PORT_REG_ODR_ODR6_0        ((uint32_t)0x00000006)
#define PORT_REG_ODR_ODR7_0        ((uint32_t)0x00000007)
#define PORT_REG_ODR_ODR8_0        ((uint32_t)0x00000008)
#define PORT_REG_ODR_ODR9_0        ((uint32_t)0x00000009)
#define PORT_REG_ODR_ODR10_0       ((uint32_t)0x0000000A)
#define PORT_REG_ODR_ODR11_0       ((uint32_t)0x0000000B)
#define PORT_REG_ODR_ODR12_0       ((uint32_t)0x0000000C)
#define PORT_REG_ODR_ODR13_0       ((uint32_t)0x0000000D)
#define PORT_REG_ODR_ODR14_0       ((uint32_t)0x0000000E)
#define PORT_REG_ODR_ODR15_0       ((uint32_t)0x0000000F)

/****************** Bit definition for PORT_REG_BSRR register  ********************/
#define PORT_REG_BSRR_BITS_MASK        ((uint32_t)0x00000001)
#define PORT_REG_BSRR_BS_0             ((uint32_t)0x00000000)
#define PORT_REG_BSRR_BS_1             ((uint32_t)0x00000001)
#define PORT_REG_BSRR_BS_2             ((uint32_t)0x00000002)
#define PORT_REG_BSRR_BS_3             ((uint32_t)0x00000003)
#define PORT_REG_BSRR_BS_4             ((uint32_t)0x00000004)
#define PORT_REG_BSRR_BS_5             ((uint32_t)0x00000005)
#define PORT_REG_BSRR_BS_6             ((uint32_t)0x00000006)
#define PORT_REG_BSRR_BS_7             ((uint32_t)0x00000007)
#define PORT_REG_BSRR_BS_8             ((uint32_t)0x00000008)
#define PORT_REG_BSRR_BS_9             ((uint32_t)0x00000009)
#define PORT_REG_BSRR_BS_10            ((uint32_t)0x0000000A)
#define PORT_REG_BSRR_BS_11            ((uint32_t)0x0000000B)
#define PORT_REG_BSRR_BS_12            ((uint32_t)0x0000000C)
#define PORT_REG_BSRR_BS_13            ((uint32_t)0x0000000D)
#define PORT_REG_BSRR_BS_14            ((uint32_t)0x0000000E)
#define PORT_REG_BSRR_BS_15            ((uint32_t)0x0000000F)
#define PORT_REG_BSRR_BR_0             ((uint32_t)0x00000010)
#define PORT_REG_BSRR_BR_1             ((uint32_t)0x00000011)
#define PORT_REG_BSRR_BR_2             ((uint32_t)0x00000012)
#define PORT_REG_BSRR_BR_3             ((uint32_t)0x00000013)
#define PORT_REG_BSRR_BR_4             ((uint32_t)0x00000014)
#define PORT_REG_BSRR_BR_5             ((uint32_t)0x00000015)
#define PORT_REG_BSRR_BR_6             ((uint32_t)0x00000016)
#define PORT_REG_BSRR_BR_7             ((uint32_t)0x00000017)
#define PORT_REG_BSRR_BR_8             ((uint32_t)0x00000018)
#define PORT_REG_BSRR_BR_9             ((uint32_t)0x00000019)
#define PORT_REG_BSRR_BR_10            ((uint32_t)0x0000001A)
#define PORT_REG_BSRR_BR_11            ((uint32_t)0x0000001B)
#define PORT_REG_BSRR_BR_12            ((uint32_t)0x0000001C)
#define PORT_REG_BSRR_BR_13            ((uint32_t)0x0000001D)
#define PORT_REG_BSRR_BR_14            ((uint32_t)0x0000001E)
#define PORT_REG_BSRR_BR_15            ((uint32_t)0x0000001F)

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

#define RCC_REG_RCC_BASE_REG       ((uint32_t)0x40021000)
#define RCC_REG_AHBENR_OFFSET	   ((uint32_t)0x00000014)
#define RCC_REG_AHBENR   	       (*((volatile uint32_t*)( RCC_REG_RCC_BASE_REG + RCC_REG_AHBENR_OFFSET )))

/*****************************************************************************/

/*******************************Global-Variables******************************/

/*****************************************************************************/

/*****************************Function-Prototypes*****************************/

/*****************************************************************************/

/*****************************Function-Definitions****************************/

/*****************************************************************************/

#endif /* End of #ifndef */
