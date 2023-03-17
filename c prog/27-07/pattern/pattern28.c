#include<stdio.h>
int main()
{
	int i,j,num=0,n1=0,n2=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(num%2!=0)
				printf("%d ",-1*num);
			else
				printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
/*
       0
      -1 2
      -3 4 -5
       6 -7 8 -9
      10 -11 12 -13 14
*/
