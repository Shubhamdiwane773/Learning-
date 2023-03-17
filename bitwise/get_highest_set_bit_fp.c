#include<stdio.h>
int binary(int data)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
}
int highest_set(int data)
{
	int i,cnt=0;
	for(i=0;i<=31;i++)
	{
		if((data>>i)&1)
			cnt=i;
	}
	return cnt;
}
int main()
{
	int data,result;
	printf("enter your data\n");
	scanf("%d",&data);
	binary(data);
	int (*fp)(int)=highest_set;
	result=highest_set(data);
	printf("The highest set bit is at =%d\n",result);
}
