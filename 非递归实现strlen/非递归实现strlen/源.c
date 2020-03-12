//∑«µ›πÈ µœ÷
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Strlen(char *string)
{
	int len = 0;
	while (*string)
	{
		len++;
		string++;
	}
	return len;
}
int main()
{
	char arr[] = "abcde";
	printf("%d\n", Strlen(arr));
	return 0;
}