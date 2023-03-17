#include<stdio.h>
int main()
{
	int bnum=0,temp=0,base=1,rem=0,dec=0;
	printf("enter your binary\n");
	scanf("%d",&bnum);
	temp=bnum;
	while(temp>0)
	{
		rem=temp%10;
		dec=dec+rem*base;
		base=base*2;
		temp=temp/10;
	}
	printf("The decimal number is=%d\n",dec);
}
