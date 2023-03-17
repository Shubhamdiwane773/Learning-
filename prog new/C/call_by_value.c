#include<stdio.h>
int swap(int x ,int y)
{
	x=9;
	y=5;
	printf("x=%d y=%d\n",x,y);
}
int main()
{
	int x=5,y=9;
	printf("x=%d y=%d\n",x,y);
	swap(x,y);
	printf("after swap x=%d y =%d\n",x,y);
}

