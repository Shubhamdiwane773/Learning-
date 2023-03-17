#include<stdio.h>
#define SIZE 10
int main()
{
	int arr[SIZE];
	int target,flag=0,i,j;

	printf("enter the number:");
	for(i=0;i<SIZE;i++)
		scanf("%d",&arr[i]);
	printf("enter the search element:");
	scanf("%d",&target);
	for(j=0;j<SIZE;j++)
	{
		if((arr[j]^target)==0)
		{
			printf("element %d found in %d position\n",target,j);
			return 0;
		}
	}
	printf("element %d is not found\n",target);
}
