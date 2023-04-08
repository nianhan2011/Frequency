#ifndef __BSP_USART3_H
#define __BSP_USART3_H

#include "stm32f10x.h"
#include "common.h"
#include <stdio.h>
#include <stdbool.h>

#if defined(__CC_ARM)
#pragma anon_unions
#endif

#define RCC_USART_GPIO_ClockCmd RCC_APB2PeriphClockCmd
#define RCC_USART3_GPIO_Periph  RCC_APB2Periph_GPIOA
#define PORT_USART3_TX          GPIOA
#define PIN_USART3_TX           GPIO_Pin_2
#define PORT_USART3_RX          GPIOA
#define PIN_USART3_RX           GPIO_Pin_3

#define RCC_USART3_ClockCmd     RCC_APB1PeriphClockCmd
#define RCC_USART3_Periph       RCC_APB1Periph_USART2

#define USART_3                 USART3

#define USART_BAUD_RATE         9600

#define USART_3_IRQn            USART3_IRQn
#define USART_3_IRQnHandler     USART2_IRQHandler

#define USART_3_PRINT(fmt, ...) USART_printf(USART_3, fmt, ##__VA_ARGS__)

extern USART_Fram usart3_fram;
void USART_3_Init(void);

#endif
