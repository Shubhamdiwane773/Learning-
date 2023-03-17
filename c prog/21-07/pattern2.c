#include<stdio.h>
int main()
{
	int i,j,n,num=1;
	printf("enter the n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d ",num);
		printf("\n");
		num++;
	}
}
/*      1
	2 2
	3 3 3
	4 4 4 4
	5 5 5 5 5
*/
