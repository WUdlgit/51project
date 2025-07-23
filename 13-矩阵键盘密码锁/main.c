#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
#include "MatrixKey.h"

unsigned char KeyNum;
unsigned int Password;
unsigned char count;

void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"Password");
	while(1)
	{
		KeyNum = Matrixkey();
		if(KeyNum)
		{
			if(KeyNum < 10) //��������
			{
				if(count <= 3)//������4λ����
					{
						Password *= 10;      //��������һλ
						Password += KeyNum;  //��ȡһλ����
						count++;
					}
					LCD_ShowNum(2,1,Password,4);//������ʾ
			}
			
			if(KeyNum == 11)    //s11�������£�ȷ��
				{
					if(Password == 2345)   //������������ȷ����
					{
						LCD_ShowString(1,13,"ok ");
						Password = 0;
						count = 0;      //�ƴ�����
						LCD_ShowNum(2,1,Password,4);//������ʾ
					}
					else
					{
						LCD_ShowString(1,13,"err");	
						Password = 0;
						count = 0;      //�ƴ�����
					  LCD_ShowNum(2,1,Password,4);//������ʾ
					}
				}
			if(KeyNum ==12)     //s12�������£���ʾȡ����ȫ�����㣩
			{
				Password = 0;
				count = 0;      //�ƴ�����
				LCD_ShowNum(2,1,Password,4);//������ʾ
				LCD_ShowString(1,13,"   ");
			}
		}
	}
}