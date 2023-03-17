#include<stdio.h>
#include<stdlib.h>
int asesort(int *p);
int dsesort(int *p);
int main()
{
	int arr[10],i;
	printf("enter the 10 unsorted integer element\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	printf("before sorting array \n");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	int *p=&arr,choice;
	while(1)
	{
		printf("\n1.assending sort 2.desending sort 3.exit\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:asesort(p);
			       break;
		       	case 2: dsesort(p);
				break;
			case 3: exit(0);
			default: printf("enter the right choice\n");
				 break;
		}
		
	printf("\nafter sorting array :\n");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	}
}
int asesort(int *p)
{
	int i,temp,j;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}
int dsesort(int *p)
{
	int i,temp,j;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(p[i]<p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}

