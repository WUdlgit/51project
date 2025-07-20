#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"

int result = 0;
void main()
{
	LCD_Init();//��ʼ��
	LCD_ShowChar(1,1,'A');//��ʾһ���ַ�
	Delay(200);
	LCD_ShowString(1,1,"HELLO");//��ʾ�ַ���
	Delay(200);
	LCD_ShowNum(1,7,123,5);//��ʾʮ��������
	//�����λ��ʼ��ʾ��������С�����ֵ�λ��������ֳ������λ��ʼ���㳤��
	//�����ȴ������ֵ�λ�������㣬���ȴ���λ�����٣��Ͳ����ٸ���
	LCD_ShowSignedNum(1,13,-38,2);//��ʾ�з��ŵ�ʮ������
	LCD_ShowHexNum(2,1,0xA8,2);//16����
	LCD_ShowBinNum(2,4,0xAA,8);//2����
	while(1)
	{
		result++;
		Delay(1000);
		LCD_ShowNum(1,1,result,5);
	}
}