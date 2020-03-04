//µ›πÈ µœ÷strlen
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Strlen(char *string)
{
	if (*string=='\0')
	{
		return 0;
	}
	else
	{
		int len = Strlen(string+1) + 1;
		return len;
	}
}
int main()
{
	char arr[] = "abcde";
	printf("%d\n",Strlen(arr));
	return 0;
}