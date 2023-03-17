#include<stdio.h>
#define SIZE 50
#include<stdlib.h>
void input(int *p,int n);
void display(int *p,int n);
void sort(int *p,int n);
int main()
{
	int arr[SIZE];
	int i,j,n,choice;
	printf("enter the size of an array\n");
	scanf("%d",&n);
	while(1)
	{
		printf("\n..... enter your choice  ......\n");
		printf("1.Input 2.display 3.sort 4.exit \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: input(arr,n);
				break;
			case 2: display(arr,n);
				break;
			case 3: sort(arr,n);
				break;
			case 4: exit(1);
				break;
			default: printf("enter correct choice\n");
				 break;
		}
	}
}
void input(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter the element\n");
		scanf("%d",&p[i]);
	}
}
void display(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}
void sort(int *p,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	printf("array is sorted:\n");
	display(p,n);
}
