#include<stdio.h>
#include<stdlib.h>
char mystrcpy(const char *str,char *str1)
{
	int i;
	for(i=0;str[i];i++)
		str1[i]=str[i];
	str1[i]='\0';
}
int main()
{
	char str[10],str1[10];
	puts("enter the string");
	gets(str);
	mystrcpy(str,str1);
	puts(str1);
}
