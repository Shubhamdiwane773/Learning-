#include<stdio.h>
int main()
{
	int i,j,num=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(num==1)
				num--;
			else
				num++;
			printf("%d ",num);
		}

		printf("\n");
	}
}
/*
     1
     0 1
     0 1 0
     1 0 1 0
     1 0 1 0 1
*/
