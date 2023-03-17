#include<stdio.h>
#include<string.h>
char mystrrev(char *str)
{
	int i,j;
	char temp;
	for(i=0,j=(strlen(str)-1);i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}

}
int main()
{
	char str[10];
	puts("enter the string");
	gets(str);
	mystrrev(str);
	puts(str);
}
