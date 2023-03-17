#include<stdio.h>
int *copy(int *a1,int *a2);
int main()
{
	int a1[10],a2[10],i;
	printf("enter the 10 integer in a1 element\n");
	for(i=0;i<10;i++)
		scanf("%d",&a1[i]);
	printf("enter the 10 integer in a2 array\n");
	for(i=0;i<10;i++)
		scanf("%d",&a2[i]);

	int *p=&a1,*q=&a2;

	copy(p,q);
	printf("copied array a2:\n");
	for(i=0;i<10;i++)
		printf("%d ",a2[i]);
}
int *copy(int *a1,int *a2)
{
	int i;
	for(i=0;i<10;i++)
		a2[i]=a1[i];
	return a2;
}
