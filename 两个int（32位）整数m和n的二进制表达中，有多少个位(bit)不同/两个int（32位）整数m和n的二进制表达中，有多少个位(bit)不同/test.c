//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
//��������:
//1999 2299
//������� : 7
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	printf("������������:");
	scanf("%d %d", &m,&n);
	for (i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
			count++;
	}
	printf("����m��n�Ķ����Ʊ���У���%d��λ(bit)��ͬ",count);
	return 0;
}