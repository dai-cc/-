#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 1;
	int ret = 1;
	int sum = 0;
	scanf("%d", &n);
	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= j; i++)
		{
			ret = ret*i;
		}
		sum += ret;
		ret = 1;
	}
	printf("%d", sum);
	return 0;
}
