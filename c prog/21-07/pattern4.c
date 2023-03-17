#include<stdio.h>
int main()
{
	int i,j,n,num;
	printf("enter the n \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		num=1;
		for(j=0;j<=i;j++)
			printf("%d ",num++);
		printf("\n");
		num;
	}
}
/*
          1
	  1 2
	  1 2 3
	  1 2 3 4 
	  1 2 3 4 5
*/
