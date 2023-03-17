#include<stdio.h>
int main()
{
	int a=5;
	volatile int b=5;
	printf("a=%d ++a=%d ++a=%d ++a=%d\n",a,++a,++a,++a);
	printf("b=%d ++b=%d ++b=%d ++b=%d\n",b,++b,++b,++b);
}
