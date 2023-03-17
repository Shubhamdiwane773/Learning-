#include<stdio.h>
#include<string.h>
int mystrlen(char *str)
{
	int cnt=0;
	while(*str)
	{
		str++;
		cnt++;
	}
	return cnt;
}

int main()
{
	char str[10];
	int len;
	puts("enter string");
	gets(str);
	len=mystrlen(str);
	printf("The length of the string=%d\n",len);
}
