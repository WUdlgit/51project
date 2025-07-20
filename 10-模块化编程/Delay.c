//void Delay(unsigned char xms)	//毫秒
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

#include <INTRINS.H>   //_nop_头文件

void Delay(unsigned char xus)	//微秒
{
		while(xus--)
		{
					_nop_();
					_nop_();
					_nop_();
					_nop_();
		}
}

