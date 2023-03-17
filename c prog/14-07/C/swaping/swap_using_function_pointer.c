#include<stdio.h>
int swap(int *a,int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b;
	int (*fptr)(int* ,int*)=&swap;
	printf("enter value for a and b\n");
	scanf("%d%d",&a,&b);
	printf("before swaping: a=%d b=%d\n",a,b);
	(*fptr)(&a,&b);
	printf("after swaping: a=%d b=%d\n",a,b);
}

