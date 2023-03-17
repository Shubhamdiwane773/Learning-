#include<stdio.h>
int main()
{
	int i,j,num=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
				printf("* ");
			else
				printf("%d ",num);
		}
		if(i%2==0)
			num++;
		printf("\n");
	}
}
/*
      1
      * *
      2 2 2
      * * * *
      3 3 3 3 3
*/
