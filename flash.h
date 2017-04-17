#ifndef __FLASH_H__
#define __FLASH_H__

#include "stm32f10x.h"

/***************������ص�IO******************/

/*SPI flash ������*/
#define SPI_Flash_IO_Clk    RCC_APB2Periph_GPIOA
#define SPI_Flash_SPI_Clk    RCC_APB2Periph_SPI1
#define SPI_Flash_SPIx      SPI1
#define SPI_Flash_IO_Part   GPIOA
#define SPI_Flash_IO_NSS    GPIO_Pin_4
#define SPI_Flash_IO_SCK    GPIO_Pin_5
#define SPI_Flash_IO_MISO   GPIO_Pin_6
#define SPI_Flash_IO_MOSI   GPIO_Pin_7

void SPI_Flash_Init(void);			 //��ʼ��SPI��
void SPI_SetSpeed(u8 SpeedSet); //����SPI�ٶ�   
void SPI_Flash_Read_Cfg(void);
u8 SPI_ReadWriteByte(u8 TxData);//SPI���߶�дһ���ֽ�

#endif

