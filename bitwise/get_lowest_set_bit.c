#include<stdio.h>
int main()
{
	int data,i,cnt=0;
	printf("enter your data\n");
	scanf("%d",&data);
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
	for(i=0;i<=31;i++)
	{
		if((data>>i)&1)
		{
			cnt=i;
			break;
		}
	}
	printf("The lowest set bit is at =%d\n",cnt);
}

