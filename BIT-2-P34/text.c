#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////回顾
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";	//p2指向a的地址
//	
//	//指针数组
//	int* arr[10];
//	char* ch[5];
//	
//	//数组指针  //指向数组的指针
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//取出数组的地址		//数组名---数组首元素地址
//
//	//int *p3;  //整形指针 - 指向整型的指针
//	//char* p4  //字符指针 - 指向字符的的指针
//
//	int*(* parr3[5])[10]=&arr;
//	return 0;
//}

/************************************数组参数、指针参数************************************/
////一维数组传参
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

////二维数组传参
//void test(int arr[3][5])//ok？ok
//{}
////void test(int arr[][])//ok？err
////{}
//void test(int arr[][5])//ok？ok
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//ok？err
//{}
//void test(int* arr[5])//ok？err
//{}
//void test(int(*arr)[5])//ok？ok
//{}
//void test(int** arr)//ok？err
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

////4.3 一级指针传参
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
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

////4.4 二级指针传参
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
////当函数的参数为二级指针的时候
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

////5. 函数指针
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
//	void(*p)(char*) = Print;	//p - 函数指针 - void(* )(char*) -- 函数指针类型  -- p --为变量
//	(*p)("asddfad");	//asddfad
//	return 0;
//}

/*
void test()
{
printf("hehe\n");
}
//下面pfun1和pfun2哪个有能力存放test函数的地址？
void (*pfun1)();	ok
void *pfun2();		err
*/

