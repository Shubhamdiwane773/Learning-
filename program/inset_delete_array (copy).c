#include<stdio.h>
void insert(int ins,int *arr,int size)
{
	int i,temp,j;
	for(i=0;i<size;i++)
	{
		if(i==ins-1)
		{
			j=size-1;
			while(j>=ins-1)
			{
				arr[j+1]=arr[j];
				j--;
			}
			printf("enter the new element \n");
			scanf("%d",&arr[i]);
		}
	}
	return;
}
void delete(int del,int *arr,int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		if(i==del-1)
		{
			j=i;
			while(j<size)
			{
				arr[j]=arr[j+1];
				j++;
			}
		}
	}
	return;
}
void get(int size,int *arr)
{
	int i=0;
	for(i=0;i<size;i++)
		printf("arr[%d]=%d\n",i,arr[i]);
}
int main()
{
	int i,d,size;
	int arr[15]={1,2,3,4,5,6,7,8,9,10};
	size = sizeof(arr)/sizeof(arr[0]);
	printf("toatl elements in an array %d\n",size);
	printf("print all elements\n");
	get(size,arr);
	printf("enter array position number to insert in an array\n");
	scanf("%d",&i);
	insert(i,arr,size);
	get(size,arr);
	printf("enter array position numbe to be delete in an array\n");
	scanf("%d",&d);
	delete(d,arr,size);
	get(size,arr);
}
