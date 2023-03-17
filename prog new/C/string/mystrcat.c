#include<stdio.h>
#include<string.h>
char mystrcat(char *dest,char *source)
{
	int i,j,len=strlen(dest);
	printf("The length of the dest string=%d\n",len);
	for(i=len,j=0;source[j];i++,j++)
		dest[i]=source[j];
	dest[i]='\0';
}
int main()
{
	char str[50],str1[10];
	puts("enter the string str");
	gets(str);
	puts("enter the string str1");
	gets(str1);
	mystrcat(str,str1);
	puts(str);
}
