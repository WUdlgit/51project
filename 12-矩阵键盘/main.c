#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
#include "MatrixKey.h"

unsigned char KeyNum;

void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"HELLO");
	while(1)
	{
		KeyNum = Matrixkey();
		if(KeyNum)
		{
			LCD_ShowNum(2,1,KeyNum,2);
		}
	}
}
