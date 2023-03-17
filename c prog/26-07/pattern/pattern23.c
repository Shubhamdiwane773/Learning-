#include<stdio.h>
int main()
{
	int i,j,num=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",num);
			num=num+2;
		}
		printf("\n");
	}
}
/*
      0
      2 4
      6 8 10
      12 14 16 18
      20 22 24 26 28
*/
