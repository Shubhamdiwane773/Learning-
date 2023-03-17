#include<stdio.h>
int main()
{
	int x,rev=0;
	printf("enter your number\n");
	scanf("%d",&x);
	while(x)
	{
		rev=rev*10+x%10;
		x=x/10;
	}
	printf("reverse number=%d\n",rev);
}
