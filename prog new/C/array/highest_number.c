#include<stdio.h>
#define SIZE 100
int main()
{
	int arr[SIZE],i,max=0,max1=0,n;
	printf("enter the size of an array\n");
	scanf("%d",&n);
	printf("enter %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max1=max;
			max=arr[i];
		}
		else if(arr[i]>max1)
			max1=max;
	}

	printf("highest number is=%d\n secound highest=%d\n",max,max1);
}

