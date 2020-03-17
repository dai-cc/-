//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Len(char *string)
{
	int len = 0;
	while (*string!='\0')
	{
		len++;
		string++;
	}
	return len;
}
void reverse_string(char * string)
{
	int len = Len(string);
	int right = len - 1;
	int tmp = 0;
	if (len > 0)
	{
		tmp = string[0];
		string[0] = string[len-1];
		string[len-1] = '\0';
		reverse_string(string + 1);
		string[len - 1] = tmp;
	}
}
int main()
{
	char arr[] = "abcd" ;
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}