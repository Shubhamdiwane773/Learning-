#include<stdio.h>
int main()
{
	int i,j,num=5,n1;
	for(i=0;i<5;i++)
	{
		n1=num;
		for(j=0;j<=i;j++)
			printf("%d ",n1--);
		printf("\n");
	}
}
/*
      5
      5 4
      5 4 3
      5 4 3 2
      5 4 3 2 1
*/
