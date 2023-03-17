#include<stdio.h>
int main()
{
	int i,j;
	char c='a',c1;
	for(i=0;i<5;i++)
	{ c1=c;
		for(j=0;j<=i;j++)
			printf("%c ",c1--);
		printf("\n");
		c++;
	}
}
/*
    a
    b a
    c b a
    d c b a
    e d c b a

*/
