#include<stdio.h>
int main()
{
	int i,j;
	char c='e';
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
			printf("%c ",c);
		c--;
		printf("\n");
	}
}
/*
     e
     d d
     c c c
     b b b b
     a a a a a
*/
