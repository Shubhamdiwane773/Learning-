#include<stdio.h>
int a = 10;
int sum(int num1, int num2) 
{
    static int a = 0;
    printf("a %d\n",a);// 1st: 0 2nd:8
    return (a=num1+num2);
}
int main()
{
    printf("a %d\n",a);// 10 'a' because is global there is no any 'a' local variable up to now
    int a = 20;
    printf("a %d\n",a);//20 because here 'a' is local variable
    sum(5,3);
    printf("a %d\n",a);// 20 because is local
    sum(6,9);
    printf("a %d\n",a);// 20 because is local
}
