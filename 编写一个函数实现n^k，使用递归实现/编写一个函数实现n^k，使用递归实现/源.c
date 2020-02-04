//编写一个函数实现n^k，使用递归实现
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double P(double n, double k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k>0)
	{
		return n*P(n, k - 1);
	}
	else if (k < 0)
	{
		return 1 / (n*P(n, (-k) - 1));
	}
}
int main()
{
	printf("%f\n", P(2,-2));
	return 0;
}