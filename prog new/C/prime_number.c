#include<stdio.h>
int main()
{
	int data,i,flag=0;
	printf("enter data\n");
	scanf("%d",&data);
	for(i=2;i<data;i++)
	{
		if(data%i==0)
		{
			flag++;
			printf("not prime\n");
			break;
		}
	}
	if(flag==0)
		printf("prime\n");
}


