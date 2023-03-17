#include<stdio.h>
int main()
{
	int i,data,cnt=0;
	printf("enter your data\n");
	scanf("%d",&data);
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
	for(i=0;i<=31;i++)
	{
		if(((data>>i)&1)==0)
			++cnt;
		else
			break;
	}
	printf("The trailing zeroes=%d\n",cnt);
}
