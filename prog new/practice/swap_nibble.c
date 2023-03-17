#include<stdio.h>
#define swap x=(x>>4) | (x<<4)
int main()
{
	int a=100;
	char x=(char*)&a;
	swap;
	printf("%d\n",a);
}
