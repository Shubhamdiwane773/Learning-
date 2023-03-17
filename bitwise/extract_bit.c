#include<stdio.h>
#define extract(num,bit,pos) (((1 << bit) - 1) & (num >> (pos - 1)))
int main()
{
	int num=0xab;
	int pos=2,bit=3,i;
        i=extract(num,bit,pos);
	printf("%d ",i);

}
