/*****************************************************************************
* FileName     : Port_core.h
* Author       : &{user}
* Created      : Jan 16, 2022
* Description  :
*
*
*****************************************************************************/
#ifndef PORT_CORE_H_
#define PORT_CORE_H_

#include "Template_Port_cfg.h"
#include "stdint.h"

/* Define Pins */
#define PORT_CONST_PIN_0	(0U)	/* Defines Port Pin 0 */
#define PORT_CONST_PIN_1	(1U)	/* Defines Port Pin 1 */
#define PORT_CONST_PIN_2	(2U)	/* Defines Port Pin 2 */
#define PORT_CONST_PIN_3	(3U)	/* Defines Port Pin 3 */
#define PORT_CONST_PIN_4	(4U)	/* Defines Port Pin 4 */
#define PORT_CONST_PIN_5	(5U)	/* Defines Port Pin 5 */
#define PORT_CONST_PIN_6	(6U)	/* Defines Port Pin 6 */
#define PORT_CONST_PIN_7	(7U)	/* Defines Port Pin 7 */
#define PORT_CONST_PIN_8	(8U)	/* Defines Port Pin 8 */
#define PORT_CONST_PIN_9	(9U)	/* Defines Port Pin 9 */
#define PORT_CONST_PIN_10	(10U)	/* Defines Port Pin 10 */
#define PORT_CONST_PIN_11	(11U)	/* Defines Port Pin 11 */
#define PORT_CONST_PIN_12	(12U)	/* Defines Port Pin 12 */
#define PORT_CONST_PIN_13	(13U)	/* Defines Port Pin 13 */
#define PORT_CONST_PIN_14	(14U)	/* Defines Port Pin 14 */
#define PORT_CONST_PIN_15	(15U)	/* Defines Port Pin 15 */

/* Define Ports */
#define PORT_CONST_PORT_A	(0U)	/* Defines Port A */
#define PORT_CONST_PORT_B	(1U)	/* Defines Port B */
#define PORT_CONST_PORT_C	(2U)	/* Defines Port C */
#define PORT_CONST_PORT_D	(3U)	/* Defines Port D */
#define PORT_CONST_PORT_E	(4U)	/* Defines Port E */
#define PORT_CONST_PORT_F	(5U)	/* Defines Port F */
#define PORT_CONST_PORT_G	(6U)	/* Defines Port G */
#define PORT_CONST_PORT_H	(7U)	/* Defines Port H */

/* Define Port Pin States */
#define PORT_CONST_PIN_STATE_LOW	(0U)	/* Defines Pin state low */
#define PORT_CONST_PIN_STATE_HIGH	(1U)	/* Defines Pin state high */

/* Define Port Modes */
#define PORT_CONST_PORT_PIN_MODE_INPUT		(0U)	/* Define Port Pin Mode as Input Mode*/
#define PORT_CONST_PORT_PIN_MODE_OUTPUT		(1U)	/* Define Port Pin Mode as General-Purpose Output Mode */
#define PORT_CONST_PORT_PIN_MODE_ALT_FUNC	(2U)	/* Define Port Pin Mode as Alternate Function Mode */
#define PORT_CONST_PORT_PIN_MODE_ANALOG		(3U)	/* Define Port Pin Mode as Analog Mode */

/* Define Port Pin Output Type */
#define PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL	(0U)	/* Define Port Pin Output Type as Push-Pull */
#define PORT_CONST_PORT_PIN_OUTPUT_OPEN_DRAIN	(1U)	/* Define Port Pin Output Type as Open Drain */

/* Define Port Pin Pull Type */
#define PORT_CONST_PORT_PIN_NO_PULL			(0U)	/* Define Port Pin as no Pull up nor Pull down */
#define PORT_CONST_PORT_PIN_PULL_UP			(1U)	/* Define Port Pin as Pull up */
#define PORT_CONST_PORT_PIN_PULL_DOWN		(2U)	/* Define Port Pin as Pull down */

/* Define Port Pin Speed */
#define PORT_CONST_PORT_PIN_SPEED_LOW		(0U)	/* Define Port Pin Speed as Low */
#define PORT_CONST_PORT_PIN_SPEED_MEDIUM	(1U)	/* Define Port Pin Speed as Medium */
#define PORT_CONST_PORT_PIN_SPEED_HIGH		(2U)	/* Define Port Pin Speed as High */

/* Define Port Pin Locked State */
#define PORT_CONST_PORT_PIN_NOT_LOCKED		(0U)	/* Define Port Pin lock state as not locked */
#define PORT_CONST_PORT_PIN_LOCKED			(1U)	/* Define Port Pin lock state as locked */

/* Define Port Pin Alternate Function */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF0		(0U)	/* Define Port Pin alternate function 0 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF1		(1U)	/* Define Port Pin alternate function 1 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF2		(2U)	/* Define Port Pin alternate function 2 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF3		(3U)	/* Define Port Pin alternate function 3 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF4		(4U)	/* Define Port Pin alternate function 4 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF5		(5U)	/* Define Port Pin alternate function 5 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF6		(6U)	/* Define Port Pin alternate function 6 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF7		(7U)	/* Define Port Pin alternate function 7 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF8		(8U)	/* Define Port Pin alternate function 8 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF9		(9U)	/* Define Port Pin alternate function 9 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF10		(10U)	/* Define Port Pin alternate function 10 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF11		(11U)	/* Define Port Pin alternate function 11 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF12		(12U)	/* Define Port Pin alternate function 12 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF13		(13U)	/* Define Port Pin alternate function 13 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF14		(14U)	/* Define Port Pin alternate function 14 */
#define PORT_CONST_PORT_PIN_ALT_FUNC_AF15		(15U)	/* Define Port Pin alternate function 15 */

/* Define Port Initial Reset Values */
#define PORT_CONST_PORT_A_MOD_RESET_VALUE  ( 0xA8000000 )
#define PORT_CONST_PORT_B_MOD_RESET_VALUE  ( 0x00000280 )
#define PORT_CONST_PORT_C_MOD_RESET_VALUE  ( 0x00000000 )
#define PORT_CONST_PORT_D_MOD_RESET_VALUE  ( 0x00000000 )
#define PORT_CONST_PORT_E_MOD_RESET_VALUE  ( 0x00000000 )
#define PORT_CONST_PORT_F_MOD_RESET_VALUE  ( 0x00000000 )
#define PORT_CONST_PORT_G_MOD_RESET_VALUE  ( 0x00000000 )
#define PORT_CONST_PORT_H_MOD_RESET_VALUE  ( 0x00000000 )
#define PORT_REG_MODER_RESET_VALUE		   ((uint32_t)0x00000000)
#define PORT_REG_OTYPER_RESET_VALUE		   ((uint32_t)0x00000004)
#define PORT_REG_OSPEEDR_RESET_VALUE	   ((uint32_t)0x00000008)
#define PORT_REG_PUPDR_PORT_A_RESET_VALUE  ((uint32_t)0x64000000)
#define PORT_REG_PUPDR_PORT_B_RESET_VALUE  ((uint32_t)0x00000100)
#define PORT_REG_PUPDR_PORT_C_RESET_VALUE  ((uint32_t)0x00000000)
#define PORT_REG_PUPDR_PORT_D_RESET_VALUE  ((uint32_t)0x00000000)
#define PORT_REG_PUPDR_PORT_E_RESET_VALUE  ((uint32_t)0x00000000)
#define PORT_REG_PUPDR_PORT_F_RESET_VALUE  ((uint32_t)0x00000000)
#define PORT_REG_PUPDR_PORT_G_RESET_VALUE  ((uint32_t)0x00000000)
#define PORT_REG_PUPDR_PORT_H_RESET_VALUE  ((uint32_t)0x00000000)
#define PORT_REG_IDR_RESET_VALUE		   ((uint32_t)0x00000000)
#define PORT_REG_ODR_RESET_VALUE	   	   ((uint32_t)0x00000000)
#define PORT_REG_BSRR_RESET_VALUE		   ((uint32_t)0x00000000)
#define PORT_REG_LCKR_RESET_VALUE		   ((uint32_t)0x00000000)
#define PORT_REG_AFRL_RESET_VALUE		   ((uint32_t)0x00000000)
#define PORT_REG_AFRH_RESET_VALUE		   ((uint32_t)0x00000000)
#define PORT_REG_BRR_RESET_VALUE	   	   ((uint32_t)0x00000000)


#if( PORT_CFG_PORT_PIN_LOCK_API_ENABLE  == STD_ON )
	void Port_PinLock(uint8_t Port, uint8_t Pin);
#endif /* End of #if( PORT_CFG_PORT_PIN_LOCK_API_ENABLE  == STD_ON ) */

#if( PORT_CFG_PORT_PIN_UNLOCK_API_ENABLE  == STD_ON )
	void Port_PinUnlock(uint8_t Port, uint8_t Pin);
#endif /* End of #if( PORT_CFG_PORT_PIN_UNLOCK_API_ENABLE  == STD_ON ) */

#if( PORT_CFG_PORT_LOCK_API_ENABLE  == STD_ON )
	void Port_PortLock(uint8_t Port);
#endif /* End of #if( PORT_CFG_PORT_LOCK_API_ENABLE  == STD_ON ) */

#if( PORT_CFG_PORT_UNLOCK_API_ENABLE  == STD_ON )
	void Port_PortUnlock(uint8_t Port);
#endif /* End of #if( PORT_CFG_PORT_UNLOCK_API_ENABLE  == STD_ON ) */

void PORT_Init();

#endif /* PORT_CORE_H_ */
