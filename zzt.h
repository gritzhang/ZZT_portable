#ifndef __ZZT_H__
#define __ZZT_H__

#include "stm32f10x.h"
#include "flash.h"

/***************定义相关的IO******************/

/*充电状态检测引脚*/
#define Charge_Sta_IO_Clk   RCC_APB2Periph_GPIOB
#define Charge_Sta_IO_Part  GPIOB
#define Charge_Sta_IO_PG    GPIO_Pin_5
#define Charge_Sta_IO_STAT1 GPIO_Pin_6
#define Charge_Sta_IO_STAT2 GPIO_Pin_7






void Init_All(void);
void Display_UI(void);
void Key_Action(void);

void Charge_Sta_IO_Init(void );
                       
void Flash_Init( void );      
void Power_Check_Init(void);
void Sound_Wave_Out_Init(void);
void Touch_Panel_Init(void);
void LCD_Drever_Init(void);   

#endif
