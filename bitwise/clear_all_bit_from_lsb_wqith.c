#include<stdio.h>
int main()
{
	int data,pos,mask,i;
	printf("enter your data\n");
	scanf("%d",&data);
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
	printf("enter the position up to u want to clear the bit\n");
	scanf("%d",&pos);
	mask=(1<<(pos+1));
	mask=mask-1;
	mask=~mask;
	data=data&mask;
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n data=%d\n",data);
}
