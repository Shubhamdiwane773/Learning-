#include<stdio.h>
int main()
{
	int a[10],i,j,temp,max=0,min=9;

	printf("enter the 10 integer element\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("unsorted array:\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	//bubble sort
	for(i=0;i<10-1;i++)
	{
		for(j=0;j<10-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	max=a[9];
	min=a[0];
	printf("sorted array:\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("maximum element is =%d minimun element is =%d",max,min);
}
