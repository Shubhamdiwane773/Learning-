#include <stdio.h>

int main()
{
   int x=0x12345678;
   int a=((x>>20)&0x000000f0)|((x<<20)&0x0f000000)|((x)&0xf0ffff0f);
   printf("%x",a);

    return 0;
}
