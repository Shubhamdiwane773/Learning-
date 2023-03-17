#include<stdio.h>
float add (int x,int y)
{
	return x+y;
}
float sub(int x,int y)
{
	return x-y;
}
float mul(int x,int y)
{
	return x*y;
}
float div(int x,int y)
{
	return x/y;
}
int main()
{
	int x,y,result,choice;
	printf("enter the value of x&y\n");
	scanf("%d %d",&x,&y);
	float (*fp[4])(int ,int)={add,sub,mul,div};
	printf("enter your choice\n");
	printf("0.add 1.sub 2.mul 3.div\n");
	scanf("%d",&choice);
	result=fp[choice](x,y);
	printf("result=%d\n",result);
}
