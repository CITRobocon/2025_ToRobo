#ifndef YMD01_H
#define YMD01_H

#include "mbed.h"

#ifndef CIT_PIN_DEFINE
#define CIT_PIN_DEFINE

// UART
#define USART_TX PA_0   // TIM2 CH1 / ADC
#define USART_RX PA_1   // TIM2 CH2 / ADC
#define USART_RTS PA_15 // TIM2 CH1
#define USART_CTS PB_0  // TIM1 CH2N / ADC

#define UART_TX PB_6  // TIM4 CH1 / CAN
#define UART_RX PA_10 // TIM1 CH1

// SPI
#define BORAD_SPI_CS PB_12   // CAN
#define BORAD_SPI_SCK PC_7   // TIM3 CH2
#define BORAD_SPI_MISO PB_14 // TIM1 CH2N
#define BORAD_SPI_MOSI PB_15 // TIM1 CH3N

// I2C
#define SCL PB_8 // TIM2 CH1 / CAN
#define SDA PB_9 // TIM2 CH2 / CAN

// CAN
#define CAN_RXD PA_11 // TIM1 CH4
#define CAN_TXD PA_12 // CAN

// Interface
#define LED1_INTERFACE PB_13   // TIM1 CH1N
#define LED2_INTERFACE PC_8    // TIM3 CH3
#define SWITCH1_INTERFACE PC_9 // Need PullUp
#define SWITCH2_INTERFACE PD_2 // Need PullUp

// Motor
#define MOTOR1_A PC_2
#define MOTOR1_B PC_3
#define MOTOR1_PWM PA_6 // TIM3 CH1

#define MOTOR2_A PC_10
#define MOTOR2_B PC_11
#define MOTOR2_PWM PA_8 // TIM1 CH1

#define MOTOR3_A PC_12
#define MOTOR3_B PA_4   // DAC
#define MOTOR3_PWM PA_9 // TIM1 CH2

#define MOTOR4_A PB_10  // TIM2 CH3
#define MOTOR4_B PB_1   // TIM1 CH3N
#define MOTOR4_PWM PB_7 // TIM4 CH2

// Servo
#define SERVO1 PA_7    // TIM1 CH1N
#define SERVO2 UART_RX // TIM1 CH3
#define SERVO3 UART_TX // TIM4 Ch1

// Encoder
#define ENCODER1_A PB_2 // TIM2 CH4
#define ENCODER1_B PB_4 // TIM3 CH1
#define ENCODER1_Z PB_5 // TIM3 CH2

#define ENCODER2_A PC_4
#define ENCODER2_B PC_5
#define ENCODER2_Z PC_6 // TIM3 CH1

/*
Free Pins
PA_5  TIM2 CH1 / LD2 (LED)
PB_13 TIM1 CH1N
PC_0
PC_1
PC_8  TIM3 CH3
PC_9  TIM3 CH4
PC_13 Blue PushButton
PD_2

注意
PC_14,PC_15,PH_0,PH_1はオシレーターに接続されている．
PA_13,PA_14はJTAGに接続されている

*/

#endif

#endif // YMD01_H