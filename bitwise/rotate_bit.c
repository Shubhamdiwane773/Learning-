#include<stdio.h>
int main()
{
	int data,i,pos,n;
	printf("enter your data and positon how much u want to rotate\n");
	scanf("%d %d",&data,&pos);

	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");

	for(i=0;i<pos;i++)
	{
		n=data&1;
		data=data>>1;
		if(n!=(data&(1<<31)))
			data=data^(1<<31);
	}
	printf("data=%d\n",data);

	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
}

