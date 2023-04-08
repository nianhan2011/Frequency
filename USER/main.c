//////////////////////////////////////////////////////////////////////////////////
//  闂備浇娉曢崰鎰板几婵犳艾绠柨鐕傛嫹 闂備浇娉曢崰鎰板几婵犳艾绠柨鐕傛嫹 闂備浇娉曢崰鎰板几婵犳艾绠柨鐕傛嫹   : main.c
//  闂備浇娉曢崰鎰板几婵犳艾绠柨鐕傛嫹 闂備浇娉曢崰鎰板几婵犳艾绠柨鐕傛嫹 闂備浇娉曢崰鎰板几婵犳艾绠柨鐕傛嫹   : v2.0
//  闂備浇娉曢崰鎰板几婵犳艾绠柨鐕傛嫹    闂備浇娉曢崰鎰板几婵犳艾绠柨鐕傛嫹   : luxban
//  闂備浇娉曢崰鎰板几婵犳艾绠柣鎴ｅГ閺呮悂鏌￠崒妯衡偓鏍偓姘秺閺屻劑鎮㈤崨濠勪紕闂佸綊顥撻崗姗€寮幘璇叉闁靛牆妫楅锟�   : 2022-6-01
//  闂備浇娉曢崰鎰板几婵犳艾绠柣鎴ｅГ閺呮悂鏌￠崒妯衡偓鏍偓姘秺閹稿懘鎮滈懞銉︽闂佽法鍣﹂幏锟�   :
//  闂備浇娉曢崰鎰板几婵犳艾绠柣鎴ｅГ閺呮悂鏌￠崒妯衡偓鏍偓姘秺閺屻劑鎮㈤崨濠勪紕闂佸綊顥撻崗姗€寮幘璇叉闁靛牆妫楅锟�   :闂備浇娉曢崰鎰板几婵犳艾绠瀣昂娴犳盯姊虹捄銊ユ瀾闁哄顭烽獮蹇涙倻閼恒儲娅㈤梺鍝勫€堕崐鏍偓姘炬嫹(STM32F103缂備緡鍨伴…鐑藉极閹捐妫橀柕鍫濇椤忥拷)
//              闂備浇娉曢崰鎰暜閹绢喖绀岄柍鈺佸暙椤忓爼鎮归崶銊﹀唉闁轰焦鎹囧顒勫Χ閸℃浼�:
//              LED:PA8
//
//              TFT-LCD:
//              GND   闂備浇娉曢崰鎰板几婵犳艾绠梺鍨儑閻栭亶姊虹捄銊ユ瀾闁哄顭烽獮蹇涙晸閿燂拷
//              VCC   3.3v闂備浇娉曢崰鎰板几婵犳艾绠梺鍨儑閻栵拷
//              SCL   PB4闂備浇娉曢崰鎰板几婵犳艾绠紒瀣暛LK闂備浇娉曢崰鎰板几婵犳艾绠柨鐕傛嫹
//              SDA   PB5闂備浇娉曢崰鎰板几婵犳艾绠紒瀣嫽SI闂備浇娉曢崰鎰板几婵犳艾绠柨鐕傛嫹
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
#include "usart3.h"
#include "delay.h"

int main(void)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	//设置NVIC中断分组2:2位抢占优先级，2位响应优先级
    delay_init();
    LED_Init(); // LED闂佽法鍠愰弸濠氬箯瀹勯偊娼楅梺璺ㄥ枑閺嬪骞忛敓锟�
    uart_init(9600);
    usart3_init();
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
