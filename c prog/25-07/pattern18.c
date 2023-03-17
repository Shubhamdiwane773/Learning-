#include<stdio.h>
int main()
{
	int i,j;
	char c='a';
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
			printf("%c ",c++);
		printf("\n");
	}
}
/*
     a
     b c
     d e f
     g h i j
     k l m n o
*/
