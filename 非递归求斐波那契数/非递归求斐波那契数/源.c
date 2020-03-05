//非递归实现求第n个斐波那契数。(F0=0，F1=1，Fn=Fn-1+Fn-2（n>=2，n∈N*）)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = {1,1};
	int len = sizeof(arr) / sizeof (arr[0]);
	for (int i = 2; i < len; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	printf("第四个斐波那契数是%d",arr[3]);
	return 0;
}