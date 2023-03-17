#include<stdio.h>
int main()
{
	int r,c,n,i,j;
	int arr[100][100];
	printf("enter the size of row and column\n");
	scanf("%d %d",&r,&c);
	printf("enter the %d element\n",(r*c));
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf(" The 2D array is: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
}


