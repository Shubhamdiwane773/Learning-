#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("enter your number\n");
	scanf("%d%d",&a,&b);
	while(1)
	{
		printf("what do you want to you perform\n");
		printf("1. addition 2. substraction 3.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: add(int a,int b);
				break;
			case 2: sub(int a,int b);
				break;
			case 3: exit();
			default: printf("wrong input\n");
		}
	}
}
