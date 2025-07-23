#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
#include "MatrixKey.h"

unsigned char KeyNum;
unsigned int Password;
unsigned char count;

void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"Password");
	while(1)
	{
		KeyNum = Matrixkey();
		if(KeyNum)
		{
			if(KeyNum < 10) //输入密码
			{
				if(count <= 3)//限制在4位以内
					{
						Password *= 10;      //密码左移一位
						Password += KeyNum;  //获取一位密码
						count++;
					}
					LCD_ShowNum(2,1,Password,4);//更新显示
			}
			
			if(KeyNum == 11)    //s11按键按下，确认
				{
					if(Password == 2345)   //如果密码等于正确密码
					{
						LCD_ShowString(1,13,"ok ");
						Password = 0;
						count = 0;      //计次清零
						LCD_ShowNum(2,1,Password,4);//更新显示
					}
					else
					{
						LCD_ShowString(1,13,"err");	
						Password = 0;
						count = 0;      //计次清零
					  LCD_ShowNum(2,1,Password,4);//更新显示
					}
				}
			if(KeyNum ==12)     //s12按键按下，表示取消（全部清零）
			{
				Password = 0;
				count = 0;      //计次清零
				LCD_ShowNum(2,1,Password,4);//更新显示
				LCD_ShowString(1,13,"   ");
			}
		}
	}
}