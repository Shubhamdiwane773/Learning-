#include<stdio.h>
int main()
{
	int data,pos,i;
	printf("enter the data\n");
	scanf("%d",&data);
	for(i=31;i>=0;i--)
		printf("%d ",((data>>i)&1));
	printf("\n");
	printf("enter the position which u want to toggle\n");
	scanf("%d",&pos);
	data=data^(1<<pos);
	printf("after toggle the bit the data is=%d\n",data);
	for(i=31;i>0;i--)
		printf("%d ",((data>>i)&1));
	printf("\n");
}
