#include<stdio.h>
int main()
{
	int i,j;
	char c='a';
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
			printf("%c ",c);
		printf("\n");
		c++;
	}
}
/*
      a
      b b
      c c c 
      d d d d 
      e e e e e 
*/
