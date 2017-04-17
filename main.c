#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "lcd.h"
#include "usart.h"

#include "zzt.h"

#define debuger 1

 
/************************************************
 ALIENTEK ս��STM32F103������ʵ��13
 TFTLCD��ʾʵ��  
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/
 	
/*	
 int main(void)
 {	 
 	u8 x=0;
	u8 lcd_id[12];			//���LCD ID�ַ���
	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 	//���ڳ�ʼ��Ϊ115200
 	LED_Init();			     //LED�˿ڳ�ʼ��
	LCD_Init();
	POINT_COLOR=RED;
	sprintf((char*)lcd_id,"LCD ID:%04X",lcddev.id);//��LCD ID��ӡ��lcd_id���顣	
		
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
 		LCD_ShowString(30,110,200,16,16,(u8 *)lcd_id);		//��ʾLCD ID
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
    /*��Ҫ�ı�������*/
    /*��ʼ������*/
    Init_All(); 

	while(1) 
	{		 
        Display_UI();
        Key_Action();
	} 
}
#else 



#endif
