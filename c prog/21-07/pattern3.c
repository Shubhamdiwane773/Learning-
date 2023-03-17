#include<stdio.h>
int main()
{
	int i,j,num=5;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d ",num);
		printf("\n");
		num--;
	}
}
/*    
           5
	   4 4
	   3 3 3 
	   2 2 2 2
	   1 1 1 1 1
*/
