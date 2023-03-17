#include<stdio.h>
enum week{jan=5,feb,march,april,may,jun,jul,aug,sep,oct,nov,dec};
int main()
{
      enum week day;
      day=jun;//10
      printf("day:%d\n",day);
      printf("day+1:%d\n",day+1);
      printf("sizeof (day): %ld\n",sizeof(day));// 4 bytes
        int i;
  	for(i=jan;i<=dec;i++)
              printf("%d ",i);// 5 6 7 8 9...16 
}

