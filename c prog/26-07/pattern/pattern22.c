#include<stdio.h>
int main()
{
	int i,j,num=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",num);
			num=num+2;
		}
		printf("\n");
	}
}
/*
     1
     3 5
     7 9 11
     13 15 17 19
     21 23 25 27 29
*/
