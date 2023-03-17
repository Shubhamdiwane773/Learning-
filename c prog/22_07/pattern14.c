#include<stdio.h>
int main()
{
	int i,j;
	char c;
	for(i=0;i<5;i++)
	{
		c='a';
		for(j=0;j<=i;j++)
			printf("%c ",c++);
		printf("\n");
	}
}
/*
   a
   a b
   a b c
   a b c d
   a b c d e
*/
