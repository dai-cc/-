#include<stdio.h>
void main()
{
	int m, i;
	int f;
	printf("the prime numbers between 100 and 200 are as follows:\n");
	for (m = 100; m <= 200; m++)
	{
		f = 1;
		for (i = 2; i <= m / 2; i++)
		{
			if (m%i == 0)
			{
				f = 0;
				break;
			}
		}
		if (f == 1){
			printf("%d\t", m);
		}
	}
	system("pause");
}

