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
	unsigned char LEDnum = 0;//ʹ��LEDnum = 0�Ǳ�׼��д��
	//ֱ��д������0000 0000�ڱ�׼c���ǲ��Ϸ���
	
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