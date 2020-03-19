//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
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