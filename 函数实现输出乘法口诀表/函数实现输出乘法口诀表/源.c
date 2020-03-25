//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
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
	printf("请输入要打印的口诀表的行列数：");
	scanf("%d", &num);
	Mul(num);
	return 0;
}