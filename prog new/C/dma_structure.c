#include<stdio.h>
#include<stdlib.h>
struct class
{
	char subject[30];
	int marks;
};
int main()
{
	int i,n;
	struct class *ptr=NULL;
	printf("enter no of record u want to create\n");
	scanf("%d",&n);
	ptr=malloc(n*sizeof(struct class));
	for(i=0;i<n;i++)
	{
		printf("enter the subject and marks\n");
		scanf("%s %d",(ptr+i)->subject,&(ptr+i)->marks);
	}
	for(i=0;i<n;i++)
		printf("%s %d\n",(ptr+i)->subject,(ptr+i)->marks);
}
