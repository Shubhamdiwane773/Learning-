#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *thread1(void *p)
{
	int i;
	for(i=1;i<=5;i++)
	{
		sleep(1);
		printf("In thread1\n");
	}
}
void  *thread2(void *p)
{
	int i;
	for(i=1;i<=5;i++)
	{
		sleep(1);
		printf("In thread2\n");
	}
}
int main()
{
	pthread_t thread[2];
	char *m1="shubham";
	char *m2="diwane";
	pthread_create(&thread[0],NULL,&thread1,(void *)m1);
	pthread_create(&thread[1],NULL,&thread2,(void*)m2);
	pthread_join(thread[0],NULL);
	pthread_join(thread[1],NULL);
	return 0;
}
