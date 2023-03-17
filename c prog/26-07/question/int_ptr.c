#include<stdio.h>
int main()
{
	unsigned char arr[]={1,2,3,4};

	// By using integer pointer
	int *ptr=&arr;
	printf("address of arr=%p\n",arr);// base address
	printf("address=%p  value=%d\n",ptr,*ptr);// base address and value at that address but value is garbage
	printf("address=%p  value=%d\n",ptr,(char)*ptr);// by using type casting  we getting value at that address
	ptr=++ptr;// increating address is increamenting by 4 bytes
	printf("address=%p  value=%d\n",ptr,*ptr);// it going outside the array
	printf("address=%p  value=%d\n",ptr,(char)*ptr);
	ptr=++ptr;
	printf("address=%p value=%d\n",ptr,*ptr);
	printf("address=%p  value=%d\n",ptr,(char)*ptr);

	//By using char pointer
	char *str=arr;
	printf("addresss=%p value=%d\n",str,*str);
	str=++str;
	printf("address=%p  value=%d\n",str,*str);
	str=++str;
	printf("addrss=%p value=%d\n",str,*str);
}

