//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 
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