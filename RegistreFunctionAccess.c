/**
 * @file type.h    
 * @author youness elqadery (younesselqadery19qy@gmail.com)
 * @brief implement the functions to config our GPIO 
 * @version 0.0.1
 * @date 2024-05-07                     
 * 
 */
#include "RegistreFunctionAccess.h"

static void setBits(T_UINT_32 *reg, int startBit, int num_bits, T_UINT_32 value){
    T_UINT_32 mask=((1<<num_bits)-1)<<startBit;
    *reg=(*reg &~ mask) |((value>>startBit)& mask);
}
static T_UINT_32 getBits(T_UINT_32 reg, int startBit, int num_bits) {
    T_UINT_32 mask = ((1 << num_bits) - 1) << startBit;
    return (reg & mask) >> startBit;
}

static void Gpio_Se_Write(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin, T_GPIO_PIN_STATE value ){
    T_GPIO_DEVICE *gpio = GPIO_BASE(gpioNum);
    if(gpio->MODER==GPIO_MODE_OUTPUT){
        if(value==GPIO_PIN_SET){
            WRITE_REG_UINT32(&(gpio->BSRR),(1<<pin));
        }else{
            WRITE_REG_UINT32(&(gpio->BSRR),(1<<(pin+OFFSET_BR)));
        }
    }
}