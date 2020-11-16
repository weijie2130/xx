////test1能接收什么参数
//void test1(int *p)
//int a = 10;
//int* ptr = &a;
//int arr[10];
//test1(&a);//ok
//test1(ptr);//ok
//test1(arr);//ok
#include<stdio.h>
//#include<assert.h>
//char*my_strcpy(char*dest, const char*src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src  != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//函数指针
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	char* (*pf)(char*, const char*) = &my_strcpy;
//	(*pf)(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));
	 //一维数组
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//16；整个数组的大小
	printf("%d\n", sizeof(a + 0));//4；1的地址
	printf("%d\n", sizeof(*a));//4；首元素解引用为1
	printf("%d\n", sizeof(a + 1));//4；2的地址
	printf("%d\n", sizeof(a[1]));//4；
	printf("%d\n", sizeof(&a));//4；数组地址
	printf("%d\n", sizeof(*&a));//16；a
	printf("%d\n", sizeof(&a + 1));//4；还是地址
	printf("%d\n", sizeof(&a[0]));//4；第一个元素的地址
	printf("%d\n", sizeof(&a[0] + 1));//4；第二个元素的地址
	//字符数组
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6；整个数组的大小 
	printf("%d\n", sizeof(arr + 0));//4；首元素的地址
	printf("%d\n", sizeof(*arr));//1；首元素
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4；整个数组地址
	printf("%d\n", sizeof(&arr + 1));//4；跳过整个数组
	printf("%d\n", sizeof(&arr[0] + 1));//4；第二个元素的地址

	printf("%d\n", strlen(arr));//随机值，不知道\0在哪
	printf("%d\n", strlen(arr + 0));//随机值
	printf("%d\n", strlen(*arr));//应该给一个地址，不应该给一个值，error
	printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值，和上一个差6
	printf("%d\n", strlen(&arr[0] + 1));//随机值
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4;
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4

	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//5

	char *p = "abcdef";
	printf("%d\n", sizeof(p));//4；指针变量的大小
	printf("%d\n", sizeof(p + 1));//4；b的地址
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1  ；p[0]==*(p+0)==*p
	printf("%d\n", sizeof(&p));//4
	printf("%d\n", sizeof(&p + 1));//4
	printf("%d\n", sizeof(&p[0] + 1));//4;b的地址

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1));//随机值，与上一个值没有必然的联系
	printf("%d\n", strlen(&p[0] + 1));//5
	//二维数组
	//首元素的地址是第一行
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//12*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16；第一行
	printf("%d\n", sizeof(a[0] + 1));//4；第一行第二个元素的地址
	printf("%d\n", sizeof(*(a[0] + 1)));//4；第一行第二个元素，类型是int
	printf("%d\n", sizeof(a + 1));//4;第二行的地址
	printf("%d\n", sizeof(*(a + 1)));//16；一个数组的大小
	printf("%d\n", sizeof(&a[0] + 1));//16//第二行的地址，类型是int
	printf("%d\n", sizeof(*(&a[0] + 1)));//16;一个数组的大小
	printf("%d\n", sizeof(*a));//16；第一行数组的大小
	printf("%d\n", sizeof(a[3]));//16；越界，但是不会参与运算，同a[0]
	return 0;
}

