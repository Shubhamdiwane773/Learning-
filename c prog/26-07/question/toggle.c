#include<stdio.h>
#define TOGGLE(n,pos) n=n^(1<<pos)
int main()
{
	int bit,i,n,pos;
	printf("enter the number\n");
	scanf("%d",&n);
	for(bit=31;bit>=0;bit--)
		printf("%d ",(n>>bit)&1);
	printf("\nenter the position which bit u want to toggle\n");
	scanf("%d",&pos);
	TOGGLE(n,pos);
	printf("after toggle the bit number =%d\n",n);
}
