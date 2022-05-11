/******************************************************************************
* FileName     : Usart_core.c
* Author       : Mohamed El Azhary
* Description  : Usart core source file
*
******************************************************************************/

/*******************************File-Includes*********************************/
#include "Usart_core.h"
#include "STM32F303RET6.h"
/****************************PreProcessor-Macros******************************/

/***************************PreProcessor-Constants****************************/
#define USART_MODULE_ENABLED	(1U)
/*******************************Global-Variables******************************/

/*****************************Function-Prototypes*****************************/

/*****************************Function-Definitions****************************/
void USART_Init(void){
    #if (USART_CFG_USART1_ENABLE == STD_ON)
		USART_REG_USART1_CR1 = USART_REG_CR1_RESET_VALUE | (USART_MODULE_ENABLED << USART_REG_CR1_UE)
										| (USART_CFG_USART1_ENABLE_WAKEUP_STOPMODE << USART_REG_CR1_UESM)
										| (USART_CFG_USART1_ENABLE_RECEIVER << USART_REG_CR1_RE)
										| (USART_CFG_USART1_ENABLE_TRANSMITTER << USART_REG_CR1_TE)
										| (USART_CFG_USART1_IDLE_INT_ENABLED << USART_REG_CR1_IDLEIE)
										| (USART_CFG_USART1_RXNE_INT_ENABLED << USART_REG_CR1_RXNEIE)
									    | (USART_CFG_USART1_TX_COMPLETE_INT_ENABLED << USART_REG_CR1_TCIE)
    
    #endif /* End of #if (USART_CFG_USART1_ENABLE == STD_ON) */

    #if (USART_CFG_USART2_ENABLE == STD_ON)

    #endif /* End of #if (USART_CFG_USART2_ENABLE == STD_ON) */

    #if (USART_CFG_USART3_ENABLE == STD_ON)

    #endif /* End of #if (USART_CFG_USART3_ENABLE == STD_ON) */

    #if (USART_CFG_USART4_ENABLE == STD_ON)

    #endif /* End of #if (USART_CFG_USART4_ENABLE == STD_ON) */

    #if (USART_CFG_USART5_ENABLE == STD_ON)

    #endif /* End of #if (USART_CFG_USART5_ENABLE == STD_ON) */
}


/*****************************************************************************/
