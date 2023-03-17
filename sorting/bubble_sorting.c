#include<stdio.h>

void bubblesort (int *arr,int size)
{
    int i,j,temp,flag;
    for(i=0;i<size-1;i++)
    {
        flag =0;
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                flag=1;
            }
        }
         if(flag==0)
                break;
    }
}
int main()
{
    int arr[]={47,8,56,97,2,34};
    int size,i;
    size = sizeof(arr)/sizeof(arr[0]);
    printf ("Before Sorting\n");
    for(i=0;i<size;i++)
       printf("%d ",arr[i]);
     bubblesort (arr,size);
     printf ("\n After Sorting\n");
      for(i=0;i<size;i++)
       printf("%d ",arr[i]);
    return 0;
}
