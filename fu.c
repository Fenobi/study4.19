#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	printf("%p\n", p + 0x1);//����һ���ṹ�壬���ԣ�20
//	//printf("%p\n", (unsigned long)p + 0x1);//����ֱ�Ӽ�һ
//	//printf("%p\n", (unsigned int*)p + 0x1);//����ָ��+4
//	return 0;
//}

//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    //FFFF FFFC -4
//    return 0;
//}

#include <string.h>
#include <assert.h>

//int my_strcmp(const char* str1, const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > str2)
//	{
//		return 1;
//	}
//	if (*str1 < str2)
//	{
//		return -1;
//	}
//}

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

int main()
{
	int ret = strcmp("abc", "abc");
	printf("%d\n", ret);
	return 0;
}