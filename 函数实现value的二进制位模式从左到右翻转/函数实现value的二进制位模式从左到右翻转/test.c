//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int j = 0;
	unsigned int ret = 0;
	for (i = 0,j=31; i < 32,j>=0; i++,j--)
	{
		ret += (((value >> i) & 1) * pow(2 , j));
	}
	return ret;
}
int main()
{
	unsigned int num = 25;
	printf("%u\n", reverse_bit(num));
	return 0;
}