#include<stdio.h>
#include<string.h>
char *ustrchr(char *s1,int ch);
int main()
{
	char s1[20],ch,*p;

	puts("enter the string s1");
	gets(s1);

	puts("enter the character do you want to search in given string");
	scanf("%c",&ch);

	if(p=ustrchr(s1,ch))
		printf("the character %c is found at position %d",ch,p-s1);
	else 
		printf("not found");
}
char *ustrchr(char *s1,int ch)
{
	for(int i=0;s1[i];i++)
	{
		if(s1[i]==ch)
			return s1+i;
	}
	return 0;
}
