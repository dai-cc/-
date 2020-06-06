#include<stdio.h>
void main()
{
	int i;
	printf("the leap years from 1000~2000 are as follows:\n");
	for (i = 1000; i <= 2000; i++)
	{
		if (i%4==0 && i%100!=0)
			printf("%d\t", i);
		if (i % 1000 == 0 && i % 400 == 0)
			printf("%d\t",i);
	}
}
