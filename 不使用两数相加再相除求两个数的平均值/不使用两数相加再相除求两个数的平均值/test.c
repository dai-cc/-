//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int m, int n)//ʵ�����������
{
	int ret = m ^ n;//1��0��0��1��ӻ�Ϊ1
	int flag = m & n;//flagΪ��λ��־  1��1��ӻ��н�λ
	while (flag != 0)//��flag��Ϊ0,��˵���н�λ  flag����һλ������1��ret�ٽ���λ���㣬ѭ��ֵ�޽�λΪֹ
	{
		flag = flag << 1;
		ret = ret ^ flag;
		flag = ret & flag;
	}
	return ret;
}
int div(int a, int b)//ʵ��������ƽ��ֵ����
{
	int ret;
	int m = ((a^b)>>1);//0��1��1��0�����ƽ��ֵʱֱ������һλ��������������һλ�൱�ڳ���2��
	int n = a&b;//1��1�����ƽ��ֵ����ԭλ��1��������λ
	ret=add(m, n);//����m+n������a,bƽ��ֵ
	return ret;
}
int main()
{
	int a = 100;
	int b = 20;
	printf("a,bƽ��ֵΪ%d\n",div(a, b));
	return 0;
}