#include<stdio.h>
#define TOTAL_BITS sizeof(int)*8
int trailing_zeroes(int n)
{
	int cnt=0;
	while(n>0&&(n&1)==0)
	{
		cnt=cnt+1;
		n=n>>1;
	}
	return cnt;
}
int main()
{
	int n,i;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i=TOTAL_BITS;i>=0;i--)
	{
		printf("%d ",((n>>i)&1));
	}
	printf("\n");
	printf("number of trailing zeroes in %d =%d",n,trailing_zeroes(n));
}

