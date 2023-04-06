#ifndef __TIMER_H
#define __TIMER_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK Mini STM32开发板
//通用定时器 驱动代码			   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2010/12/03
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 正点原子 2009-2019
//All rights reserved
////////////////////////////////////////////////////////////////////////////////// 	  
typedef struct                                             //串口数据帧的处理结构体
{
	__IO uint8_t Time_CNT;
	__IO uint8_t Finish_Flag;
} Time_Flag;
extern __IO Time_Flag ReceiveMSG_Flag;

void TIM3_Int_Init(u16 arr,u16 psc); 
 
#endif
