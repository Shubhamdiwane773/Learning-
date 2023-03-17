#include<stdio.h>
int main()
{
	int a=0x12345678;
	a=((a>>24)&0x000000ff)|((a<<24)&0xff000000)|((a>>8)&0x0000ff00)|((a<<8)&0x00ff0000);
	printf("%x\n",a);
}
