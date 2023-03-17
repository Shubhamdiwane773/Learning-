#include<stdio.h>
#define SIZE 50
void  input(int *p,int n);
void display(int *p,int n);
void selection_sort(int *p,int n);
int main()
{
	int arr[SIZE];
	int i,n;
	printf("enter the size of arry\n");
	scanf("%d",&n);
	input(arr,n);
	display(arr,n);
	selection_sort(arr,n);
	display(arr,n);
}
void input(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter element\n");
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
void selection_sort(int *p,int n)
{
	int i,j,temp;
	printf("It showing selection sort technique:\n");
	printf("In 1st iteration smallest element move to 1st position \n In 2nd iteration 2nd smallest like that\n");
	for(i=0;i<n-1;i++)
	{
		display(p,n);
		for(j=i+1;j<n;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	printf("array is sorted\n");
}


