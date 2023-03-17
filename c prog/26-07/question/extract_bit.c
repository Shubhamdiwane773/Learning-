#include<stdio.h>
#define extract(num,bit,pos) (((1 << bit) - 1) & (num >> (pos - 1)))
int main()
{
	int num=0xab;
	int pos=2,bit=3,i;
        i=extract(num,bit,pos);
	printf("%d ",i);

}
/*
   num=0xab ,pos=2,bit=3;
      binary: 1010 1011
      
      step1:-((1<<bit)-1)
              0000 0001---- 1 binary
	<<3   0000 1000 ---(1<<bit)
	-------------------------------
	           8
		  (8-1)=7

     step2:-  (num>>(pos-1))
                pos-1:   (2-1)=1
		(num>>1)
	        1010 1011  
           >>1  0101 0101
	   ------------------
	          85

     step3:- (((1 << bit) - 1) & (num >> (pos - 1)))
              (7&85)
	      
	      0000 0111
	    & 
	      0101 0101
	 ---------------------
	      0000 0101          =5
  o/p:-5
 */

