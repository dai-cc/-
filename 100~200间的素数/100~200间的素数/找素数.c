#include<stdio.h>
int main()
{
	int m = 0, i = 0;
	for (m = 100; m <= 200; m++)
	{
		for (i = 2; i <= m - 1; i++)
		{
			if (m%i == 0)
			{
				break;
			}
			else
				printf("%d\t", m);
		}
	}
	return 0;
}