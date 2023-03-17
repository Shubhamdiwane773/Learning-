#include<stdio.h>
int main()
{
	int a=0x12345678;
	a=((a>>28)&0x0000000f) | ((a<<28)&0xf0000000) |(a&0x0ffffff0);
	printf("%x\n",a);
}
