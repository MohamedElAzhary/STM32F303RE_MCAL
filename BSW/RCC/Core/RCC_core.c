/******************************************************************************
* FileName     : RCC_core.c
* Author       : Mohamed El Azhary
* Description  : RCC core source file
*
******************************************************************************/

/*******************************File-Includes*********************************/
#include "RCC_core.h"
#include "STM32F303RET6.h"
/****************************PreProcessor-Macros******************************/

/***************************PreProcessor-Constants****************************/

/*******************************Global-Variables******************************/

/*****************************Function-Prototypes*****************************/

/*****************************Function-Definitions****************************/
void RCC_Init(void){



	// HSI set as System Clock, System_Clock_Hz = HSI_Clock_Hz = 8 MHz
	// APB2 Prescaler is 8, APB2_Clock_Hz = System_Clock_Hz / 8
	// APB1 Prescaler is 8, APB1_Clock_Hz = System_Clock_Hz / 8
	// AHB Prescaler is 8, AHB_Clock_Hz = System_Clock_Hz / 8
	RCC_REG_CFGR	|= (RCC_CFGR_HCLK_DIV_BY_8<<RCC_REG_CFGR_PPRE2)
					|(RCC_CFGR_HCLK_DIV_BY_8<<RCC_REG_CFGR_PPRE1)
					|(RCC_CFGR_SYSCLK_NOT_DIVIDED<<RCC_REG_CFGR_HPRE);

	// Enable HSI Ready Interrupt
	RCC_REG_CIR |= (STD_ON << RCC_REG_CIR_HSIRDYIE);

	// HSI Oscillator ON
	RCC_REG_CR |= (STD_ON<<RCC_REG_CR_HSION);

//	// Loop Until HSI Ready Flag is Set, indicating HSI Clock became stable
//	while(! (RCC_REG_CIR & (STD_ON<<RCC_REG_CIR_HSIRDYF) ) );
//
//	// Clear HSIRDYF Interrupt by clearing HSIRDYC
//	RCC_REG_CIR |= (STD_ON<<RCC_REG_CIR_HSIRDYC);

}


/*****************************************************************************/
