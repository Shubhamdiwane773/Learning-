#include<stdio.h>
int main()
{
	int data;
	printf("enter your data\n");
	scanf("%d",&data);
	if(data&1)
		printf("lsb is set\n");
	else
		printf("lsb is not set\n");
}
	

