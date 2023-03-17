#include<stdio.h>
int binary(int data)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d ",(data>>i)&1);
	printf("\n");
}
int rotate_bit(int *data,int pos)
{
	int i,n;
	for(i=0;i<=pos;i++)
	{
		n=*data&1;
		*data=*data>>1;
		if(n!=(*data&(1<<31)))
		{
			*data=*data^(1<<31);
		}
	}
}
int main()
{
	int data,pos;
	printf("enter your data and position how much bit u want to rotate\n");
	scanf("%d %d",&data,&pos);
	binary(data);
	int (*f_bit)(int *,int)=rotate_bit;
	f_bit(&data,pos);
	binary(data);
}

