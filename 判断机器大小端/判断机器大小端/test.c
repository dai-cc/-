//�жϴ�С�˴洢
#define _CRT_SECURE_NO_WARNINGS 1
//��������д
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
//����д��
//int IsLittle()//��˷���1��С�˷���0
//{
//	int a = 0x11223344;
//	char *p = &a;
//	if (*p == 0x44)//С�˴洢
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
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
//	}
//	return 0;
//}