#include<stdio.h>
int binary(int data)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
}
int trailing_zeros(int data)
{
	int i,cnt=0;
	for(i=0;i<=31;i++)
	{
		if(((data>>i)&1)==0)
			++cnt;
		else
			return cnt;
	}
}
int main()
{
	int data,r=0;
	printf("enter your data\n");
	scanf("%d",&data);
	binary(data);
	int (*fp)(int)=trailing_zeros;
	r=trailing_zeros(data);
	printf("The trailing zeros is=%d\n",r);
}
