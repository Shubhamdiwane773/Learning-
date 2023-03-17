#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r=0,c=0,i,j;
	int *ptr=NULL;
	printf("enter the size of row and column\n");
	scanf("%d %d",&r,&c);
	ptr=(int *)malloc((r*c)*sizeof(int));
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			 *(ptr + i*c + j) = i + j;
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ", *(ptr + i*c + j));
		printf("\n");
	}
}
