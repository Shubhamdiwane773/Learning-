#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],temp;
	int i,j;
	printf("enter your string\n");
	gets(str);
	puts(str);

	for(i=0,j=strlen(str)-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	puts(str);
}
