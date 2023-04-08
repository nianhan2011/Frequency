
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
#include "os_system.h"
#include "delay.h"

int main(void)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	//设置NVIC中断分组2:2位抢占优先级，2位响应优先级
    delay_init();
    LED_Init(); // LED闂佽法鍠愰弸濠氬箯瀹勯偊娼楅梺璺ㄥ枑閺嬪骞忛敓锟�
    uart_init(9600);
    sk_init();
    //    USART_4G_Init();
    TIM3_Int_Init(5000 - 1, 7200 - 1); // 10Khz闂佽法鍠嶉懠搴ｆ兜闁垮顏堕梺璺ㄥ枑閺嬪骞忛悜绛嬫殽闂佽法鍠撶划鎼佹晲韫囨柨顏堕梺璺ㄥ枑閺嬪骞忛悜鑺ユ櫢闁哄倶鍊栫€氬綊鏌ㄩ悢鍛婄伄闁瑰嚖鎷�5000濞戞搫鎷�500ms

//    os_cpu_interrupt_register(cpu_critical_control);
//    os_task_init();
//    os_create_task(OS_TASK1, ReceiveString, 1, OS_SLEEP);
//    os_create_task(OS_TASK2, send_msg, 2, OS_SLEEP);
//    os_start();
    while (1) {
        USART_3_PRINT("hahahhaha");
		
		
    }
}
