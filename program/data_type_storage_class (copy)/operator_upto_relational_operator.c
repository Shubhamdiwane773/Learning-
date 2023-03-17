#include<stdio.h>
int main()
{
	int a=9,b=4,c;
	printf("a=%d b=%d\n\n",a,b);
	printf("1.ARITHMATIC OPERATORS:-\n");

	c=a+b;
	printf("addition operator (a+b)=%d\n",c);

	c=a-b;
	printf("substraction operator (a-b)=%d\n",c);
	
	c=a*b;
	printf("multiplication operator (a*b)=%d\n",c);

	c=a/b;
	printf("division opearator (a/b)=%d\n",c);

	c=a%b;
	printf("reminder opearator =%d\n\n",c);

	printf("2.ASSINGMENT OPERATOR\n");
	c=a;
	b=a+b;
	printf("c=%d\n b=%d\n\n",c,b);

	printf("3.INCREAMENT AND DECREMENT OPEARATOR\n");

	printf("pre_increment (++a)=%d\n post_increment (b++)=%d b=%d\n",++a,b++,b);

	printf("pre_decrement (--a)=%d\n post_decrement (b--)=%d b=%d\n\n",--a,b--,b);

	printf("4.RELATIONAL OPEARATOR\n");
	a=5,b=5,c=10; 
	printf("a=%d b=%d c=%d\n",a,b,c);

	printf("%d==%d is %d \n",a,b,a==b);
	printf("%d==%d is %d \n",a,c,a==c);
	printf("%d>%d is %d \n",a,b,a>b);
	printf("%d>%d is %d \n",a,c,a>c);
	
	printf("%d<%d is %d \n",a,b,a<b);
	printf("%d<%d is %d \n",a,c,a<c);
	printf("%d!=%d is %d \n",a,b,a!=b);
	printf("%d!=%d is %d \n",a,c,a!=c);

	printf("%d>=%d is %d \n",a,b,a>=b);
	printf("%d>=%d is %d \n",a,c,a>=c);
	printf("%d<=%d is %d \n",a,b,a<=b);
	printf("%d<=%d is %d \n",a,c,a<=c);
}
