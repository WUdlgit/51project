#include <REGX52.H>

void Delay(unsigned int xms)	//��ʱ����
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
			Delay(20);//�������°����İ�������
			while(P3_1 == 0);//ֱ������Ϊֹ����һֱֹͣ����
			Delay(20);//��������ʱ�İ�������
			
			P2_0 = ~P2_0;//ÿ�ΰ��°�����������һ��ʱ���ź��෴
		}
	}
}