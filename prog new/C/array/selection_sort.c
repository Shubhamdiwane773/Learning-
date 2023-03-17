#include<stdio.h>
int main()
{
	int arr[10],i,j,temp,n,min_idx;
	n=sizeof(arr)/sizeof(arr[0]);
	printf("enter the element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	{
		min_idx=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_idx])
				min_idx=j;
		}
		if(min_idx!=i)
		{
			temp=arr[min_idx];
			arr[min_idx]=arr[i];
			arr[i]=temp;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
