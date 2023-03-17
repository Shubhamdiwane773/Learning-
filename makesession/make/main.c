#include<stdio.h>
#include"add.h"
#include"sub.h"

int main()
{
	int var1=0,var2=0;
	printf("\n Enter value 1:: ");
	scanf("%d",&var1);
	printf("\n Enter value 2:: ");
	scanf("%d",&var2);

	add(var1,var2);
	sub(var1,var2);

	return 0;
}
