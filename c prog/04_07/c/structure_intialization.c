#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
}stu={11,"shubham",88.50};
int main()
{
	printf("%d %s %f\n",stu.roll,stu.name,stu.marks);
}

