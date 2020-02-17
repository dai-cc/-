//不使用（a + b） / 2这种方式，求两个数的平均值。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int m, int n)//实现两数的相加
{
	int ret = m ^ n;//1，0或0，1相加还为1
	int flag = m & n;//flag为进位标志  1，1相加会有进位
	while (flag != 0)//若flag不为0,则说明有进位  flag左移一位将进的1和ret再进行位运算，循环值无进位为止
	{
		flag = flag << 1;
		ret = ret ^ flag;
		flag = ret & flag;
	}
	return ret;
}
int div(int a, int b)//实现两数的平均值计算
{
	int ret;
	int m = ((a^b)>>1);//0，1或1，0相加求平均值时直接右移一位（二进制中右移一位相当于除以2）
	int n = a&b;//1，1相加求平均值还是原位放1，不用移位
	ret=add(m, n);//所以m+n就是求a,b平均值
	return ret;
}
int main()
{
	int a = 100;
	int b = 20;
	printf("a,b平均值为%d\n",div(a, b));
	return 0;
}