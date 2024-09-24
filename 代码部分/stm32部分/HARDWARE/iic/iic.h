#ifndef _iic_H
#define _iic_H

#include "stm32f10x.h"

/*  IIC_SCL时钟端口、引脚定义 */
#define IIC_SCL_PORT 			GPIOF   
#define IIC_SCL_PIN 			(GPIO_Pin_12)
#define IIC_SCL_PORT_RCC		RCC_APB2Periph_GPIOF

/*  IIC_SDA时钟端口、引脚定义 */
#define IIC_SDA_PORT 			GPIOF  
#define IIC_SDA_PIN 			(GPIO_Pin_14)
#define IIC_SDA_PORT_RCC		RCC_APB2Periph_GPIOF

//IO操作函数	 
#define IIC_SCL    PFout(12) //SCL
#define IIC_SDA    PFout(14) //SDA	 
#define READ_SDA   PFin(14)  //输入SDA

//IIC所有操作函数
void IIC_Init(void);                //初始化IIC的IO口				 
void IIC_Start(void);				//发送IIC开始信号
void IIC_Stop(void);	  			//发送IIC停止信号
void IIC_Send_Byte(u8 txd);			//IIC发送一个字节
u8 IIC_Read_Byte(u8 ack);			//IIC读取一个字节
u8 IIC_Wait_Ack(void); 				//IIC等待ACK信号
void IIC_Ack(void);					//IIC发送ACK信号
void IIC_NAck(void);				//IIC不发送ACK信号


#endif
