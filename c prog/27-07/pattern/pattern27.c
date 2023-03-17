#include<stdio.h>
int main()
{
	int i,j,num=1,n1=0,n2=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			num=n1+n2;
			printf("%d ",num);
			n1=n2;
			n2=num;
		}
		printf("\n");
	}
}
/*
     1
     2 3
     5 8 13
     21 34 55 89
     144 233 377 610
*/

