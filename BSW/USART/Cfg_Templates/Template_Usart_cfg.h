/*******************************************************************************
* FileName     : Usart_cfg.h
* Author       : Mohamed El Azhary
* Description  : Usart configuartion header file
*
********************************************************************************/
#ifndef _USART_CFG_H_
#define _USART_CFG_H_

/********************************File-Includes**********************************/
#include "Usart.h"
/****************************PreProcessor-Constants*****************************/
#define USART_CONST_BAUDRATE_OVERSAMPLING_8     (1U)
#define USART_CONST_BAUDRATE_OVERSAMPLING_16    (0U)
#define USART_CONST_EVEN_PARITY                 (0U)
#define USART_CONST_ODD_PARITY                  (1U)

#define USART_CONST_WAKEUP_METHOD_IDLE_LINE      (0U)
#define USART_CONST_WAKEUP_METHOD_ADDRESS_MARK   (1U)

#define USART_CONST_WORD_LENGTH_7_BITS      (0x00000000)
#define USART_CONST_WORD_LENGTH_8_BITS      (0x00001000)
#define USART_CONST_WORD_LENGTH_9_BITS      (0x10000000)

#define USART_CONST_DISABLED            (0U)
#define USART_CONST_ENABLED             (1U)

/*****************************PreProcessor-Macros*******************************/

/* USART1 Registers Configurations */
#define USART_CFG_USART1_ENABLE                     (STD_ON)
#define USART_CFG_USART1_CLOCK_FREQUECNY_HZ         (8000000U)
#define USART_CFG_USART1_TX_RX_BAUDRATE             (9600U)
#define USART_CFG_USART1_ENABLE_WAKEUP_STOPMODE     (USART_CONST_ENABLED)
#define USART_CFG_USART1_ENABLE_RECEIVER            (USART_CONST_ENABLED)
#define USART_CFG_USART1_ENABLE_TRANSMITTER         (USART_CONST_ENABLED)
#define USART_CFG_USART1_IDLE_INT_ENABLED           (USART_CONST_DISABLED)
#define USART_CFG_USART1_RXNE_INT_ENABLED           (USART_CONST_DISABLED)
#define USART_CFG_USART1_TX_COMPLETE_INT_ENABLED    (USART_CONST_DISABLED)
#define USART_CFG_USART1_TXE_INT_ENABLED            (USART_CONST_DISABLED)
#define USART_CFG_USART1_PE_INT_ENABLED             (USART_CONST_DISABLED)
#define USART_CFG_USART1_PARITY_SELECTED            (USART_CONST_ODD_PARITY)
#define USART_CFG_USART1_PARITY_CONTROL_ENABLED     (USART_CONST_ENABLED)
#define USART_CFG_USART1_RX_WAKEUP_METHOD_MUTEMODE  (USART_CONST_WAKEUP_METHOD_IDLE_LINE)
#define USART_CFG_USART1_WORD_LENGTH                (USART_CONST_WORD_LENGTH_8_BITS)
#define USART_CFG_USART1_MUTE_MODE_ENABLED          (USART_CONST_ENABLED)
#define USART_CFG_USART1_CHAR_MATCH_INT_ENABLED     (USART_CONST_DISABLED)
#define USART_CFG_USART1_BAUDRATE_OVERSAMPLING      (USART_CONST_BAUDRATE_OVERSAMPLING_8)
#define USART_CFG_USART1_RX_TIMEOUT_INT_ENABLED     (USART_CONST_DISABLED)
#define USART_CFG_USART1_END_OF_BLOCK_INT_ENABLED   (USART_CONST_DISABLED)
#define USART_CFG_USART1_DEDT_TIME                  (0b00000)
#define USART_CFG_USART1_DEAT_TIME                  (0b00000)


/*******************************Global-Variables********************************/

/*****************************Function-Prototypes*******************************/

/*****************************Function-Definitions******************************/
/* USART1 Baud Rate Equation */
#if (USART_CFG_USART1_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_16)
    #define USART_EXPR_USART1_CLOCK_DIV   (USART_CFG_USART1_CLOCK_FREQUECNY_HZ/USART_CFG_USART1_TX_RX_BAUDRATE)
#elif (USART_CFG_USART1_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_8)
    #define USART_EXPR_USART1_CLOCK_DIV   ((2*USART_CFG_USART1_CLOCK_FREQUECNY_HZ)/USART_CFG_USART1_TX_RX_BAUDRATE)
#else
    #error "Wrong Baud Rate Oversampling configuration"
#endif /* End of #if (USART_CFG_USART1_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_16) */

/* USART2 Baud Rate Equation */
#if (USART_CFG_USART2_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_16)
    #define USART_EXPR_USART2_CLOCK_DIV   (USART_CFG_USART2_CLOCK_FREQUECNY_HZ/USART_CFG_USART2_TX_RX_BAUDRATE)
#elif (USART_CFG_USART2_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_8)
    #define USART_EXPR_USART2_CLOCK_DIV   ((2*USART_CFG_USART2_CLOCK_FREQUECNY_HZ)/USART_CFG_USART2_TX_RX_BAUDRATE)
#else
    #error "Wrong Baud Rate Oversampling configuration"
#endif /* End of #if (USART_CFG_USART2_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_16) */

/* USART3 Baud Rate Equation */
#if (USART_CFG_USART3_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_16)
    #define USART_EXPR_USART3_CLOCK_DIV   (USART_CFG_USART3_CLOCK_FREQUECNY_HZ/USART_CFG_USART3_TX_RX_BAUDRATE)
#elif (USART_CFG_USART3_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_8)
    #define USART_EXPR_USART3_CLOCK_DIV   ((2*USART_CFG_USART3_CLOCK_FREQUECNY_HZ)/USART_CFG_USART3_TX_RX_BAUDRATE)
#else
    #error "Wrong Baud Rate Oversampling configuration"
#endif /* End of #if (USART_CFG_USART3_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_16) */

/* USART4 Baud Rate Equation */
#if (USART_CFG_USART4_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_16)
    #define USART_EXPR_USART4_CLOCK_DIV   (USART_CFG_USART4_CLOCK_FREQUECNY_HZ/USART_CFG_USART4_TX_RX_BAUDRATE)
#elif (USART_CFG_USART4_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_8)
    #define USART_EXPR_USART4_CLOCK_DIV   ((2*USART_CFG_USART4_CLOCK_FREQUECNY_HZ)/USART_CFG_USART4_TX_RX_BAUDRATE)
#else
    #error "Wrong Baud Rate Oversampling configuration"
#endif /* End of #if (USART_CFG_USART4_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_16) */

/* USART5 Baud Rate Equation */
#if (USART_CFG_USART5_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_16)
    #define USART_EXPR_USART5_CLOCK_DIV   (USART_CFG_USART5_CLOCK_FREQUECNY_HZ/USART_CFG_USART5_TX_RX_BAUDRATE)
#elif (USART_CFG_USART5_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_8)
    #define USART_EXPR_USART5_CLOCK_DIV   ((2*USART_CFG_USART5_CLOCK_FREQUECNY_HZ)/USART_CFG_USART5_TX_RX_BAUDRATE)
#else
    #error "Wrong Baud Rate Oversampling configuration"
#endif /* End of #if (USART_CFG_USART5_BAUDRATE_OVERSAMPLING == USART_CONST_BAUDRATE_OVERSAMPLING_16) */

/*******************************************************************************/

#endif /* End of #ifndef Header Guard */