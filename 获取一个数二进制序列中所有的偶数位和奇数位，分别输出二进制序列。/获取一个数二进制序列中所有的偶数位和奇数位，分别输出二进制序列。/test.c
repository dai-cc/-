//��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
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

	printf("������һ����:");
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
	printf("�ò�������λ�Ķ���������Ϊ��");
	Show(arr1);
	printf("�ò���ż��λ�Ķ���������Ϊ��");
	Show(arr2);
	return 0;
}