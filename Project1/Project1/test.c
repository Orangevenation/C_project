#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
// {
//	int a[10] = { 0 };
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//		sum = sum + a[i];
//	}
//	
//	//for (i = 0; i < 10; i++)
//	//{
//	//	sum = sum + a[i];
//	//}
//	double ping = sum / 10;
//	printf("以上十个数的平均值为%f",ping);
//	return 0;
//
//}
////错误	C4996	'scanf': This function or variable may be unsafe.Consider using scanf_s instead.To disable deprecation, use _CRT_SECURE_NO_WARNINGS.See online help for details.Project1	E : \C_project\Project1\Project1\test.c	7

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	int max = a > b ? a : b;
//
//	
//	if ((max % min == 0))
//	{
//		printf("%d\n", max);
//	}
//	else 
//	{
//		while (1)
//		{
//			max++;
//			if ((max % b == 0) && (max % a == 0))
//			{
//				printf("%d\n", max);
//				break;
//			}
//		}
//	}
//	return 0;
//}



//void nixv(char* zuo, char* you)
//{
//	while (zuo < you)
//	{
//		char a = 0;
//		a = *zuo;
//		*zuo = *you;
//		*you = a;
//		zuo++;
//		you--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	nixv(arr, arr + len - 1);
//	char* a = &arr;
//	while (1)
//	{
//		char* b = a;
//		while ((*b != ' ')&&(*b != '\0'))
//		{
//			b++;
//		}
//		nixv(a, b-1);
//		if (*b == '\0')
//		{
//			break;
//		}
//		a = b + 1;
//	}
//	printf("%s", arr);
//
//	return 0;
//}



int main()
{
	int a = 0x11223344;
	char* pa = &a;
	if (*pa == 0x44)
	{
		printf("小端字节序");
	}
	else
		printf("大端字节序");


	return 0;
}