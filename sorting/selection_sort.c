#include <stdio.h>

void swap (int *arr,int i,int min)
{
  int temp;
  temp = arr [i];
  arr [i] = arr [min];
  arr [min] = temp;
}

void selection_sort (int *arr,int size)
{
  int i,j,min;
  for (i=0;i<size;i++)
  {
      min = i;
      for (j=i+1;j<size;j++)
      {
          if (arr[j] <  arr[min])
               min = j;
      }
      if (min != i)
        swap (arr,i,min);
  }
}

int main (void)
{
  int arr[] = {78,66,24,17,5,98,85};
  int size,i ;
  size = sizeof (arr) / sizeof (arr[0]);
  for (i=0;i<size;i++)
    printf ("%d\t",arr[i]);
  printf ("\n");

  selection_sort (arr,size);
  
  puts("After sorting ");
  for (i=0;i<size;i++)
    printf ("%d\t",arr[i]);
  return 0;
}
