#include<stdio.h>
int main()
{
//............ Method 1.................

	int b=0x12345678;
	char *ptr=(char*)&b;
	if(*ptr==0x78)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");

//............. Method 2 .................

	//MSB         LSB
        int a=1;//00  00  00  01
	char *p=(char *)&a;
	if(*p==1)//little endian= 01   00   00   00
		 //		  201  202  203  204
	printf("Little Enidan\n");
	else	
		//BIg Endian = 00   00   00   01
		//	       201  202  203  204	 
	printf("Big Endian\n");
	return 0;
}
