#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<assert.h>
//int main()
//{
//	const int num = 10;
//	int n = 100;
//    int * const p = &num;
//	*p = 20;
//	//error const ����ָ������б�����*���ʱ,���ε���*p,:����ͨ��p���ı�*p��num)�ĵ�ַ
//	//const ����ָ������б�����*���ʱ,���ε���ָ�����p����p���ܱ��ı�
//	printf("%d\n", num);
//	return 0;
//}
// �ø�ʽ���Զ���ʵ��strlen������
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str!=NULL);//��֤֮�������Ч��
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
//******���ݵĴ洢******
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
//	00000000000000000000000000010100 - ԭ��
//	00000000000000000000000000010100 - ����
//	00000000000000000000000000010100 - ����
//	int b = -10;
//	10000000000000000000000000001010 - ԭ��
//	11111111111111111111111111110101 - ����
//	1111 1111 1111 1111 1111 1111 1111 0110 - ����
//	0xFFFFFFFF6
//	return 0;
//}
//int main()
//{
//	int a = 20;
//
//	return 0;
//}
//��Ƴ����жϵ�ǰ�������ֽ���
//            ( 1 )
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}
//            ( 2 )
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//	//char* p = (char*)&a;
//	//����1�����
//	//����0��С��
//	//return *p;
//}
//int main()
//{
//	//���� 1 ��С��
//	//���� 0 �����
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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
	//111111111111111111111100000000 - ����
	//
	printf("%u\n", a);
	return 0;
}

