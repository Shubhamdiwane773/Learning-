#include<stdio.h>
#include<string.h>
char *ustrcpy(char *dest,const char *source)
{
	int i;
	for(i=0;source[i];i++)
		dest[i]=source[i];
	dest[i]='\0';
	return dest;
}
char *ustrlen(const char *p)
{
	unsigned cnt=0;
	while(*p)
	{
		p++;
		cnt++;
	}
	return cnt;
}
int main()
{
	char s1[50],s2[50];
	puts("enter the string s1");
	gets(s1);
	puts("enter the string s2");
	gets(s2);
	printf("before copying s1 and s2 string\n");
	puts(s1);
	puts(s2);

	ustrcpy(s1,s2);
	printf("after copying s1 and s2 string\n");
	puts(s1);
	puts(s2);
	int len=ustrlen(s1);
	printf("new length of s1 string is=%d",len);
}
