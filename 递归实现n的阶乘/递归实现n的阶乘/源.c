//µİ¹éÊµÏÖnµÄ½×³Ë
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Mul(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else
	{
		return num*Mul(num - 1);
	}

}
int main()
{
	printf("%d\n", Mul(3));
	return 0;
}