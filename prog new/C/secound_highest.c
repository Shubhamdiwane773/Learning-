#include<stdio.h>
int main()
{
	int data,max=0,max1=0,temp=0;
	printf("enter your data\n");
	scanf("%d",&data);
	while(data)
	{
		temp=data%10;
		if(temp>max)
		{
			max1=max;
			max=temp;
		}
		else if((temp>max1) && (temp!=max))
			max1=temp;
		data=data/10;
	}
	printf("highest number=%d secound highest number=%d\n",max,max1);
}
