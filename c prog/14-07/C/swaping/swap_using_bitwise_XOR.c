#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value for a and b\n");
	scanf("%d %d",&a,&b);
	printf("before swaping: a=%d b=%d\n",a,b);

	a=a^b;
	b=a^b;
	a=b^a;
	printf("after swaping: a=%d b=%d\n",a,b);
}
