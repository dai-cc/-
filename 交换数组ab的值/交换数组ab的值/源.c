#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Output(int arr[],int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d\t", arr[i]);
	}
}
void main()
{
	int a[] = {1,2};
	int b[] = {3,4};
	int c[2];
	int i = 0;
	int len = sizeof(a) / sizeof(a[0]);
	Input(a,len);
	Input(b,len);
	for (i = 0; i <len; i++)
	{
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];  
	}
	Output(a,len);
	printf("\n");
	Output(b,len);
}


