/**
 * @file type.h    
 * @author youness elqadery (younesselqadery19qy@gmail.com)
 * @brief implement the functions to config our GPIO 
 * @version 0.0.1
 * @date 2024-05-07                     
 * 
 */
#include "GpioConfig.h"
#include "RegistreFunctionAccess.h"


static void Gpio_Se_Output_Pushpull_Config(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin, T_GPIO_PULL_MODE pull_mode,T_GPIO_SPEED speed_mode) {
    T_GPIO_DEVICE *gpio = GPIO_BASE(gpioNum);
    // Configure the pin mode as output
    setBits(&(gpio->MODER), pin * 2, 2, GPIO_MODE_OUTPUT);

    // Configure the pin output type as push-pull
    setBits(&(gpio->OTYPER), pin, 1, 0); // 0: Output push-pull, 1: Output open-drain

    // Configure the pin output speed 
    setBits(&(gpio->OSPEEDR), pin * 2, 2, speed_mode);

     // Configure the pin pull-up/pull-down
    setBits(&(gpio->PUPDR), pin * 2, 2, pull_mode); 
}

static void Gpio_Se_Output_OpenDrain_PullUp_Config(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin,T_GPIO_PULL_MODE pull_mode,T_GPIO_SPEED speed_mode) {
    
    T_GPIO_DEVICE *gpio = GPIO_BASE(gpioNum);
    // Configure the pin mode as output
    setBits(&(gpio->MODER), pin * 2, 2, GPIO_MODE_OUTPUT);
    
    // Configure the pin output type as open-drain
    setBits(&(gpio->OTYPER), pin, 1, 1); // 0: Output push-pull, 1: Output open-drain

    // Configure the pin output speed 
    setBits(&(gpio->OSPEEDR), pin * 2, 2, speed_mode);

     // Configure the pin pull-up/pull-down
    setBits(&(gpio->PUPDR), pin * 2, 2, pull_mode); 
    
}
static void Gpio_Se_Input_Config(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin,T_GPIO_PULL_MODE pull_mode,T_GPIO_SPEED speed_mode){
    T_GPIO_DEVICE *gpio = GPIO_BASE(gpioNum);
    // Configure the pin mode as input
    setBits(&(gpio->MODER), pin * 2, 2, GPIO_MODE_INPUT);
    // Configure the pin output speed 
    setBits(&(gpio->OSPEEDR), pin * 2, 2, speed_mode);

     // Configure the pin pull-up/pull-down
    setBits(&(gpio->PUPDR), pin * 2, 2, pull_mode); 
}
static void Gpio_Se_Analog_Config(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin,T_GPIO_SPEED speed_mode){
    T_GPIO_DEVICE *gpio = GPIO_BASE(gpioNum);
    // Configure the pin mode as input
    setBits(&(gpio->MODER), pin * 2, 2, GPIO_MODE_ANALOG);
    // Configure the pin output speed 
    setBits(&(gpio->OSPEEDR), pin * 2, 2, speed_mode);
    
}
static void Gpio_Se_Alternate_PushPull_Config(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin,T_GPIO_PULL_MODE pull_mode,T_GPIO_SPEED speed_mode) {
    T_GPIO_DEVICE *gpio = GPIO_BASE(gpioNum);
    // Configure the pin mode as output
    setBits(&(gpio->MODER), pin * 2, 2, GPIO_MODE_ALTERNATE);

    // Configure the pin output type as push-pull
    setBits(&(gpio->OTYPER), pin, 1, 0); // 0: Output push-pull, 1: Output open-drain

    // Configure the pin output speed 
    setBits(&(gpio->OSPEEDR), pin * 2, 2, speed_mode);

     // Configure the pin pull-up/pull-down
    setBits(&(gpio->PUPDR), pin * 2, 2, pull_mode); 
}
static void Gpio_Se_Alternate_OpenDrain_Config(const T_GPIO_PORT gpioNum, T_GPIO_PIN pin,T_GPIO_PULL_MODE pull_mode,T_GPIO_SPEED speed_mode) {
    T_GPIO_DEVICE *gpio = GPIO_BASE(gpioNum);
    // Configure the pin mode as output
    setBits(&(gpio->MODER), pin * 2, 2, GPIO_MODE_ALTERNATE);

    // Configure the pin output type as open drain
    setBits(&(gpio->OTYPER), pin, 1, 1); // 0: Output push-pull, 1: Output open-drain

    // Configure the pin output speed 
    setBits(&(gpio->OSPEEDR), pin * 2, 2, speed_mode);

     // Configure the pin pull-up/pull-down
    setBits(&(gpio->PUPDR), pin * 2, 2, pull_mode); 
}