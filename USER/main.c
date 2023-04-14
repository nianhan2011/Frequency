
#include "delay.h"
#include "common.h"
#include "led.h"
#include "usart.h"
#include <stdio.h>
#include "timer.h"
#include "os_system.h"

#include "sk_hmi.h"
#include "queue.h"
#include "vdf_710.h"

int main(void)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); // 设置NVIC中断分组2:2位抢占优先级，2位响应优先级
    delay_init();
    LED_Init();
    // uart_init(9600);
    sk_init();
    vdf_init();
    TIM3_Int_Init(100 - 1, 7200 - 1);
    // os_cpu_interrupt_register(cpu_critical_control);
    os_task_init();
    os_create_task(OS_TASK1, sk_proc, 50, OS_SLEEP);
    os_create_task(OS_TASK2, led_turn, 50, OS_SLEEP);
    os_create_task(OS_TASK3, vdf_receive_proc, 50, OS_SLEEP);
    os_create_task(OS_TASK4, vdf_send_proc, 100, OS_SLEEP);

    os_start();
    // while (1)
    // {
    //     //     sk_proc();
    //     delay_ms(500);

    //     vdf_receive_proc();
    //     delay_ms(500);
    //     vdf_send_proc();
    //     delay_ms(500);
    // }
}
