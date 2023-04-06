//////////////////////////////////////////////////////////////////////////////////	 
//  �� �� ��   : main.c
//  �� �� ��   : v2.0
//  ��    ��   : luxban
//  ��������   : 2022-6-01
//  ����޸�   : 
//  ��������   :��ʾ����(STM32F103ϵ��)
//              �ӿ�˵��: 
//              LED:PA8
//   
//              TFT-LCD: 
//              GND   ��Դ��
//              VCC   3.3v��Դ
//              SCL   PB4��SCLK��
//              SDA   PB5��MOSI��
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
	LED_Init();//LED��ʼ��
	uart_init(9600);
//    USART_4G_Init();
	TIM3_Int_Init(5000-1,7200-1);//10Khz�ļ���Ƶ�ʣ�������5000Ϊ500ms  


//    os_cpu_interrupt_register(cpu_critical_control);
//    os_task_init();
//	os_create_task(OS_TASK1, ReceiveString, 1, OS_SLEEP);
//	os_create_task(OS_TASK2, send_msg, 2, OS_SLEEP);
//    os_start();
	while (1) {
	
	}


}

