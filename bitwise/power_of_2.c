#include<stdio.h>
int main()
{
	int data;
	printf("enter your data\n");
	scanf("%d",&data);
	if((data&(data-1)))
			printf("Is not power of 2\n");

	else
		printf("is power of 2\n");
}

