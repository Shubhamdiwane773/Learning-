#include<stdio.h>
int main()
{
	int data,one=0,zero=0,i;
	printf("enter your data\n");
	scanf("%d",&data);
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
	for(i=31;i>=0;i--)
	{
		if((data>>i)&1)
			++one;
		else
			++zero;
	}
	printf("The number of one's and zeros is one=%d zeros=%d\n",one,zero);
}

