#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,j,r,c;
	printf("enter the row and column size\n");
	scanf("%d %d",&r,&c);
	ptr=(int*)malloc((r*c)*sizeof(int));
	printf("enter the %d element\n",(r*c));
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",(ptr+i*c+j));
	printf("2d arraay:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",*(ptr+i*c+j));
		}
		printf("\n");
	}
}
	
