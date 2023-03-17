#include<stdio.h>
int main()
{
	int a=0x12345678;
	a=((a>>12)&0x00000f00)|((a<<12)&0x00f00000)|(a&0xff0ff0ff);
	printf("%x\n",a);
}
