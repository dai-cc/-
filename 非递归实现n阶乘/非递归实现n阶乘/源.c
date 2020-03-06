//非递归实现n的阶乘
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Mul(int num)
{
	int ret = 1;
	for (int i = 1; i <= num; i++)
	{
		 ret=ret*i;
	}
	printf("%d\n", ret);
}
int main()
{
	Mul(3);
	return 0;
}
