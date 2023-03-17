#include<stdio.h>
int main()
{
	char *c = "hello";
	char cr[] = "hello";
	
	c = "world";
//	cr = "world";// error:assignment to expression with array type
 
	printf("%c %c\n",*(c),c[0]);//w w
}
