#include<stdio.h>
#define SIZE sizeof(int)*8
int main()
{
	int num,count,msb,i;
	printf("enter any number:");
	scanf("%d",&num);
	msb=1<<(SIZE-1);
	count=0;
	
	for(i=0;i<SIZE;i++)
	{
		if((num<<i)&msb)
			break;
		count++;
	}
	printf("total numberr of leading zeroes in %d is %d",num,count);
}


