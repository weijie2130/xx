////test1�ܽ���ʲô����
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
//	//����ָ��
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
	 //һά����
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//16����������Ĵ�С
	printf("%d\n", sizeof(a + 0));//4��1�ĵ�ַ
	printf("%d\n", sizeof(*a));//4����Ԫ�ؽ�����Ϊ1
	printf("%d\n", sizeof(a + 1));//4��2�ĵ�ַ
	printf("%d\n", sizeof(a[1]));//4��
	printf("%d\n", sizeof(&a));//4�������ַ
	printf("%d\n", sizeof(*&a));//16��a
	printf("%d\n", sizeof(&a + 1));//4�����ǵ�ַ
	printf("%d\n", sizeof(&a[0]));//4����һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a[0] + 1));//4���ڶ���Ԫ�صĵ�ַ
	//�ַ�����
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6����������Ĵ�С 
	printf("%d\n", sizeof(arr + 0));//4����Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*arr));//1����Ԫ��
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4�����������ַ
	printf("%d\n", sizeof(&arr + 1));//4��������������
	printf("%d\n", sizeof(&arr[0] + 1));//4���ڶ���Ԫ�صĵ�ַ

	printf("%d\n", strlen(arr));//���ֵ����֪��\0����
	printf("%d\n", strlen(arr + 0));//���ֵ
	printf("%d\n", strlen(*arr));//Ӧ�ø�һ����ַ����Ӧ�ø�һ��ֵ��error
	printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ������һ����6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ
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
	printf("%d\n", strlen(&arr + 1));//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//5

	char *p = "abcdef";
	printf("%d\n", sizeof(p));//4��ָ������Ĵ�С
	printf("%d\n", sizeof(p + 1));//4��b�ĵ�ַ
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1  ��p[0]==*(p+0)==*p
	printf("%d\n", sizeof(&p));//4
	printf("%d\n", sizeof(&p + 1));//4
	printf("%d\n", sizeof(&p[0] + 1));//4;b�ĵ�ַ

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p + 1));//���ֵ������һ��ֵû�б�Ȼ����ϵ
	printf("%d\n", strlen(&p[0] + 1));//5
	//��ά����
	//��Ԫ�صĵ�ַ�ǵ�һ��
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//12*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16����һ��
	printf("%d\n", sizeof(a[0] + 1));//4����һ�еڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*(a[0] + 1)));//4����һ�еڶ���Ԫ�أ�������int
	printf("%d\n", sizeof(a + 1));//4;�ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(a + 1)));//16��һ������Ĵ�С
	printf("%d\n", sizeof(&a[0] + 1));//16//�ڶ��еĵ�ַ��������int
	printf("%d\n", sizeof(*(&a[0] + 1)));//16;һ������Ĵ�С
	printf("%d\n", sizeof(*a));//16����һ������Ĵ�С
	printf("%d\n", sizeof(a[3]));//16��Խ�磬���ǲ���������㣬ͬa[0]
	return 0;
}

