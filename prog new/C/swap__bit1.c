#include<stdio.h>
int main()
{
	int a,i,pos1=0,pos2=0,n=0;
	printf("enter your number\n");
	scanf("%d",&a);
	for(i=31;i>=0;i--)
	{
		printf("%d ",((a>>i)&1));
	}
	printf("\nenter bit position pos1 and pos2 which u want to swap \n");
	scanf("%d %d",&pos1,&pos2);
	if(((a>>pos1)&1)!=((a>>pos2)&1))
	{
		printf("both bit are not same\n");
		a=a^(1<<pos1);
		a=a^(1<<pos2);
	}
	else
		printf("both bit are same not required to swap\n");
	printf("%d\n",a);
	for(i=31;i>=0;i--)
                printf("%d ",((a>>i)&1));


}

