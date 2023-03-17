#include<stdio.h>
int sum()
{
	int a=3;
	volatile int  b=3;
	printf("a=%d b=%d\n",a,b);
	++a;
	++b;
	printf("a=%d b=%d\n",a,b);
}
int main()
{
	sum();
	sum();
}
