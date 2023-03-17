#include<stdio.h>
struct class
{
	int a,b;
};
struct student
{
	int g,h;
	char name[20];
};
int main()
{
	struct class v1={11,22};
	printf("before arithmatic a=%d b=%d\n",v1.a,v1.b);
	v1.a=v1.a+v1.b;// addition of two structure member
	printf("after arithmatic a=%d b=%d\n",v1.a,v1.b);
	struct class v2,v3;
	v2=v1;
	printf("after v1=v2-----  a=%d b=%d\n",v2.a,v2.b);

       	struct student s1;
	s1.g=5,s1.h=6;
	v3.a=s1.g;//we are assinging student data to class structure variable
	v3.b=s1.h;
	v3.a=s1.g + s1.h;
        printf("after v1=v2-----  a=%d b=%d\n",v3.a,v3.b);



}
