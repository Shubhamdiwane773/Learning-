#include<stdio.h>
int main()
{
	int n,msb;
	printf("enter the number\n");
	scanf("%d",&n);
	msb=1<<(32-1);
	if(n & msb)
		printf("MSB is set\n");
	else 
		printf("MSB is not set\n");
}
