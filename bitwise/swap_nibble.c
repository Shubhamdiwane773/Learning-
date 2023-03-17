#include<stdio.h>
#define swap x=(x<<4) | (x>>4);
int main()
{
	unsigned char x=100;
	swap;
	printf("after swap nibble x=%d\n",x);
}
