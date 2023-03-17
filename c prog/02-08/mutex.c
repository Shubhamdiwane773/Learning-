#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
phtead_mutex_t m;
int shared=1;
int main()
{
	pthread_mutex_init(&m,NULL);
	pthread_t thread1,thread2;
	pthread_create(&thread1,NULL,fun1,NULL);
	pthread_create(&thread2,NULL,fun2,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
}
