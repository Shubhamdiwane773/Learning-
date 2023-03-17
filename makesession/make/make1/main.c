#include"header.h"
int main()
{
int arr[5],ele,n;
n=sizeof arr/sizeof arr[0];
printf("enter the element\n");
scanf("%d",&ele);
printf("enter the elements in to arra\n");
array_input(arr,n);
array_ele(arr,ele,n);
printf("program ended\n");

}
