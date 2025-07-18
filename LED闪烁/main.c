#include <REGX52.H>
#include <INTRINS.H>
void Delay500ms()	//@11.0592MHz
{
	unsigned char data i, j, k;

	_nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
	//P2 = 0x55;//0101 0101 
	while(1)
	{
		P2 = 0x55;
		Delay500ms();
		P2 = 0x00;
		Delay500ms();
	}
}
