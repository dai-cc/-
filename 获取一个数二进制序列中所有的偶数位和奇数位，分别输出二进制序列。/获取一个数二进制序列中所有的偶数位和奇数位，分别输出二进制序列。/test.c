//获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Show(int arr[])
{
	for (int j = 15; j >= 0 ; j--)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
}
int main()
{
	int num = 0;
	int i = 0;
	int m = 0;
	int a[32] = { 0 };
	int arr1[16] = { 0 };
	int arr2[16] = { 0 };

	printf("请输入一个数:");
	scanf("%d", &num);

	for (m = 0; m < 32; m = m + 2)
	{
		arr1[i] = ((num >> m) & 1);
		i++;
	}

	for (i = 0, m = 1; m < 32; m = m + 2)
	{
		arr2[i] = ((num >> m) & 1);
		i++;
	}
	printf("该参数奇数位的二进制序列为：");
	Show(arr1);
	printf("该参数偶数位的二进制序列为：");
	Show(arr2);
	return 0;
}