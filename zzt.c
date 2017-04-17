#include "zzt.h"

void Charge_Sta_IO_Init(void )
{
    /*设置充电状态IO为输入状态*/  
    GPIO_InitTypeDef  GPIO_InitStructure;

    RCC_APB2PeriphClockCmd(Charge_Sta_IO_Clk, ENABLE);	 //使能端口时钟

    GPIO_InitStructure.GPIO_Pin = Charge_Sta_IO_PG | Charge_Sta_IO_STAT1 | Charge_Sta_IO_STAT2;				 // 端口配置
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD; 		 //
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
    GPIO_Init(Charge_Sta_IO_Part, &GPIO_InitStructure);					 //根据设定参数初始化GPIOB.5
}
                       
void Flash_Init( void )
{
    SPI_Flash_Init();
    SPI_Flash_Read_Cfg();
}
void Power_Check_Init(void)
{
    Adc_Init();
    Adc_Start();
    //Power_Value = F(ADC_Value)
}
void Sound_Wave_Out_Init(void)
{
    PWM_Init();
    
    PWM_Out_Config();
}
void Touch_Panel_Init(void)
{
    I2C_Init();
    I2C_TP_Init();
}
void LCD_Drever_Init(void)
{
    LCD_BL_Init();
    FSMC_Init();
    FSMC_LCD_Init();
    
}


void Init_All(void)
{
    Charge_Sta_IO_Init();
    
    Flash_Init();
    Power_Check_Init();
    Sound_Wave_Out_Init();
    Touch_Panel_Init();
    LCD_Drever_Init();    
}

void Display_UI(void)
{
    switch(Display_Sta)
    {
        case DISPLAY_NONE:  break;
        case DISPLAY_ALL:   Display_All();break;
        case DISPLAY_CHAGE: Display_Chage();break;
        case DISPLAY_TIME:  Display_Time();break;
        case DISPLAY_MODE:  Display_Mode();break;
        case DISPLAY_GRADE: Display_Grade();break;
        case DISPLAY_FREQ:  Display_Freq();break;
        case DISPLAY_WORK:  Display_Work();break;
        default:    break;
    }
    
}

void Key_Action(void)
{
    ADC_Power_Check();
    switch(Key_Value)
    {
        case KEY_NONE:  break;
        case START_STOP: Start_Stop();    break;
        case TIME_CHANGE: Time_Change();   break;
        case MODE_CHANGE: Mode_Change();  break;
        case GRADE_CHANGE: Grade_Change();  break;
        case FREQ_CHANGE: Freq_Change();  break;
        default:    break;
            
    }
    
    
}

