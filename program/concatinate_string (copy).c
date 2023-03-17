#include<stdio.h>
#include<string.h>
char *ustrcat(char *dest,const char *source)
{
	int i,j,len=ustrlen(dest);
	printf("len=%d\n",len);
	for(i=len,j=0;source[j];i++,j++)
		dest[i]=source[j];
	dest[i]='\0';
		return dest;
}
int ustrlen( const char *p)
{
	unsigned int cnt=0;
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

	ustrcat(s1,s2);
	puts("concatinated string is:");
	puts(s1);
	int len=ustrlen(s1);
	printf("length of concatinated string is=%d",len);
}
