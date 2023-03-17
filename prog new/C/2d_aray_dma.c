//2d array using dma 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r,c,i,j;
	int *ptr;
	printf("enter the no of rows and column\n");
	scanf("%d %d",&r,&c);
	ptr=calloc((r*c),sizeof(int));
	for(i=0;i<(r*c);i++)
		ptr[i]=i+1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",ptr[i*r+j]);
		printf("\n");
	}
}

