//////////////////////////////////////////////////////////////////////////////////
//  闂佽法鍠愰弸濠氬箯閿燂拷 闂佽法鍠愰弸濠氬箯閿燂拷 闂佽法鍠愰弸濠氬箯閿燂拷   : main.c
//  闂佽法鍠愰弸濠氬箯閿燂拷 闂佽法鍠愰弸濠氬箯閿燂拷 闂佽法鍠愰弸濠氬箯閿燂拷   : v2.0
//  闂佽法鍠愰弸濠氬箯閿燂拷    闂佽法鍠愰弸濠氬箯閿燂拷   : luxban
//  闂佽法鍠愰弸濠氬箯閻戣姤鏅搁柡鍌樺€栫€氬綊鏌ㄩ悢鍛婄伄闁归鍏橀弫鎾诲棘閵堝棗顏�   : 2022-6-01
//  闂佽法鍠愰弸濠氬箯閻戣姤鏅搁柡鍌樺€栫€氬綊鎸呴悜鑺ユ櫢闁跨噦鎷�   :
//  闂佽法鍠愰弸濠氬箯閻戣姤鏅搁柡鍌樺€栫€氬綊鏌ㄩ悢鍛婄伄闁归鍏橀弫鎾诲棘閵堝棗顏�   :闂佽法鍠愰弸濠氬箯妞嬪簺浠涢梺璺ㄥ枑閺嬪骞忛悜鑺ユ櫢闁哄倶鍊栫€氾拷(STM32F103缂侇垰顭烽弫鎾诲棘閵堝棗顏�)
//              闂佽法鍠愮敮鎾礌閳╁啫顏堕悹鍥ㄦ尦閺佹捇寮妶鍡楊伓:
//              LED:PA8
//
//              TFT-LCD:
//              GND   闂佽法鍠愰弸濠氬箯闁垮鐖遍梺璺ㄥ枑閺嬪骞忛敓锟�
//              VCC   3.3v闂佽法鍠愰弸濠氬箯闁垮鐖�
//              SCL   PB4闂佽法鍠愰弸濠氬箯缁嬬LK闂佽法鍠愰弸濠氬箯閿燂拷
//              SDA   PB5闂佽法鍠愰弸濠氬箯缁嬬拻SI闂佽法鍠愰弸濠氬箯閿燂拷
//              RES   PB6
//              DC    PB7
//              CS    PB8
//              BLK   PB9
//              ----------------------------------------------------------------
//******************************************************************************/
#include "delay.h"
#include "common.h"
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


int main(void)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	//设置NVIC中断分组2:2位抢占优先级，2位响应优先级
    delay_init();
    LED_Init(); // LED闂佽法鍠愰弸濠氬箯瀹勯偊娼楅梺璺ㄥ枑閺嬪骞忛敓锟�
    uart_init(9600);
    //    USART_4G_Init();
    TIM3_Int_Init(5000 - 1, 7200 - 1); // 10Khz闂佽法鍠嶉懠搴ｆ兜闁垮顏堕梺璺ㄥ枑閺嬪骞忛悜绛嬫殽闂佽法鍠撶划鎼佹晲韫囨柨顏堕梺璺ㄥ枑閺嬪骞忛悜鑺ユ櫢闁哄倶鍊栫€氬綊鏌ㄩ悢鍛婄伄闁瑰嚖鎷�5000濞戞搫鎷�500ms

//    os_cpu_interrupt_register(cpu_critical_control);
//    os_task_init();
//    os_create_task(OS_TASK1, ReceiveString, 1, OS_SLEEP);
//    os_create_task(OS_TASK2, send_msg, 2, OS_SLEEP);
//    os_start();
    while (1) {
    }
}
