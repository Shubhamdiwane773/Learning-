#include <stdio.h>

void insertion_sort (int *arr,int size)
{
  int i,j,val;
  for (i=1;i<size;i++)
  {
    for (val = arr[i],j = i-1;(j>=0 && val < arr[j]);j--)
       arr [j+1] = arr [j];

    arr [j+1] = val;
  }
}
int main (void)
{
  int arr[] = {78,65,44,23,2,80,55};
  int size,i;
  size = sizeof(arr)/sizeof(arr[0]);
  puts("Before sorting");
  for (i=0;i<size;i++)
    printf ("%d\t",arr[i]);
  printf ("\n");

  insertion_sort (arr,size);

  puts("After sorting");
  for (i=0;i<size;i++)
    printf ("%d\t",arr[i]);
 
  return 0;
}
