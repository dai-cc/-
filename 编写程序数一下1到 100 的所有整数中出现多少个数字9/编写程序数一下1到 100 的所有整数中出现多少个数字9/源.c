//编写程序数一下1到 100 的所有整数中出现多少个数字9
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	int count = 0;
	for (int i = 1; i <90; i++)
	{
		if ((i - 9) % 9 == 0)
			count++;
	}
	count = count + 10;
	printf("count=%d\n",count);
}