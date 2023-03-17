#include<stdio.h>
int swap(int *p,int *q);
int main()
{
	int a,b;
	printf("enter the a and b value\n");
	scanf("%d %d",&a,&b);
	int *p=&a,*q=&b;

	printf("before swaping a=%d b=%d\n",a,b);

	swap(p,q);
	printf("after swaping a=%d b=%d\n",a,b);
}
int swap(int *p,int *q)
{
	int temp;

	temp=*p;
	*p=*q;
	*q=temp;
}
