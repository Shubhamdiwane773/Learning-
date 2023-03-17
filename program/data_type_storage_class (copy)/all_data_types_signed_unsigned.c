#include<stdio.h>
#include<float.h>
void UnsignedRange(int bytes)
{
	int bits =8*bytes;
	unsigned long long to =(1LLU<<(bits-1))+((1LL<<(bits-1))-1);;

	printf("0 to %llu\n\n",to);

}
void SignedRange(int bytes)
{
int bits =8*bytes;
long long from=-(1LL<<(bits-1));
long long to=(1LL<<(bits-1))-1;
printf("%lld to %lld\n\n",from,to);
}
	
int main()
{
	signed char a ='s';
	unsigned char b ='h';
	signed short int c =5;
	unsigned short int d =100;
	signed int e =10;
	unsigned int f =50;
	signed long int g=33;
	unsigned long int h=22;
	float i=3.14;
	double j=144.5;
	long double k=166.5;

	printf("signed char size is=%ld\n range of signed char=",sizeof(signed char));
	SignedRange(sizeof(char));
	printf("unsigend char size is=%ld\n range of unsigned char=",sizeof(unsigned char));
	UnsignedRange(sizeof(unsigned char));

	printf("sigend short int size is=%ld\n range of signed short int =",sizeof(signed short int));
	SignedRange(sizeof(short int));
	printf("unsigned short int size is=%ld\n range of unsigned short int=",sizeof(unsigned short int));
	UnsignedRange(sizeof(unsigned short int));

	printf("signed int size is =%ld\n range of signed int =",sizeof(signed int));
	SignedRange(sizeof(int));
	printf("unsigned int size is =%ld\n range of unsigned int=",sizeof(unsigned int));
	UnsignedRange(sizeof(unsigned int));
	
	printf("signed long int size =%ld\n range of signed long int=",sizeof(signed long int));
	SignedRange(sizeof(long int));
	printf("unsigned long int size=%ld\n range of unsigned long int=",sizeof(unsigned long int));
	UnsignedRange(sizeof(unsigned long int));

	printf("float size is =%ld\n",sizeof(float));
	printf("range of float %e to %e\n",FLT_MIN,FLT_MAX);

	printf("double size is =%ld\n",sizeof(double));
	printf("range of double %e to %e\n ",DBL_MIN,DBL_MAX);

	printf("long double is=%ld\n",sizeof(long double));
	printf("range of long double %Le to %Le\n",LDBL_MIN,LDBL_MAX);
}
