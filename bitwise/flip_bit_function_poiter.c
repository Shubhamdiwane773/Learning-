#include<stdio.h>
int binary(int data);
int flip_bit(int *data);
int main()
{
	int data;
	printf("enter your data\n");
	scanf("%d",&data);
	binary(data);
	int (*f_bit)(int*)=flip_bit;
	f_bit(&data);
	binary(data);
}
int binary(int data)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
}
int flip_bit(int *data)
{
	int i;
	for(i=31;i>=0;i--)
		*data=*data^(1<<i);
}

