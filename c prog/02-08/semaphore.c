#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include<unistd.h>
int shared=1;
sem_t s;
void *fun1(void *ptr)
{
	sem_wait(&s);
	int x;
	x=shared;
	printf("thread1 read the value of shared variable as  =%d\n",x);
	x++;
	printf("local updation by thread1=%d\n",x);
	sleep(1);
	shared=x;
	printf("value of shared variable is updated in thread1=%d\n",shared);
	sem_post(&s);
}
void *fun2(void *ptr1)
{
	sem_wait(&s);
	int y;
	y=shared;
	printf("thread2 read the value of shared variable as=%d\n",y);
	y--;
	printf("local updation by thread2 =%d\n",y);
	sleep(1);
	shared=y;
	printf("value of shared variable is updatd in thread2=%d\n",shared);
	sem_post(&s);
}
int main()
{
	sem_init(&s,0,1);
	pthread_t thread1,thread2;
	pthread_create(&thread1,NULL,fun1,NULL);
	pthread_create(&thread2,NULL,fun2,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
}
