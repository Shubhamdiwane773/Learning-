#include<stdio.h>
int main()
{
	int r;
	float PI=3.14,area,ci;

	printf("enter the radius\n");
	scanf("%d",&r);

	area=PI*r*r;
	ci=2*PI*r;

	printf("area of circle is =%f\n",area);
	printf("circumference of circle is =%f\n",ci);
}
