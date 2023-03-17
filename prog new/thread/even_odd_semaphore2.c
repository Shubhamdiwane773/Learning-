#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
sem_t s;
int a=1;
void *even(void *ptr)
{
	while(a<=25)
	{
		if(a%2==0)
		{
			sem_wait(&s);
			printf("%d ",a);
			a++;
		}
		else
			sem_post(&s);
	}
}
void *odd(void *ptr)
{
	while(a<=25)
	{
		if(a%2!=0)
		{
			sem_wait(&s);
			printf("%d ",a);
			a++;
		}
		else
			sem_post(&s);
	}
}
int main()
{
	pthread_t t1[2];
	sem_init(&s,0,1);
	pthread_create(&t1[0],NULL,&even,NULL);
	pthread_create(&t1[1],NULL,&odd,NULL);
	pthread_join(t1[0],NULL);
	pthread_join(t1[0],NULL);
}
