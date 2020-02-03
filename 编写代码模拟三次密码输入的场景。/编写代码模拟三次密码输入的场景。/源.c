//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	char a[5] = { 0 };
	char b[5] = { 0 };
	int i = 0;
	int len = sizeof(a) / sizeof(a[0]);
	int flag = 1;
	int m;
	scanf("%s", a);
	printf("%s\n", a);
	printf("请输入密码：\n");
	scanf("%s", b);
	for (m = 0; m <= 2; m++)
	{
		for (i = 0; i <= len; i++)
		{
			if (a[i] == b[i])
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("请重新输入\n");
			scanf("%s", b);
		}
	}
	if (flag == 0)
		printf("登陆失败\n");

}