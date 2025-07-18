#include <REGX52.H>

void Delay(unsigned int xms)	//延时函数
{
	unsigned char data i, j;
	while(xms)
	{
		i = 12;
		j = 169;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}

void main()
{
	while(1)
	{
		if(P3_1 == 0)
		{
			Delay(20);//消除按下按键的按键抖动
			while(P3_1 == 0);//直到松手为止代码一直停止在这
			Delay(20);//消除松手时的按键抖动
			
			P2_0 = ~P2_0;//每次按下按键都会与上一次时的信号相反
		}
	}
}