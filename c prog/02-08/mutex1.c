#include<stdio.h>
#include<pthread.h>
int val=0;
unsigned int lock_val;
int data=0;
pthread_t tid[2];
pthread_mutex_t mutex;
void *even(void *p)
{
	lock_val=pthread_mutex_lock(&mutex);
	if(lock_val)
	{
		printf("lock not aquired\n");
		pthread_exit(NULL);
	}
	do
	{
		if(data%2==0)
		{
			if(data!=0)
				printf("even number=%d\n",data);
			data++;
		}
		else
		{
			pthread_mutex_unlock(&mutex);
		}
	}while(data<=val);
}
void *odd(void*p2)
{
	lock_val=pthread_mutex_lock(&mutex);
	if(lock_val)
	{
		printf("\n lock not aquired\n");
		pthread_exit(NULL);
	}
	do
	{
		if(data%2!=0)
		{
			printf("odd number =%d\n",data);
			data++;
		}
		else
		{
			pthread_mutex_unlock(&mutex);
		}
	}while(data<=val);
}
void main()
{
	printf("\n enter the number up to u want to print the data\n");
	scanf("%d",&val);
	pthread_create(&tid[0],NULL,&even,NULL);
	pthread_create(&tid[1],NULL,&odd,NULL);

	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
}

