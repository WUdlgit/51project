//void Delay(unsigned char xms)	//����
//{
//		unsigned char data i, j;
//		
//		while(xms--)
//		{
//				i = 12;
//				j = 169;
//				do
//				{
//					while (--j);
//				} while (--i);		
//		}
//}

#include <INTRINS.H>   //_nop_��ͷ�ļ�

void Delay(unsigned char xus)	//΢��
{
		while(xus--)
		{
					_nop_();
					_nop_();
					_nop_();
					_nop_();
		}
}

