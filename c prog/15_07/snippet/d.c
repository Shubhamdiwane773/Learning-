#include<stdio.h>
int main()
{
	int a;
	char *x;
	x = (char *) &a;
	a = 512;
	x[0] = 5;
	printf("a=%d\n",a);//517
        printf("x[0]=%d\n",x[0]);//5
        printf("x[1]=%d\n",x[1]);//2
        printf("x[2]=%d\n",x[2]);//0
        printf("x[3]=%d\n",x[3]);//0

	x[1] = 4;
	printf("a=%d\n",a);//1029
        printf("x[0]=%d\n",x[0]);//5
        printf("x[1]=%d\n",x[1]);//4
        printf("x[2]=%d\n",x[2]);//0
        printf("x[3]=%d\n",x[3]);//0

	x[2] = 2;
	printf("a=%d\n",a);//132101
        printf("x[0]=%d\n",x[0]);//5
        printf("x[1]=%d\n",x[1]);//4
        printf("x[2]=%d\n",x[2]);//2
        printf("x[3]=%d\n",x[3]);//0

	x[3] = 1;
	printf("a=%d\n",a);//16909317
	printf("x[0]=%d\n",x[0]);//5
	printf("x[1]=%d\n",x[1]);//4
        printf("x[2]=%d\n",x[2]);//2
        printf("x[3]=%d\n",x[3]);//1

}
/*     a=512;
       binary of a:
       00000000 00000000 00000010 00000000  =512
       4byte   3rd byte  2nd byte  1st byte
       x[3]     x[2]      x[1]     x[0]  

       changing:-
       x[0]=5;
       binary of 5: 0000 0101
       then bianry of a;
       00000000 00000000 00000010 00000101  =517
       
       x[1]=4;
       binary of 4: 0000 0100
       then binary of a: 
       00000000 00000000 00000110 00000101 =1029
       
       x[2]=2;
       binary of 2: 0000 0010
       then binary of a:
       00000000 00000010 00000110 00000101 =131101
       
       x[3]=1;
       binary of 1: 0000 0001
       binary of a:
       00000001 00000010 00000110 00000101 =16909317
*/
