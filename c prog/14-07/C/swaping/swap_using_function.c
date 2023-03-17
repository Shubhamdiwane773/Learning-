#include<stdio.h>
void swap(int *p, int *q)
{
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
}
int main()
{
	int a,b;
	printf("enter two value for a and b\n");
	scanf("%d%d",&a,&b);
	printf("before swaping: a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("after swaping : a=%d b=%d\n",a,b);
}
