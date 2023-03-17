#include<stdio.h>
#define SIZE 50
int main()
{
	int arr[5]={7,6,5,4,3};
	int i,j,temp,k;
	for(i=1;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	for(k=0;k<5;k++)// it showing step by step modification
		printf("%d ",arr[k]);
	printf("\n");
	}
}


