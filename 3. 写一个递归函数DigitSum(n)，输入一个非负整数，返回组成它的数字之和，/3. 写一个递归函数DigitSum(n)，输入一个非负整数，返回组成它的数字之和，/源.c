//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
	printf("����%d\n", DigitSum(123));
	system("pause");
	return 0;
}