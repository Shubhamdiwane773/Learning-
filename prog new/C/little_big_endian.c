#include <stdio.h>

int main()
{
   int x=0x12345678;//78563412
   int a=((x>>24)&0x000000ff)|((x<<24)&0xff000000)|((x>>8)&0x0000ff00)|((x<<8)&0x00ff0000);
   printf("%x",a);

    return 0;
}
