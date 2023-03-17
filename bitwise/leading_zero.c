#include<stdio.h>
int main()
{
	int data,i,cnt=0;
	printf("enter your number\n");
	scanf("%d",&data);
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
	for(i=31;i>=0;i--)
	{
		if(((data>>i)&1)==0)
			++cnt;
		else
			break;
	}
	printf("The leading zeroes is=%d\n",cnt);
}
