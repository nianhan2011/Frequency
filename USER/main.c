
#include "delay.h"
#include "common.h"
#include "led.h"
#include "usart.h"
#include <stdio.h>
#include "timer.h"
#include "os_system.h"
#include "sk_hmi.h"
#include "usart3.h"
#include "queue.h"
int main(void)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); // 设置NVIC中断分组2:2位抢占优先级，2位响应优先级
    delay_init();
    LED_Init();
    uart_init(9600);
    sk_init();
    TIM3_Int_Init(100 - 1, 7200 - 1);

    // uint8_t b = 2;
    // QUEUE_IN(msg, &b, 1);

    // uint8_t c = 3;
    // QUEUE_IN(msg, &c, 1);

    // uint8_t d = 4;
    // QUEUE_IN(msg, &d, 1);
    // u8 x = 0;
    // QUEUE_OUT(msg, &x);
    // os_cpu_interrupt_register(cpu_critical_control);
    os_task_init();
    os_create_task(OS_TASK1, sk_proc, 1, OS_SLEEP);
    // os_create_task(OS_TASK2, send_msg, 2, OS_SLEEP);
    os_start();
    // while (1)
    // {
    //     sk_proc();
    // }
}
