#include<stdio.h>
#include<string.h>
char mystrncpy(char *str,char *str1,int n)
{
	int i;
	for(i=0;i<n;i++)
		str1[i]=str[i];
	str1[i]='\0';
}
int main()
{
	char str[10],str1[10];
	int n;
	puts("entr the string");
	gets(str);
	printf("enter the n how much element u want to copy\n");
	scanf("%d",&n);
	mystrncpy(str,str1,n);
	puts(str1);
}
