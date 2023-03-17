#include<stdio.h>
int binary(int data)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
}
int leading_zeros(int data)
{
	int i,cnt=0;
	for(i=31;i>=0;i--)
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
	int (*fp)(int)=leading_zeros;
	r=leading_zeros(data);
	printf("The leading zeroes is=%d\n",r);
}
