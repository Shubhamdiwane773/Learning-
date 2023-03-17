#include<stdio.h>
int main()
{
	int data,bit,pos;
	printf("enter the number\n");
	scanf("%d",&data);
	printf("before toggle bit:\n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",((data>>bit)&1));

	printf("enter the position which bit you want to toggle\n");
	scanf("%d",&pos);
	data=data^(1<<pos);
	printf("after toggle  bit:\n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",((data>>bit)&1));
}

