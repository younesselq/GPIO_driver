/**
 * @file type.h    
 * @author youness elqadery (younesselqadery19qy@gmail.com)
 * @brief define somme ressources for the gpio like modes pins... 
 * @version 0.0.1
 * @date 2024-05-07                     
 * 
 */

#pragma once
#include "type.h"

/**********************************************************
TYPES, RESOURCES, CONSTANTS, EXPORTED VARIABLES
***********************************************************/

/*! Enum for GPIO ports */ 
typedef enum {
    GPIO_PORT_A = (T_UINT_32)(0x0), /*!<GPIO port A (GPIOA) */
    GPIO_PORT_B = (T_UINT_32)(0x1), /*!<GPIO port B (GPIOB) */
    GPIO_PORT_C = (T_UINT_32)(0x2), /*!<GPIO port C (GPIOC) */
    GPIO_PORT_D = (T_UINT_32)(0x3), /*!<GPIO port D (GPIOD) */
    GPIO_PORT_E = (T_UINT_32)(0x4), /*!<GPIO port E (GPIOE) */
    GPIO_PORT_F = (T_UINT_32)(0x5), /*!<GPIO port F (GPIOF) */
    GPIO_PORT_G = (T_UINT_32)(0x6), /*!<GPIO port G (GPIOG) */
    GPIO_PORT_H = (T_UINT_32)(0x7),    /*!<GPIO port H (GPIOH) */
    GPIO_PORT_I = (T_UINT_32)(0x8),    /*!<GPIO port I (GPIOI) */
} T_GPIO_PORT;

/*! Enum for GPIO pins numbers */ 
typedef enum {
    GPIO_PIN_0 = (T_UINT_32)(0x0), /*!<GPIO pin number 0 */
    GPIO_PIN_1 = (T_UINT_32)(0x1), /*!<GPIO pin number 1 */
    GPIO_PIN_2 = (T_UINT_32)(0x2), /*!<GPIO pin number 2 */
    GPIO_PIN_3 = (T_UINT_32)(0x3), /*!<GPIO pin number 3 */
    GPIO_PIN_4 = (T_UINT_32)(0x4), /*!<GPIO pin number 4 */
    GPIO_PIN_5 = (T_UINT_32)(0x5), /*!<GPIO pin number 5 */
    GPIO_PIN_6 = (T_UINT_32)(0x6), /*!<GPIO pin number 6 */
    GPIO_PIN_7 = (T_UINT_32)(0x7), /*!<GPIO pin number 7 */
    GPIO_PIN_8 = (T_UINT_32)(0x8), /*!<GPIO pin number 8 */
    GPIO_PIN_9 = (T_UINT_32)(0x9), /*!<GPIO pin number 9 */
    GPIO_PIN_10 = (T_UINT_32)(0xA), /*!<GPIO pin number 10 */
    GPIO_PIN_11 = (T_UINT_32)(0xB), /*!<GPIO pin number 11 */
    GPIO_PIN_12 = (T_UINT_32)(0xC), /*!<GPIO pin number 12 */
    GPIO_PIN_13 = (T_UINT_32)(0xD), /*!<GPIO pin number 13 */
    GPIO_PIN_14 = (T_UINT_32)(0xE), /*!<GPIO pin number 14 */
    GPIO_PIN_15 = (T_UINT_32)(0xF), /*!<GPIO pin number 15 */
} T_GPIO_PIN;

/*! Enum for GPIO pin states */ 
typedef enum {
    GPIO_PIN_RESET = 0x0U, /*!<Value to reset the GPIO pin */
    GPIO_PIN_SET = 0x1U /*!<Value to set the GPIO pin */
} T_GPIO_PIN_STATE;

/*! Enum for GPIO pin modes */ 
typedef enum {
    GPIO_MODE_INPUT = 0x0U, /*< GPIO pin mode input*/
    GPIO_MODE_OUTPUT = 0x1U, /*!< GPIO pin mode output*/
    GPIO_MODE_ALTERNATE = 0x2U, /*!< GPIO pin mode alternate*/
    GPIO_MODE_ANALOG = 0x3U /*!< GPIO pin mode analog*/
} T_PIN_MODE;
/*! Enum for GPIO pin speed */ 
typedef enum {
    GPIO_SPEED_LOW = 0x0U, /*< GPIO pin mlow speed*/
    GPIO_SPEED_MEDIUM = 0x1U, /*!< GPIO pin medium speed*/
    GPIO_SPEED_HIGH = 0x2U, /*!< GPIO pin high speed*/
    GPIO_SPEED_VERY_HIGH  = 0x3U /*!< GPIO pin very high speed*/
} T_GPIO_SPEED;
/*! Enum for GPIO pin pull mode (pull up or pull down) */ 
typedef enum {
    GPIO_MODE_PULLUP = 0x1U, /*!<Value to reset the GPIO pin */
    GPIO_MODE_PULLDOWN = 0x2U /*!<Value to set the GPIO pin */
} T_GPIO_PULL_MODE;
/*! Enum for GPIO alternate functions */ 
typedef enum {
    GPIO_ALT_AF0 = 0x0U, /*!< GPIO alternate function 0 */
    GPIO_ALT_AF1 = 0x1U, /*!< GPIO alternate function 1 */
    GPIO_ALT_AF2 = 0x2U, /*!< GPIO alternate function 2 */
    GPIO_ALT_AF3 = 0x3U, /*!< GPIO alternate function 3 */
    GPIO_ALT_AF4 = 0x4U, /*!< GPIO alternate function 4 */
    GPIO_ALT_AF5 = 0x5U, /*!< GPIO alternate function 5 */
    GPIO_ALT_AF6 = 0x6U, /*!< GPIO alternate function 6 */
    GPIO_ALT_AF7 = 0x7U, /*!< GPIO alternate function 7 */
    GPIO_ALT_AF8 = 0x8U, /*!< GPIO alternate function 8 */
    GPIO_ALT_AF9 = 0x9U, /*!< GPIO alternate function 9 */
    GPIO_ALT_AF10 = 0xAU, /*!< GPIO alternate function 10 */
    GPIO_ALT_AF11 = 0xBU, /*!< GPIO alternate function 11 */
    GPIO_ALT_AF12 = 0xCU, /*!< GPIO alternate function 12 */
    GPIO_ALT_AF13 = 0xDU, /*!< GPIO alternate function 13 */
    GPIO_ALT_AF14 = 0xEU, /*!< GPIO alternate function 14 */
    GPIO_ALT_AF15 = 0xFU, /*!< GPIO alternate function 15 */
} T_PIN_AF;