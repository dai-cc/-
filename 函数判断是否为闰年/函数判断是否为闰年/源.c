//实现一个函数判断year是不是润年。
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
	printf("请输入您要判断的年份：");
	scanf("%d", &year);
	flag=IsLeap(year);
	if (flag == 1)
	{
		printf("%d是闰年", year);
	}
	else
	{
		printf("%d不是闰年",year);
	}
	return 0;
}
