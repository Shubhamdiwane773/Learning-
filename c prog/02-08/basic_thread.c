#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *th(void *p)
{
	int i;
	for(i=1;i<=5;i++)
	{
		sleep(1);
		printf("In thread\n");
	}
}
int main()
{
	pthread_t thread;
	char *m="shubham";
	pthread_create(&thread,NULL,&th,(void *)m);
	pthread_join(thread,NULL);
	return 0;
}
