#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}		
int main()
{
	int x,y,result;
	printf("enter value of x & y\n");
	scanf("%d %d",&x,&y);
// syntax: function_ return_type(*funciton pointer)(parameter)
	int (*fp)(int,int)=&add;
	result=fp(x,y);
	printf("result=%d\n",result);
}

