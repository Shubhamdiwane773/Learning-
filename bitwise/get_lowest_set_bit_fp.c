#include<stdio.h>
int binary(int data)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
}
int lowest_bit(int data)
{
	int i,cnt=0;
	for(i=0;i<=31;i++)
		if((data>>i)&1)
		{
			cnt=i;
			break;
		}
}
int main()
{
	int data,r;
	printf("enter your data\n");
	scanf("%d",&data);
	binary(data);
	int (*fp)(int)=lowest_bit;
	r=lowest_bit(data);
	printf("The lowest set bit is at=%d\n",r);
}
	
