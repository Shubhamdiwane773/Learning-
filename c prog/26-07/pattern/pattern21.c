#include<stdio.h>
int main()
{
	int i,j,num;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i%2==0)
			{
				num=0;
				printf("%d ",num);
			}
			else
			{
				num=1;
				printf("%d ",num);
			}
		}
		printf("\n");
	}
}
/*
    0
    1 1
    0 0 0
    1 1 1 
    0 0 0 0
    1 1 1 1 1
*/
