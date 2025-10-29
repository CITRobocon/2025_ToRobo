#ifndef MUCCHOEC03_H
#define MUCCHOEC03_H

#include "mbed.h"

#ifndef CIT_PIN_DEFINE
#define CIT_PIN_DEFINE

// UART
#define UART_TX PB_6
#define UART_RX PA_10

// USRAT
#define USART_TX PC_10
#define USART_RX PC_11
#define USART_RTS PA_15
#define USART_CTS PB_0

// SPI
#define BORAD_SPI_CS PB_12
#define BORAD_SPI_SCK PB_13
#define BORAD_SPI_MOSI PC_1
#define BORAD_SPI_MISO PC_2

// I2C
#define SDA PB_4 // I2C3
#define SCL PA_8 // I2C3

// CAN
#define CAN_RXD PA_11
#define CAN_TXD PA_12

// MOTORT
#define MOTOR1_A PB_7
#define MOTOR1_B PB_14  // TIM1 CH2N
#define MOTOR1_PWM PC_7 // TIM3 CH2

#define MOTOR2_A PB_2
#define MOTOR2_B PB_1
#define MOTOR2_PWM PC_9 // TIM3 CH4

#define MOTOR3_A PC_12
#define MOTOR3_B PD_2
#define MOTOR3_PWM PA_6 // TIM3 CH1

#define MOTOR4_A PC_5
#define MOTOR4_B PC_4
#define MOTOR4_PWM PA_9 // TIM1 CH2

// Interface
#define LED1_INTERFACE PB_15   // TIM1 CH3N
#define LED2_INTERFACE PA_4    // No PWM
#define SWITCH1_INTERFACE PC_0 // Need PullUp
#define SWITCH2_INTERFACE PC_3 // Need PullUp

// Servo
#define SERVO1 PB_9 // TIM2 CH2
#define SERVO2 PB_8 // TIM2 CH1
#define SERVO3 PA_7 // TIM1 CH1N

// Encoder
#define ENCODER1_A PC_6
#define ENCODER1_B PB_5
#define ENCODER1_Z PC_8

#define ENCODER2_A PA_0
#define ENCODER2_B PA_1
#define ENCODER2_Z PB_10

#endif // CIT_PIN_DEFINE

#endif // MUCCHOEC03_H