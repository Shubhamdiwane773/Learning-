#include<stdio.h>
int main()
{
	int data,bit,pos;
	printf("enter the number\n");
	scanf("%d",&data);
	printf("before set bit:\n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",((data>>bit)&1));

	printf("enter the position which bit you want to set\n");
	scanf("%d",&pos);
	data=data|(1<<pos);
	printf("after set bit:\n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",((data>>bit)&1));
}

