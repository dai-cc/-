//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
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
	printf("��ʼ�����飺");
	init(a, len);
	Show(a, len);

	printf("���ú�����Ϊ��");
	reverse(a, len);
	Show(a, len);

	printf("��պ�����Ϊ��");
	empty(a, len);
	Show(a, len);

	return 0;
}