//递归实现求第n个斐波那契数。(F0=0，F1=1，Fn=Fn-1+Fn-2（n>=2，n∈N*）)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fibonacci(int num)
{
	if (num<=2)
	{
		return 1;
	}
	else
	{
		return Fibonacci(num - 2) + Fibonacci(num - 1);
	}
}
int main()
{
	int ret = 0;
	ret = Fibonacci(3);
	printf("%d",ret);
	return 0;
}