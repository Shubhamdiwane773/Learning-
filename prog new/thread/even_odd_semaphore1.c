#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
int a=1;
//pthread_mutex_t b;
void *even(void *ptr)
{
	while(a<=25)
	{
		if(a%2==0)
		{
			sleep(1);
			//pthread_mutex_lock(&b);
			printf("%d ",a);
			++a;
		}
/*		else
			pthread_mutex_unlock(&b);*/
	}
}
void *odd(void *ptr)
{
	while(a<=25)
	{
		if(a%2!=0)
		{
			sleep(1);
		//	pthread_mutex_lock(&b);
			printf("%d ",a);
			++a;
		}
/*		else
			pthread_mutex_unlock(&b);*/
	}
}
int main()
{
	pthread_t t1[2];
//	pthread_mutex_init(&b,NULL);
	pthread_create(&t1[0],NULL,&even,NULL);
	pthread_create(&t1[1],NULL,&odd,NULL);
	pthread_join(t1[0],NULL);
	pthread_join(t1[1],NULL);
}
