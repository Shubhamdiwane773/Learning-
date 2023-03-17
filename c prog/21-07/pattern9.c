#include<stdio.h>
int main()
{
	int i,j,num=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",(num*num));
			num++;
		}
		printf("\n");
	}
}
/*
    1
    4 9
    16 25 36
    49 64 81 100
    121 144 196 225
*/
