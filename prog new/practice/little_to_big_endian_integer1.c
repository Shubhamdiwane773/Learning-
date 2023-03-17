#include<stdio.h>
int main()
{
	int data,i,j;
	printf("enter your data\n");
	scanf("%d",&data);
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
	for(i=31,j=0;i>j;i--,j++)
	{
		if(((data>>i)&1)!=((data>>j)&1))
		{
			data=data^(1<<i);
			data=data^(1<<j);
		}
	}
	printf("after converting the little endian to big endian\n");
	for(i=31;i>=0;i--)
		printf("%d ",((data>>i)&1));
}
