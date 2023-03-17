#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,m,r,c,i,j,k;
	printf("enter the matrix,row and column\n");
	scanf("%d %d %d",&m,&r,&c);
	ptr=(int*)malloc((m*r*c)*sizeof(int));
	printf("enter the element\n");
	for(i=0;i<m;i++)
		for(j=0;j<r;j++)
			for(k=0;k<c;k++)
				scanf("%d",(ptr+i*r*c+j*c+k));
	printf("3d array is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<r;j++)
		{
			for(k=0;k<c;k++)
				printf("%d ",*(ptr+i*r*c+j*c+k));
		}
		printf("\n");
	}
	printf("\n");
	free(ptr);
	ptr=NULL;
}
