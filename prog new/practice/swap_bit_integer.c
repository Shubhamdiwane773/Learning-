#include<stdio.h>
int main()
{
	int data,i,pos1,pos2;
	printf("enter your number\n");
	scanf("%d",&data);
	for(i=31;i>=0;i--)
		printf("%d ",((data>>i)&1));
	printf("\n enter the position which u want to swap pos1 and pos2\n");
	scanf("%d %d",&pos1,&pos2);
	if(((data>>pos1)&1) != ((data>>pos2)&1))
	{
		printf("both the bit are not same now we swap the bit\n");
		data=data^(1<<pos1);
		data=data^(1<<pos2);
	}
	else
		printf("both bit are same no need to swap\n");
	printf("data=%d\n",data);
	for(i=31;i>=0;i--)
		printf("%d ",((data>>i)&1));
	printf("\n");
}
	

