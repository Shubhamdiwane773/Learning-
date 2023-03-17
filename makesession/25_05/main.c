#include<stdio.h>
#include"header.h"

int main()
{
	int var1, var2;
	printf("Enter value1: ");
	scanf("%d", &var1);
        printf("Enter value2: ");
	scanf("%d", &var2);

	add(var1, var2);
	sub(var1, var2);
}
