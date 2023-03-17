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
				printf("%d ",num);
			else
				printf("%c ",c);
		}
		c++,num++;
		printf("\n");
	}
}
/*
         1
	 b b 
	 3 3 3
	 d d d d
	 5 5 5 5 5
*/
