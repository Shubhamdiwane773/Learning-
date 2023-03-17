//Clear all bits from MSB to the ith bit
/*#include <stdio.h>
int main()
{
    unsigned int mask = 0; // mask flag
    unsigned int i = 2; // ith position till u want to clear the bits
    unsigned int data = 15; //value of data
    mask = (1 << (i+1)); //Shift 1 ith position
    mask = mask -1 ; //give us 00000111
    //Now clear all bits from msb to ith position
    data  = data & mask;
    printf("data = %d\n", data);
    return 0;
}*/
#include<stdio.h>
int main()
{
	int data,pos,i,mask;
	printf("enter your data\n");
	scanf("%d",&data);
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
	printf("enter the position up to u want to clear the bit\n");
	scanf("%d",&pos);
	mask=(1<<(pos+1));// shift 1 ith position
	mask=mask-1;
	data=data&mask;
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n data=%d\n",data);
}

