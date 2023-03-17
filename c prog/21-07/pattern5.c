#include<stdio.h>
int main()
{
	int i,j,n,num=1,n1;
	printf("enter the n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		n1=num;
		for(j=0;j<=i;j++)
			printf("%d ",n1--);
		printf("\n");
		num++;
	}
}
/*
         1
	 2 1
	 3 2 1
	 4 3 2 1
	 5 4 3 2 1

*/
