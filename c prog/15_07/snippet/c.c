#include<stdio.h>
int main()
{
	int *i, *j;
	i = 0x12345678;// random memory location
	j = 0x11111111;
	j++;// it go to next location
	printf("%d, %d", *i, j);// segmentation fault because there is no data in that memroy location
}
