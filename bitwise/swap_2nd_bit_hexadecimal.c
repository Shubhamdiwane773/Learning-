#include<stdio.h>
int main()
{
	int a=0x12345678;
	a=((a>>20)&0x000000f0) | ((a<<20)&0x0f000000)|(a&0xf0ffff0f);
	printf("%x\n",a);
}
