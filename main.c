#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "lcd.h"
#include "usart.h"

#include "zzt.h"

#define debuger 1

 
/************************************************
 ALIENTEK 战舰STM32F103开发板实验13
 TFTLCD显示实验  
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/
 	
/*	
 int main(void)
 {	 
 	u8 x=0;
	u8 lcd_id[12];			//存放LCD ID字符串
	delay_init();	    	 //延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(115200);	 	//串口初始化为115200
 	LED_Init();			     //LED端口初始化
	LCD_Init();
	POINT_COLOR=RED;
	sprintf((char*)lcd_id,"LCD ID:%04X",lcddev.id);//将LCD ID打印到lcd_id数组。	
		
	while(1) 
	{		 
//		switch(x)
//		{
//			case 0:LCD_Clear(WHITE);break;
//			case 1:LCD_Clear(BLACK);break;
//		}
		POINT_COLOR=RED;	  
		LCD_ShowString(30,40,210,24,24,(u8 *)"WarShip STM32 ^_^"); 
		LCD_ShowString(30,70,200,16,16,(u8 *)"TFTLCD TEST");
		LCD_ShowString(30,90,200,16,16,(u8 *)"ATOM@ALIENTEK");
 		LCD_ShowString(30,110,200,16,16,(u8 *)lcd_id);		//显示LCD ID
		LCD_ShowString(30,130,200,12,12,(u8 *)"2014/5/4");	   
        u8 i = 0;
		for(;i<1;i++)
		{
			LCD_Show_HanZi(30+62*i,170,i,0);
		}
	    x++;
		if(x==12)x=0;
		LED0=!LED0;				   		 
		delay_ms(1000);	

	} 
}
 */



#if debuger
int main(void)
{	 
    /*需要的变量定义*/
    /*初始化函数*/
    Init_All(); 

	while(1) 
	{		 
        Display_UI();
        Key_Action();
	} 
}
#else 



#endif
