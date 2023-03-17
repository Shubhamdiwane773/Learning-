#include<stdio.h>
int main()
{
	int i = 300;
	float a = -200;
	char c = 300;
	char *p = "hello";// p is pointer it store address and *p is value at that address
	char arr[] = "world";// including NULL the size of whole array is 6 and arr[0] is 1 element size is 1 byte

	printf("sizeof(arr[0])=%ld  sizeof(arr)=%ld\n",sizeof(arr[0]),sizeof(arr));//1 6
	printf("sizeof(p)=%ld       sizeof(*p)=%ld\n",sizeof(p),sizeof(*p));//8 1
}
