#include<stdio.h>
int print(int a[])
{
	int i=0;
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int main()
{
	int arr1[10],arr2[10],i;
	printf("enter the 10 integer element:\n");

	for(i=0;i<10;i++)
		scanf("%d",&arr1[i]);
	printf("1st array is :\n");
	print(arr1);

	for(i=0;i<10;i++)
		arr2[i]=arr1[i];
	printf("2nd copied array:\n");
	print(arr2);
}

