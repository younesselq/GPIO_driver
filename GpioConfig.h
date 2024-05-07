/**
 * @file GpioConfig.h    
 * @author youness elqadery (younesselqadery19qy@gmail.com)
 * @brief Define the functions to config our GPIO pins
 * @version 0.0.1
 * @date 2024-05-07                     
 * 
 */

#pragma once

#include "GpioRessources.h"
#include "registresDefine.h"

/* This function is for set bits of a registre*/
static void setBits(T_UINT_32 *reg, int startBit, int num_bits, T_UINT_32 value);

/* This function is for get bits from a registre*/
static T_UINT_32 getBits(T_UINT_32 reg, int startBit, int num_bits);

/*This function is about write 1 or 0 into a pin of BSSR registre */

static void Gpio_Se_Write(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin, T_GPIO_PIN_STATE value );

/* This function is for config the Gpio pin as output push-pull mode*/
static void Gpio_Se_Output_Pushpull_Config(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin, T_GPIO_PULL_MODE pull_mode,T_GPIO_SPEED speed_mode);

/* This function is for config the Gpio pin as output open-drain mode*/
static void Gpio_Se_Output_OpenDrain_PullUp_Config(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin,T_GPIO_PULL_MODE pull_mode,T_GPIO_SPEED speed_mode);

/* This function is for config the Gpio pin as input mode*/
static void Gpio_Se_Input_Config(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin,T_GPIO_PULL_MODE pull_mode,T_GPIO_SPEED speed_mode);

/* This function is for config the Gpio pin analog mode*/
static void Gpio_Se_Analog_Config(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin,T_GPIO_SPEED speed_mode);

/* This function is for config the Gpio pin as alternate push-pull mode*/
static void Gpio_Se_Alternate_PushPull_Config(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin,T_GPIO_PULL_MODE pull_mode,T_GPIO_SPEED speed_mode);

/* This function is for config the Gpio pin as alternate open-drain mode*/
static void Gpio_Se_Alternate_OpenDrain_Config(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin,T_GPIO_PULL_MODE pull_mode,T_GPIO_SPEED speed_mode);