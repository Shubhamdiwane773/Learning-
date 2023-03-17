#include<stdio.h>
int main()
{
	int data,n,i;
	printf("enter your data\n");
	scanf("%d",&data);
	printf("enter which bit u want to check\n");
	scanf("%d",&n);
	if(data&(1<<n))
		printf("bit is set\n");
	else
		printf("bit is not set\n");
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
}

