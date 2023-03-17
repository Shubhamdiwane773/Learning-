#include<stdio.h>
int cnt_digit(int n)
{
	if(n/10==0)
		return 1;
	return(1+cnt_digit(n/10));
}
int main()
{
	int data,result=0;
	printf("enter your data\n");
	scanf("%d",&data);
	result=cnt_digit(data);
	printf("the no of digit is=%d\n",result);
}
