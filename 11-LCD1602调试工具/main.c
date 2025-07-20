#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"

int result = 0;
void main()
{
	LCD_Init();//初始化
	LCD_ShowChar(1,1,'A');//显示一个字符
	Delay(200);
	LCD_ShowString(1,1,"HELLO");//显示字符串
	Delay(200);
	LCD_ShowNum(1,7,123,5);//显示十进制数字
	//从最高位开始显示，若长度小于数字的位数，则表现出从最高位开始计算长度
	//若长度大于数字的位数，则补零，长度大于位数多少，就补多少个零
	LCD_ShowSignedNum(1,13,-38,2);//显示有符号的十进制数
	LCD_ShowHexNum(2,1,0xA8,2);//16进制
	LCD_ShowBinNum(2,4,0xAA,8);//2进制
	while(1)
	{
		result++;
		Delay(1000);
		LCD_ShowNum(1,1,result,5);
	}
}