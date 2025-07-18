#include <REGX52.H>

void Delay(unsigned int xms)	
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
	unsigned char LEDnum = 0;//使用LEDnum = 0是标准的写法
	//直接写二进制0000 0000在标准c中是不合法的
	
	while(1)
	{
		if(P3_1 == 0)
		{
			Delay(20);
			while(P3_1 == 0);
			Delay(20);
			
			LEDnum++;
			P2 = ~LEDnum;
		}
	}
}