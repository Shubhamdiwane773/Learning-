#include<stdio.h>
int main()
{
	int temp,i,flag=0,min,max,j;
	printf("enter range min and max\n");
	scanf("%d %d",&min,&max);
	for(i=min;i<max;i++)
	{
		flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag++;
			
			}
		}
	if(flag==0)
	{
		temp=i;
		if(i>temp)
			temp=i;
	}
	}
	printf("highest prime number=%d\n",temp);
}


