/**
 * @file type.h    
 * @author youness elqadery (younesselqadery19qy@gmail.com)
 * @brief define somme type of variables
 * @version 0.0.1
 * @date 2024-05-06                     
 * 
 */

#pragma once
#include "type.h"

/*! Struct GPIO (General Purpuse Input Output) */ 
typedef struct
{
  volatile T_UINT_32  MODER;    /*!< GPIO Mode register,                 Address offset: 0x00 */
  volatile T_UINT_32  OTYPER;    /*!< GPIO output type register,         Address offset: 0x04 */
  volatile T_UINT_32  OSPEEDR;    /*!< GPIO output speed register,        Address offset: 0x08 */
  volatile T_UINT_32  PUPDR;    /*!< GPIO pull-up/pull-down register,    Address offset: 0x0C */
  volatile T_UINT_32  IDR;        /*!< GPIO input data register,            Address offset: 0x10 */
  volatile T_UINT_32  ODR;        /*!< GPIO output data register,            Address offset: 0x14 */
  volatile T_UINT_32  BSRR;        /*!< GPIO bit set/reset register,        Address offset: 0x18 */
  volatile T_UINT_32  LCKR;        /*!< GPIO locking register,                Address offset: 0x1C */
  volatile T_UINT_32  AFR[2];    /*!< GPIO alternate function register,    Address offset: 0x20-0x24 */
} T_GPIO_DEVICE;

/**
 * @brief GPIOA_BASE                                        
 * Define base addresse of the GPIO port A of STM32F407
 */
#define GPIOA_BASE            (0x40020000U)
#define GPIOB_BASE            (0x40020400U)
#define GPIOC_BASE            (0x40020800U)
#define GPIOD_BASE            (0x40020C00U)
#define GPIOE_BASE            (0x40021000U)
#define GPIOF_BASE            (0x40021400U)
#define GPIOG_BASE            (0x40021800U)
#define GPIOH_BASE            (0x40021C00U)
#define GPIOI_BASE            (0x40022000U)

#define GPIOA               ((T_GPIO_DEVICE *) GPIOA_BASE)
#define GPIOB               ((T_GPIO_DEVICE *) GPIOB_BASE)
#define GPIOC               ((T_GPIO_DEVICE *) GPIOC_BASE)
#define GPIOD               ((T_GPIO_DEVICE *) GPIOD_BASE)
#define GPIOE               ((T_GPIO_DEVICE *) GPIOE_BASE)
#define GPIOF               ((T_GPIO_DEVICE *) GPIOF_BASE)
#define GPIOG               ((T_GPIO_DEVICE *) GPIOG_BASE)
#define GPIOH               ((T_GPIO_DEVICE *) GPIOH_BASE)
#define GPIOI               ((T_GPIO_DEVICE *) GPIOI_BASE)

/**
 * @brief GPIO_BASE(port)
 * Define the GPIO_BASE of a given GPIO port (casted to T_GPIO_DEVICE)
*/ 
#define GPIO_BASE(port) ((T_GPIO_DEVICE *)(GPIOA_BASE + (port * 0x0400U)))

/**
 * @brief OFFSET_BR
 * Define the offset value to reset a given pin using BSRR register
*/
#define OFFSET_BR ((T_UINT_32)(16))

/**
 * @brief GPIO_SET_LCKK_BIT
 * Define the lock key bit
*/
#define GPIO_LCKK_BIT ((T_UINT_32)(16))
