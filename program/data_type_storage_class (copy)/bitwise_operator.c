#include<stdio.h>
int main()
{
	int a=12,b=25,c=10,d=-10;
	float f=5.5;
	//printf("float (a&f)=%d\n",a&f);//is only for understanding bitwise operator not work with float & double

	printf("BITWISE AND OPERATOR\n");

	printf("(a&b)=%d\n\n",a&b);//8

	printf("BITWISE OR OPERATOR\n");

	printf("(a|b)=%d\n\n",a|b);//29

	printf("BITWISE XOR OPERATOP\n");

	printf("(a^b)=%d\n\n",a^b);//21

	printf("BITWISE COMPLEMENT\n");

	printf("(~c)=%d\n",~c);//-11
	printf("(~d)=%d\n\n",~d);//9

	printf("BITWISE RIGHT SHIFT AND LEFT SHIFT\n");

	printf("right shift %d by 2 is %d\n",a,(a>>2));//(12>>2)=3

	printf("left shift %d by 2 is %d\n\n",b,(b<<2));//(25<<2)=100
}
