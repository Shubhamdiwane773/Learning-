#include<stdio.h>
int main()
{
	int arr[10],i,j,temp=0;
	printf("enter the element\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	for(i=1;i<10;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
}

