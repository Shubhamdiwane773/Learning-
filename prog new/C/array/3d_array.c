#include<stdio.h>
int main()
{
	int arr[2][2][2],i,j,k;
	for(i=0;i<2;i++)
	{
		printf("enter the element\n");
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				scanf("%d",&arr[i][j][k]);
			}
		}
	}

	printf("3D array is :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d ",arr[i][j][k]);
			}
		}
		printf("\n");
	}
}

