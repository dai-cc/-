#include<stdio.h>
void main()
{
	int i,j;
	int f;
	printf("the multiplication table is as follows:\n");
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i,j,i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

