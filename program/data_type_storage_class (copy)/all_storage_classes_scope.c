#include<stdio.h>
int x;
void autoclass()
{
	printf("auto class:\n");
	auto int a=32;
	printf("value of auto a is =%d\n\n",a);
	printf("in auto class function we print the extern x=%d\n",x);
}
void registerclass()
{
	printf("register class:\n");
	register char b='A';
	printf("value of register b is =%c\n\n",b);
}
void externclass()
{
	printf("extern class:\n");
	extern x;
	printf("value of extern x is =%d\n\n",x);
	x=2;
	printf("modified extern x value is =%d\n\n",x);
}
void staticclass()
{
	int i=0;
	printf("static class:\n");
	for(i=1;i<5;i++)
	{
		static int y=5;
		int p=10;
		y++;
		p++;
		printf("the value of static y =%d\n the value of non-static p =%d\n\n",y,p);
	}
	 printf("in static class function we print and access the extern x=%d\n",x);

}
int main()
{
	printf("ALL STORAGE CLASSES \n");

	autoclass();
	registerclass();
	externclass();
	staticclass();
}
