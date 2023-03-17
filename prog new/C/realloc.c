#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,N;
	int *ptr=NULL;
	printf("enter the n\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	int i;
	printf("enter the element\n");
	for(i=0;i<n;i++)
		scanf("%d",&ptr[i]);
	for(i=0;i<n;i++)
		printf("%d ",ptr[i]);
	printf("\nenter the new size of N\n");
	scanf("%d",&N);
	ptr=realloc(ptr,N);
	printf("enter the element\n");
	 for(i=0;i<n;i++)
                scanf("%d",&ptr[i]);
        for(i=0;i<n;i++)
                printf("%d ",ptr[i]);

}
