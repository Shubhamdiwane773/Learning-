#include<stdio.h>
int main()
{
	int i,j,num=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d ",num++);
		printf("\n");
	}
}
/*
      1
      2 3
      4 5 6
      7 8 9 10
      11 12 14 15
*/
