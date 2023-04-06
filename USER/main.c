//////////////////////////////////////////////////////////////////////////////////	 
//  锟斤拷 锟斤拷 锟斤拷   : main.c
//  锟斤拷 锟斤拷 锟斤拷   : v2.0
//  锟斤拷    锟斤拷   : luxban
//  锟斤拷锟斤拷锟斤拷锟斤拷   : 2022-6-01
//  锟斤拷锟斤拷薷锟�   : 
//  锟斤拷锟斤拷锟斤拷锟斤拷   :锟斤拷示锟斤拷锟斤拷(STM32F103系锟斤拷)
//              锟接匡拷说锟斤拷: 
//              LED:PA8
//   
//              TFT-LCD: 
//              GND   锟斤拷源锟斤拷
//              VCC   3.3v锟斤拷源
//              SCL   PB4锟斤拷SCLK锟斤拷
//              SDA   PB5锟斤拷MOSI锟斤拷
//              RES   PB6
//              DC    PB7
//              CS    PB8
//              BLK   PB9
//              ----------------------------------------------------------------
//******************************************************************************/
#include "delay.h"
#include "sys.h"
#include "led.h"
#include "lcd_init.h"
#include "lcd.h"
#include "pic.h"
#include "usart.h"
#include "bsp_dht11.h"
#include "stdio.h"
#include "timer.h"
#include "tcp_demo.h"
#include "w5500.h"
#include "W5500_conf.h"
#include "socket.h"
#include "utility.h"
#include "bsp_4G.h"
#include "os_system.h"

void send_msg() {
	
	if (TCP_Is_Connect)
	{
	   TCP_Send("48656C6C6F21");

	}


}


int main(void)
{
    NVIC_Configuration();
	delay_init();
	LED_Init();//LED锟斤拷始锟斤拷
	uart_init(9600);
//    USART_4G_Init();
	TIM3_Int_Init(5000-1,7200-1);//10Khz锟侥硷拷锟斤拷频锟绞ｏ拷锟斤拷锟斤拷锟斤拷5000为500ms  




   os_cpu_interrupt_register(cpu_critical_control);
   os_task_init();
   os_create_task(OS_TASK1, ReceiveString, 1, OS_SLEEP);
   os_create_task(OS_TASK2, send_msg, 2, OS_SLEEP);
   os_start();
	while (1) {
	
	}


}

