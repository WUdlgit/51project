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

unsigned char LEDnum = 0;

void main()
{
	P2 = 0xFE;//1111 1110
	while(1)
	{
		if(P3_1 == 0)
		{
			Delay(20);
			while(P3_1 == 0);
			Delay(20);
			
			
			if(LEDnum >= 8)
			{
				LEDnum = 0;
			}
			else
			{
				LEDnum++;
			}
			
			P2 = ~(0x01 << LEDnum);
		}
		
		if(P3_0 == 0)
		{
			Delay(20);
			while(P3_1 == 0);
			Delay(20);
			
			
			if(LEDnum <= 0)
			{
				LEDnum = 7;
			}
			else
			{
				LEDnum--;
			}
			
			P2 = ~(0x01 << LEDnum);
		}
	}
}