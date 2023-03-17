#include<stdio.h>
int main()
{
	int data,pos,i;
	printf("enter your data and position which bit u want to check\n");
	scanf("%d %d",&data,&pos);

	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");

	if((data>>pos)&1)
		printf("The nth bit %d  is set\n",pos);
	else
		printf("The nth bit %d is not set\n",pos);

}
