#include<stdio.h>
int sum()
{
	static int a=5;
	static int b=8;
	printf("a=%d b=%d\n",a,b);
	++a;
	++b;
}
int main()
{
	sum();
	sum();
	sum();
	sum();
}

