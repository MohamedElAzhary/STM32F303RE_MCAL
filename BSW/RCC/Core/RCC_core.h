/*******************************************************************************
* FileName     : RCC_core.h
* Author       : Mohamed El Azhary
* Description  : RCC core hearder file
*
********************************************************************************/
#ifndef _RCC_CORE_H_
#define _RCC_CORE_H_

/********************************File-Includes**********************************/
#include "RCC_cfg.h"
/****************************PreProcessor-Constants*****************************/

/*****************************PreProcessor-Macros*******************************/
#define RCC_CFGR_HCLK_NOT_DIVIDED 	(0U)
#define RCC_CFGR_HCLK_DIV_BY_2 		(4U)
#define RCC_CFGR_HCLK_DIV_BY_4		(5U)
#define RCC_CFGR_HCLK_DIV_BY_8		(6U)
#define RCC_CFGR_HCLK_DIV_BY_16		(7U)

#define RCC_CFGR_SYSCLK_NOT_DIVIDED	(0U)
#define RCC_CFGR_SYSCLK_DIV_BY_2	(8U)
#define RCC_CFGR_SYSCLK_DIV_BY_4	(9U)
#define RCC_CFGR_SYSCLK_DIV_BY_8	(10U)
#define RCC_CFGR_SYSCLK_DIV_BY_16	(11U)
#define RCC_CFGR_SYSCLK_DIV_BY_64	(12U)
#define RCC_CFGR_SYSCLK_DIV_BY_128	(13U)
#define RCC_CFGR_SYSCLK_DIV_BY_256	(14U)
#define RCC_CFGR_SYSCLK_DIV_BY_512	(15U)

/*******************************Global-Variables********************************/

/*****************************Function-Prototypes*******************************/

/*****************************Function-Definitions******************************/
void RCC_Init(void);
/*******************************************************************************/

#endif /* End of #ifndef Header Guard */
