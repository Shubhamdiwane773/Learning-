#include<stdio.h>
#include<pthread.h>
pthread_mutex_t mutex;
int num=0;
void *odd(void *args)
{
	pthread_mutex_lock(&mutex);
	while(num<=50)
	{
		if(num%2!=0)
		{
			printf("%d ",num);
			num++;
		}
		else
			pthread_mutex_unlock(&mutex);
	}
}
void *even(void *args)
{
	pthread_mutex_lock(&mutex);
	while(num<=50)
	{
		if(num%2==0)
		{
			printf("%d ",num);
			num++;
		}
		else
			pthread_mutex_unlock(&mutex);
	}
}
int main()
{
	pthread_t a[2];
	pthread_create(&a[0],NULL,odd,NULL);
	pthread_create(&a[1],NULL,even,NULL);
	pthread_join(a[0],NULL);
	pthread_join(a[1],NULL);
	return 0;
}
