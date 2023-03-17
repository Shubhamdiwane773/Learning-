#include<stdio.h>
#include<pthread.h>
typedef struct node
{
	int x;
	int y;
}S;
void* swap_ptr(S *stu)
{
	int temp;
	temp=stu->x;
	stu->x=stu->y;
	stu->y=temp;
}
int main()
{
	S *ptr;
	printf("enter value for x and y\n");
	scanf("%d %d",&ptr->x,&ptr->y);
	printf("before swaping: x=%d y=%d\n",ptr->x,ptr->y);
	pthread_t newthread;
	pthread_create(&newthread,NULL,&swap_ptr,ptr);
	pthread_join(newthread,NULL);
	printf("After swapping : x=%d y=%d\n",ptr->x,ptr->y);
	return 0;
}
