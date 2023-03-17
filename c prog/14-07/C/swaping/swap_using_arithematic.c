#include<stdio.h>
int  main()
{
	int a,b;
	printf("enter two value for a and b\n");
	scanf("%d%d",&a,&b);
	printf("before swaping: a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping : a=%d b=%d\n",a,b);
}
