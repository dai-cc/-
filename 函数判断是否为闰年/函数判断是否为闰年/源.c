//ʵ��һ�������ж�year�ǲ������ꡣ
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int IsLeap(i)
{
	if (((i % 4 == 0) || (i % 100 != 0)) && (i % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	int flag = 0;
	printf("��������Ҫ�жϵ���ݣ�");
	scanf("%d", &year);
	flag=IsLeap(year);
	if (flag == 1)
	{
		printf("%d������", year);
	}
	else
	{
		printf("%d��������",year);
	}
	return 0;
}
