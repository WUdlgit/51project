#include <REGX52.H>

void Delay1ms()	
{
	unsigned char data i, j;

	i = 12;
	j = 169;
	do
	{
		while (--j);
	} while (--i);
}

void fun(unsigned char location,number)
{
	unsigned char nixietable[] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
	switch(location)
	{
		case 1:P2_4 = 1; P2_3 = 1; P2_2 = 1;break;
		case 2:P2_4 = 1; P2_3 = 1; P2_2 = 0;break;
		case 3:P2_4 = 1; P2_3 = 0; P2_2 = 1;break;
		case 4:P2_4 = 1; P2_3 = 0; P2_2 = 0;break;
		case 5:P2_4 = 0; P2_3 = 1; P2_2 = 1;break;
		case 6:P2_4 = 0; P2_3 = 1; P2_2 = 0;break;
		case 7:P2_4 = 0; P2_3 = 0; P2_2 = 1;break;
		case 8:P2_4 = 0; P2_3 = 0; P2_2 = 0;break;
	}
	P0 = nixietable[number];
	//�������Ӱ
	Delay1ms();
	P0 = 0x00;
}

void main()
{
	while(1)
	{
		fun(1,1);
		fun(2,2);
		fun(3,3);
	}
}

