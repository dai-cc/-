//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int MyStrlen(char *str)
{
	int len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return len;
}

void ReverseStr(char *str, char *left, char *right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void ReverseSentence(char *str)
{
	int len = MyStrlen(str);
	char *cur = str;
	char *left = str;
	char *right = str + len - 1;
	ReverseStr(str, left, right);//tned.......

	while (*cur != '\0')
	{
		char* start = cur;
		while ((*cur != ' ')&& (*cur != '\0'))
		{
			cur++;
		}
		ReverseStr(str, start, cur-1);

	}

}
int main()
{
	char arr[] = { "student a am i" };
	ReverseSentence(arr);
	printf("%s\n", arr);
	return 0;
}

//void Reverse(char arr[], int len,int left,int right)
//{
//	int tem = 0;
//	for (; left<=right; left++, right--)
//	{
//		tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//	}
//}
//char* ReverseArr(char arr[],int len)
//{
//	int i = 0;
//	int left = 0;
//	int right = len - 2;
//	int tem = 0;
//	Reverse(arr, len, left, right);
//	for (; i < len ;i++)
//	{
//		if ((arr[i] == ' ') || (arr[i] == '\0'))
//		{
//			right = i - 1;
//			Reverse(arr, len, left, right);
//			left = i + 1;
//		}
//	}
//	return arr;
//}
//int main()
//{
//	char arr[] = { "student a am i" };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("%s\n",ReverseArr(arr,len));
//	return 0;
//}