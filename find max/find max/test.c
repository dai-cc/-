//求10 个整数中最大值。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	int a[10];
	int i;
	int max;

	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &a[i]);
	}

	max = a[0];
	for (i = 0; i < 9; i++)
	{
		if (max < a[i + 1])
			max = a[i + 1];
	}
	printf("the maxinum is :%d\n",max);
}
