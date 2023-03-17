#include<stdio.h>
#define SWAP(X) (X=(X<<4)|(X>>4))

int main()
{
unsigned char x=100;
printf("befor swap %d\n",x);
SWAP(x);
printf("after swap %d",x);
return 0;
}
