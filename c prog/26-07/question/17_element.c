#include<stdio.h>
int main()
{
	unsigned char arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,14,16,17,18,19,20};
	
	// BY using int pointer
	int *ptr=arr;
	printf("base address =%p value=%d\n",ptr,(char)*ptr);
	ptr=ptr+4;
	printf("17th address =%p value=%d\n",ptr,(char)*ptr);
	char *p=ptr;
	p=++p;
	printf("18th address =%p value=%d\n",p,*p);
	
	//BY using char pointer
	char *str=arr;
	printf("base address =%p value=%d\n",str,*str);
        str=str+16;
        printf("17th address =%p value=%d\n",str,*str);
}
