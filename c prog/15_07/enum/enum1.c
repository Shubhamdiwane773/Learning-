#include<stdio.h>
enum{jan,feb,march,april,may,jun,jul,aug,sep,oct,nov,dec}d;// here tag name is optional
int main()
{
	int i;
	d=jun;
	printf("d=%d\n",d);
	printf("size of (d):%ld\n",sizeof(d));
        for(i=jan;i<=dec;i++)
                printf("%d ",i);
}
