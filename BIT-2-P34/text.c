#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////�ع�
//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";	//p2ָ��a�ĵ�ַ
//	
//	//ָ������
//	int* arr[10];
//	char* ch[5];
//	
//	//����ָ��  //ָ�������ָ��
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//ȡ������ĵ�ַ		//������---������Ԫ�ص�ַ
//
//	//int *p3;  //����ָ�� - ָ�����͵�ָ��
//	//char* p4  //�ַ�ָ�� - ָ���ַ��ĵ�ָ��
//
//	int*(* parr3[5])[10]=&arr;
//	return 0;
//}

/************************************���������ָ�����************************************/
////һά���鴫��
//void test(int arr[])//ok? ok
//{}
//void test(int arr[10])//ok? ok
//{}
//void test(int* arr)//ok?  ok
//{}
//void test2(int* arr[20])//ok?  ok
//{}
//void test2(int** arr)//ok?  ok
//{}
//int main()
//{
//	int arr[10] = { 0 };	
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

////��ά���鴫��
//void test(int arr[3][5])//ok��ok
//{}
////void test(int arr[][])//ok��err
////{}
//void test(int arr[][5])//ok��ok
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//ok��err
//{}
//void test(int* arr[5])//ok��err
//{}
//void test(int(*arr)[5])//ok��ok
//{}
//void test(int** arr)//ok��err
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

////4.3 һ��ָ�봫��
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}

////4.4 ����ָ�봫��
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
////�������Ĳ���Ϊ����ָ���ʱ��
//void test(char** p)
//{ }
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//Ok?
//	return 0;
//}

////5. ����ָ��
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);	//00007FF720BB1159
//	printf("%p\n", &test);	//00007FF720BB1159
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;	//p - ����ָ�� - void(* )(char*) -- ����ָ������  -- p --Ϊ����
//	(*p)("asddfad");	//asddfad
//	return 0;
//}

/*
void test()
{
printf("hehe\n");
}
//����pfun1��pfun2�ĸ����������test�����ĵ�ַ��
void (*pfun1)();	ok
void *pfun2();		err
*/

