#include<stdio.h>
int main()
{
	int data;
	printf("enter your data\n");
	scanf("%d",&data);
	if((data>>31)&1)
		printf("MSB is set\n");
	else
		printf("MSB is not set\n");
}
