//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Show(int i,int j,int ret)
{
	printf("%d*%d=%d\t", i, j, ret);
}
void Mul(int m)
{
	int i = 0;
	int j = 0;
	int ret = 1;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= m; j++)
		{
			int ret = i*j;
			Show(i, j, ret);
		}
		printf("\n");
	}
}
int main()
{
	int num = 0;
	printf("������Ҫ��ӡ�Ŀھ������������");
	scanf("%d", &num);
	Mul(num);
	return 0;
}