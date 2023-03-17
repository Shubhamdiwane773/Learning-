#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i,j;
	puts("enter the string\n");
	gets(str);
	for(i=0,j=strlen(str)-1;i<j;i++,j--)
	{
		if(str[i]!=str[j])
			break;
	}
	if(i<j)
		printf("not palindrum\n");
	else
		printf("is palindrum\n");
}
