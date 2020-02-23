//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void init(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = i;
	}
}
void empty(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}
void reverse(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	int tmp = 0;
	while (left < right)
	{
		tmp=arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void Show(int arr[], int len)
{
	for ( int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int a[3];
	int len = sizeof(a) / sizeof(a[0]);
	printf("初始化数组：");
	init(a, len);
	Show(a, len);

	printf("逆置后数组为：");
	reverse(a, len);
	Show(a, len);

	printf("清空后数组为：");
	empty(a, len);
	Show(a, len);

	return 0;
}