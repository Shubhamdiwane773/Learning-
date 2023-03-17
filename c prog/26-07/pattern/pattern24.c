#include<stdio.h>
int main()
{
	int i,j;
	char c;
	for(i=1;i<=5;i++)
	{
		if(i%2==0)
			c='A';
		else
			c='a';
		for(j=1;j<=i;j++)
			printf("%c ",c);
		printf("\n");
	}
}
/*
    a
    A A
    a a a
    A A A A
    a a a a a
*/



