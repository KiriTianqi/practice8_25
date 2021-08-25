#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void exchange(int* pa, int* pb)
{
	int z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("before a=%d  b=%d\n",a,b);
	exchange(&a, &b);
	printf("after  a=%d  b=%d\n",a,b);
	return 0;//this is the right solution!
}
//void exchange(int x, int y)
//{
//	int z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//		int b = 20;
//		exchange(a, b);
//		printf("a=%d\nb=%d\n", a, b);//wrong code!! can not achieve the function 
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c=get_max(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a;
//	char arr[] = "hello world";
//	memset(arr,97, 5);
//	printf("%s\n", arr);
//	scanf("%d",&a);
//	printf("%d", a);
//	/*char arr[20];
//	system(shutdown -s -at 60);
//	strcpy(arr, "hello");
//	printf("%s", arr);
//	return 0;*/
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s",arr1);
//	return 0;
//}