#include"header.h"
void array_ele(int c[],int ele,int n)
{ 	
	int i;
	for(i=0;i<n;i++)
	{
		if(c[i]==ele)
		{
			printf("element found at index:%d\n",i);
			break;
		}
		
	}
	if(i==n)
	printf("element not found\n");
	
}	
