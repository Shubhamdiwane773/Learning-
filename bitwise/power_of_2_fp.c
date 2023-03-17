#include<stdio.h>
int power_of_2(int data)
{
	if((data&(data-1)))
			printf("Is not power of 2\n");
	else
		printf("is power of 2\n");
}

int main()
{
	int data;
	printf("enter your data\n");
	scanf("%d",&data);
	int (*fp)(int)=power_of_2;
	power_of_2(data);
}
