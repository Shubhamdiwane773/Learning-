#include<stdio.h>
int main()
{
	int i,j,num;
	for(i=0;i<5;i++)
	{
		if(i%2==0)
			num=0;
		else
			num=1;
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
