//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int DigitSum(num)
{
	if (num < 10)
	{
		return num;
	}
	else
	{
		return (num%10)+DigitSum(num/10);
	}
}
int main()
{
	int ret = DigitSum(123);
	printf("和是%d\n", DigitSum(123));
	system("pause");
	return 0;
}