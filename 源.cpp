#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<assert.h>
//int main()
//{
//	const int num = 10;
//	int n = 100;
//    int * const p = &num;
//	*p = 20;
//	//error const 放在指针变量中变量的*左边时,修饰的是*p,:不能通过p来改变*p（num)的地址
//	//const 放在指针变量中变量的*左边时,修饰的是指针变量p本身，p不能被改变
//	printf("%d\n", num);
//	return 0;
//}
// 好格式的自定义实现strlen函数：
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str!=NULL);//保证之后真的有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//******数据的存储******
//int main()
//{
//	int a = 10;// 4
//	float f = 10.0;// 4
//  short = 10;
//  short int a =10;
//	return 0;
//}
//int main()
//{
//	int i, j, k;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("-");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	00000000000000000000000000010100 - 原码
//	00000000000000000000000000010100 - 反码
//	00000000000000000000000000010100 - 补码
//	int b = -10;
//	10000000000000000000000000001010 - 原码
//	11111111111111111111111111110101 - 反码
//	1111 1111 1111 1111 1111 1111 1111 0110 - 补码
//	0xFFFFFFFF6
//	return 0;
//}
//int main()
//{
//	int a = 20;
//
//	return 0;
//}
//设计程序判断当前机器的字节序
//            ( 1 )
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}
//            ( 2 )
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//	//char* p = (char*)&a;
//	//返回1，大端
//	//返回0，小端
//	//return *p;
//}
//int main()
//{
//	//返回 1 ，小端
//	//返回 0 ，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	//000000000000000000000011111111
//	printf("a = %d,b = %d,c = %d", a, b, c);
//	return 0;
//}
int main()
{
	char a = -128;
	//100000000
	//111111111111111111111100000000 - 补码
	//
	printf("%u\n", a);
	return 0;
}

