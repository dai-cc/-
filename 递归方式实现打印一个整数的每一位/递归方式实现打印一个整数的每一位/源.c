//递归方式实现打印一个整数的每一位 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Show(int num)
{
	if (num <= 9)
	{
		printf("%d ",num);
	}
	else
	{
		Show(num / 10);
		printf("%d ", num%10);
	}

}
int main()
{
	Show(1234);
	return 0;
}