#include<stdio.h>
struct student
{
	int a,b,c,d;
	int roll;
	char name[20];
	float marks;
};
int main()
{
	int i;
	struct student arr[2];// arrray of structure
	for(i=0;i<2;i++)
	{
		printf("enter roll number,name,marks\n");
		scanf("%d %s %f",&arr[i].roll,arr[i].name,&arr[i].marks);
	}
	for(i=0;i<2;i++)
	{
		printf("roll_no=%d name=%s marks=%f\n",arr[i].roll,arr[i].name,arr[i].marks);
	}
	

	arr[0].a=11;
	arr[0].b=22;
	arr[0].c=33;
	arr[0].d=44;
	printf("%d %d %d %d\n",arr[0].a,arr[0].b,arr[0].c,arr[0].d);
	arr[1].a=1;
        arr[1].b=2;
        arr[1].c=3;
        arr[1].d=4;
        printf("%d %d %d %d\n",arr[1].a,arr[1].b,arr[1].c,arr[1].d);

}
