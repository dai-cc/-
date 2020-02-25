//将三个数按从大到小输出。 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	int a[3];
	int i;
	int m;

	for (i = 0; i <= 2; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 2; i++)
	{
		if (a[i] < a[i + 1])
		{
			m = a[i];
			a[i] = a[i + 1];
			a[i + 1] = m;
		}	
	}
	for (i = 0; i <=2; i++)
	{
		printf("%d", a[i]);
		printf("\t");
	}
}
