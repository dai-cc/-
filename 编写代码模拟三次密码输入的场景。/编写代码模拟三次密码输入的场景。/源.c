//��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
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
	printf("���������룺\n");
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
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("����������\n");
			scanf("%s", b);
		}
	}
	if (flag == 0)
		printf("��½ʧ��\n");

}