#include <reg52.h>
#include <intrins.h>
/*
**********************************************************************
*                         本地宏定义
**********************************************************************
*/
#define DIG_PORT		P0		// 共阴极数码管段码经74HC573接P0端口

/*
**********************************************************************
*                         本地全局变量
**********************************************************************
*/
sbit gA = P2^2;					// 38译码器输入口A
sbit gB = P2^3;					// 38译码器输入口B
sbit gC = P2^4;					// 38译码器输入口C

/* 共阴数码管显示0-F的段码编码值，这些编码值可以向数码管供应商索取，也
   可以自己通过实验确定，实际工作中实验确定往往更方便也更准确	*/
unsigned char code gDuanMa[16]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
					0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
/*
**********************************************************************
*                         函数原型声明
**********************************************************************
*/
void Delay(void);
void DigDisplay0(void);
void DigDisplay1(void);
void DigDisplay2(void);
void DigDisplay3(void);
void DigDisplay4(void);
void DigDisplay5(void);
void DigDisplay6(void);
void DigDisplay7(void);

void delay800ms(void);
/*********************************************************************
* 函 数 名       : main
* 函数功能		 : 主函数
* 参数列表       : 无
* 函数输出    	 : 无
*********************************************************************/
void main(void)
{
	while (1)
	{
		DigDisplay0();
		delay800ms();
		DigDisplay1();
		delay800ms();
		DigDisplay2();
		delay800ms();
		DigDisplay3();
		delay800ms();
		DigDisplay4();
		delay800ms();
		DigDisplay5();
		delay800ms();
		DigDisplay6();
		delay800ms();
		DigDisplay7();
		delay800ms();
	}		
}

/*********************************************************************
* 函 数 名       : DigDisplay0
* 函数功能		 : 数码管依次显示0-F
*********************************************************************/
void DigDisplay0(void)
{
	unsigned char i = 0;

	// 首先确定位码，选中最左侧数码管，注意查38译码器的真值表
	gA = 0;
	gB = 0;
	gC = 0;
	// 依次显示0-F
	for (i=0; i<16; i++)
	{
		DIG_PORT = gDuanMa[i];
		//Delay();
		delay800ms();
	}
		
}
/*********************************************************************
* 函 数 名       : DigDisplay1
* 函数功能		 : 数码管依次显示0-F
*********************************************************************/
void DigDisplay1(void)
{
	unsigned char i = 0;

	// 首先确定位码，选中最左侧数码管，注意查38译码器的真值表
	gA = 1;
	gB = 0;
	gC = 0;
	// 依次显示0-F
	for (i=0; i<16; i++)
	{
		DIG_PORT = gDuanMa[i];
		//Delay();
		delay800ms();
	}
		
}
/*********************************************************************
* 函 数 名       : DigDisplay0
* 函数功能		 : 数码管依次显示0-F
* 参数列表       : 无
* 函数输出    	 : 无
*********************************************************************/
void DigDisplay2(void)
{
	unsigned char i = 0;

	// 首先确定位码，选中最左侧数码管，注意查38译码器的真值表
	gA = 0;
	gB = 1;
	gC = 0;
	// 依次显示0-F
	for (i=0; i<16; i++)
	{
		DIG_PORT = gDuanMa[i];
		//Delay();
		delay800ms();
	}
		
}
/*********************************************************************
* 函 数 名       : DigDisplay0
* 函数功能		 : 数码管依次显示0-F
* 参数列表       : 无
* 函数输出    	 : 无
*********************************************************************/
void DigDisplay3(void)
{
	unsigned char i = 0;

	// 首先确定位码，选中最左侧数码管，注意查38译码器的真值表
	gA = 1;
	gB = 1;
	gC = 0;
	// 依次显示0-F
	for (i=0; i<16; i++)
	{
		DIG_PORT = gDuanMa[i];
		//Delay();
		delay800ms();
	}
		
}
/*********************************************************************
* 函 数 名       : DigDisplay0
* 函数功能		 : 数码管依次显示0-F
* 参数列表       : 无
* 函数输出    	 : 无
*********************************************************************/
void DigDisplay4(void)
{
	unsigned char i = 0;

	// 首先确定位码，选中最左侧数码管，注意查38译码器的真值表
	gA = 0;
	gB = 0;
	gC = 1;
	// 依次显示0-F
	for (i=0; i<16; i++)
	{
		DIG_PORT = gDuanMa[i];
		//Delay();
		delay800ms();
	}
		
}
/*********************************************************************
* 函 数 名       : DigDisplay0
* 函数功能		 : 数码管依次显示0-F
* 参数列表       : 无
* 函数输出    	 : 无
*********************************************************************/
void DigDisplay5(void)
{
	unsigned char i = 0;

	// 首先确定位码，选中最左侧数码管，注意查38译码器的真值表
	gA = 1;
	gB = 0;
	gC = 1;
	// 依次显示0-F
	for (i=0; i<16; i++)
	{
		DIG_PORT = gDuanMa[i];
		//Delay();
		delay800ms();
	}
		
}
/*********************************************************************
* 函 数 名       : DigDisplay0
* 函数功能		 : 数码管依次显示0-F
* 参数列表       : 无
* 函数输出    	 : 无
*********************************************************************/
void DigDisplay6(void)
{
	unsigned char i = 0;

	// 首先确定位码，选中最左侧数码管，注意查38译码器的真值表
	gA = 0;
	gB = 1;
	gC = 1;
	// 依次显示0-F
	for (i=0; i<16; i++)
	{
		DIG_PORT = gDuanMa[i];
		//Delay();
		delay800ms();
	}
		
}
/*********************************************************************
* 函 数 名       : DigDisplay0
* 函数功能		 : 数码管依次显示0-F
* 参数列表       : 无
* 函数输出    	 : 无
*********************************************************************/
void DigDisplay7(void)
{
	unsigned char i = 0;

	// 首先确定位码，选中最左侧数码管，注意查38译码器的真值表
	gA = 1;
	gB = 1;
	gC = 1;
	// 依次显示0-F
	for (i=0; i<16; i++)
	{
		DIG_PORT = gDuanMa[i];
		//Delay();
		delay800ms();
	}
		
}

/*********************************************************************
* 函 数 名       : Delay
* 函数功能		 : 延时一段时间
* 参数列表       : 无
* 函数输出    	 : 无
*********************************************************************/
void Delay(void)
{
	unsigned char i = 0, j = 0, k = 0;
	
	for (i=0; i<50; i++)
		for (j=0; j<50; j++)
			for (k=0; k<100; k++);	
}

/*********************************************************************
* 函 数 名       : delay800ms
* 函数功能		 : 用单片机小精灵V1.0自动生成的精确延时800ms的延时函数
* 参数列表       : 无
* 函数输出    	 : 无
*********************************************************************/
void delay800ms(void)   //误差 0us
{
    unsigned char a,b,c;
    for(c=95;c>0;c--)
        for(b=138;b>0;b--)
            for(a=29;a>0;a--);
    _nop_();  //if Keil,require use intrins.h
    _nop_();  //if Keil,require use intrins.h
}
//void delay800ms(void)   //误差 0us
//{
//    unsigned char a,b,c;
//    for(c=19;c>0;c--)
//        for(b=20;b>0;b--)
//            for(a=130;a>0;a--);
//}