//判断大小端存储
#define _CRT_SECURE_NO_WARNINGS 1
//用联合体写
union MyUnion
{
	int a;
	char ch;
};
int main()
{
	union MyUnion uu;
	uu.a = 0x11223344;
	printf("%x", uu.ch);
	return 0;
}
//正规写法
//int IsLittle()//大端返回1，小端返回0
//{
//	int a = 0x11223344;
//	char *p = &a;
//	if (*p == 0x44)//小端存储
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int ret = IsLittle();
//	if (ret == 0)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	return 0;
//}