//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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