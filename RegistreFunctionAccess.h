/**
 * @file GpioConfig.h    
 * @author youness elqadery (younesselqadery19qy@gmail.com)
 * @brief Define the functions to access into register of our driver
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