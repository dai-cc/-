//编写代码，演示多个字符从两端移动，向中间汇聚
#include<stdio.h>
int main()
{
	char ch1[] = "you are a beauty";
	char ch2[] = "################";
	int len = sizeof(ch1) / sizeof(ch1[0]);
	int i = 0;
	int left = 0;
	int right = len - 1;
	for (left = 0, right = (len - 1); left <= right; left++, right--)
	{
		ch2[left] = ch1[left];
		ch2[right] = ch1[right];
		printf("%s\n", ch2);
	}
	return 0;
}
//for(left = 0, right = (len - 2); left <= right; left++, right--)