#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter your number a and b\n");
	scanf("%d%d",&a,&b);
	printf("before swaping a=%d b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swaping a=%d b=%d\n",a,b);
}
