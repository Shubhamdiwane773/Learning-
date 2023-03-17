#include<stdio.h>
int main()
{
	int i,j,num=1;
	char c='a';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
				printf("%c ",c);
			else
				printf("%d ",num);
		}
		num++,c++;
		printf("\n");
	}
}
/*
      a
      2 2
      c c c
      4 4 4 4
      e e e e e
*/
