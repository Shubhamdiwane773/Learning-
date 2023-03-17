#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int i,j;

	puts("enter the string s1");
	gets(s1);

	for(i=0,j=strlen(s1)-1;i<j;i++,j--)
	{
		if(s1[i]!=s1[j])
			break;
	}
	if(i<j)
		printf("it is not plindrome");
	else 
		printf("it is palindrome");
}
