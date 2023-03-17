#include<stdio.h>
int main()
{
	int num,pos,i;
	printf("enter the number \n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d ",(num>>i)&1);
	printf("\n enter the position which u want to set\n");
	scanf("%d",&pos);
	num=num|(1<<pos);
	printf("after seting the bite num=%d\n",num);
	for(i=31;i>=0;i--)
		printf("%d ",((num>>i)&1));
	printf("\n");
}

