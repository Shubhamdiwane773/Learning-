#include<stdio.h>
int main()
{
	int arr[100][100],arr1[100][100],R[100][100],i,j,r,c;
	printf("enter the row and column\n");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter element in 1st array\n");
			scanf("%d",&arr[i][j]);
			printf("enter element in 2nd array\n");
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			R[i][j]=arr[i][j]+arr1[i][j];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",R[i][j]);
		printf("\n");
	}
}


