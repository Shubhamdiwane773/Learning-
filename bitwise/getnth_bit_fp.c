#include<stdio.h>
int binary(int data)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
}
int get_nth(int data,int pos)
{
	if((data>>pos)&1)
		printf("The nth bit %d is set\n",pos);
	else
		printf("The nth bit %d is not set\n",pos);
}
int main()
{
	int data,pos;
	printf("enter your data and position which u want to check\n");
	scanf("%d %d",&data,&pos);
	binary(data);
	int (*fp)(int,int)=get_nth;
	get_nth(data,pos);
}
