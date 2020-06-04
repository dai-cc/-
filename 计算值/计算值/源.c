//¼ÆËã1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ¡­¡­ + 1 / 99 - 1 / 100 µÄÖµ¡£
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	double i = 1;
	double j = 1;
	double sum = 0;
	double div = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((int)i % 2 == 0)
		{
			j = -1;
		}
		else
		{
			j = 1;
		}
		div = j / i;
		sum = sum+div;
	}
	printf("%f\n", sum);
}
