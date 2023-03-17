#include<stdio.h>
int main()
{
	int i,j;
	char c='e',c1;
	for(i=0;i<5;i++)
	{
		c1=c;
		for(j=0;j<=i;j++)
			printf("%c ",c1++);
		printf("\n");
		c--;
	}
}
/*
      e
      d e
      c d e
      b c d e
      a b c d e

*/
