#include<stdio.h>
int main()
{
	int a=5,b=5,c=10,result;
	
	printf("5.LOGICAL OPERATORS\n");
	result =(a==b) && (c>b);
	printf("(a==b) && (c>b) is %d \n",result);


	result =(a==b) && (c<b);
	printf("(a==b) && (c<b) is %d \n",result);


	result =(a==b) || (c<b);
	printf("(a==b) || (c<b) is %d \n",result);

	result =(a!=b) || (c<b);
	printf("(a!=b) || (c<b) is %d \n",result);


	result =!(a!=b);
	printf("!(a!=b) is %d \n",result);


	result =!(a==b);
	printf("!(a==b) is %d \n\n",result);

	printf("6.CONDITIONAL OPERATOR\n");

	b=(a==5)?3:2;
	printf("b=%d\n",b);

	b=(a!=5)?3:2;
	printf("b=%d\n\n",b);

	printf("7.comma opearator\n");

	int p,q;
	p=10,20,30;    // (priority of = is more than ,)
	q=(10,20,30); //(priority of () is more than =)

	printf("p=%d ,q=%d\n\n",p,q);//p=10,q=30

	printf("8.SIZEOF OPERATOR\n");

	printf("char=%lu\n",sizeof(char));
	printf("int=%lu\n",sizeof(int));
	printf("double=%lu\n",sizeof(double));
	printf("float=%lu\n",sizeof(float));
	printf("short int=%lu\n",sizeof(short int));
	printf("long long int =%lu\n",sizeof(long long int));

}
