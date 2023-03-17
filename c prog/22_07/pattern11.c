#include<stdio.h>
int  main()
{
	int i,j,num=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
				printf("-%d ",num);
			else
				printf("%d ",num);
		}
		printf("\n");
		num++;
	}
}
/*
        0
	1 -1
	2 -2 2
	3 -3 3 -3
	4 -4 4 -4 4

*/
