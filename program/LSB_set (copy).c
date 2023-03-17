#include<stdio.h>
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);

	if(n&1)
		printf("LSB is set \n");
	else
		printf("LSB is not set \n");
}
