#include<stdio.h>
int main()
{
	int i,j;
	char c;
	for(i=0;i<5;i++)
	{
		c='e';
		for(j=0;j<=i;j++)
			printf("%c ",c--);
		printf("\n");
	}
}
/*
     e
     e d
     e d c
     e d c b
     e d c b a

*/
