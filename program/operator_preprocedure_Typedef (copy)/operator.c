===================  OPERATORS ========================

Evaluate the expression in a step by step way based on operator precedence and associativity

1) printf("%d\n",1==5==5);
ANSWER : 1==5 is 0
Final Output 0

2) int i =0;
   printf("%d %d",i,i++);
ANSWER : 1,0
Associativity is right to left

3) int x=5;
   printf("%d %d %d\n",x++,x++,x++);
ANSWER: 
Associativity is right to left
	Final Output 7,6,5

4) int x=2;
   printf("%d   ",++x++);
   printf("%d\n",x++);

ANSWER : Compilation error

5) int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");
ANSWER : 1==1 is TRUE,

6) int i=5;
   i=i++ - --i + ++i;
ANSWER : i = 5 - 5 + 6 ;
i = 6

7) int a=7;
   a+=a+=a-=6;
   printf("%d\n",a);
ANSWER : 1) a-=6//a=a-6 // 7-6 = 1
	   2) a+=1// a=a+1//a=1+1 = 2
	   3)a+=2//a=a+2//a=2+2=4
	Final a= 4.

8) int x=10,y=5,p,q;
   p=x>9;
   q=p||(x=5,y=10);
   printf("%d %d %d\n",q,x,y);
ANSWER:
	 p =1
	 q = 1 || (x=5,y=10)
	 q =1
	final Output : 1 10 5	

9) int x=2,y=1;
   y+=x<<=2;
   printf("%d %d\n",x,y);
ANSWER:
	x=x<<2 // x=8;
	y+=8//y=y+8//y=1+8=9
	Final Output : 8 9

10) int x=2,y=4,z;
    z=y++*x++|y--;
    printf("%d\n",z);

ANSWER : z = 3 * 2 | 4;
	  z= 6|4
Final Output : 

11) int a=5,b=6,c=7,d;
    d=a&=b&=c&&a;
    printf("%d\n",d);
ANSWER:
	

12) int i=10;
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
    printf("%d\n",i);

ANSWER:
	First (10<10) fail So
	Final Output : 4

13) int a=10,b=20;
    a=(a>5||b=6?40:50);
    printf("%d\n",a);
ANSWER : 
	First check (a>5) true So it does not check b=6 true or false
	Final Output : 1

14) printf("%x\n",-1>>4);
    printf("%x\n",-1<<4);
ANSWER:
 	-1 = ffff ffff
	-1<<4 = ffff fff0
	-1>>4 = 
Final Output :
	
	ffff fff0
15) int x=7;
    x=(x<<=x%2);
    printf("%d\n",x);
ANSWER:
	x%2 =1
x<<=1//x=x<<1//x=14
Final Output :14

16) int a=2,b=5,c=1;
    printf("%d\n",(b>=a>=c?1:0));

ANSWER:
	c?1:0//--> 1
	a>=1//a=a>1(TRUE)//a=1;
	b>=1//b=b>1(TRUE)//b=1;
Final Output : 1
17) int a=5;
    a=a-~a +1;
    printf("%d\n",a);
ANSWER : 
	a=5
	~a=-6
	a=5-(-6)+1
	Final Ouput : 12.
18) a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(--c/3);
    printf("%d\n",x);
ANSWER:
	x= 0||2- 2/2 &&2*0
	x= 1-1&&0
	x = 0&&0
	Final Output : x=0
	  
19) a=10
    b = -5
    c = 2.5
    printf("%d %d",sizeof(a) + sizeof((++b) *c, b);  
ANSWER : 
	
20) int i=5;
    i=i++ - i
    printf("%d",i)
ANSWER:
	i = 5 - 6
Final Output : -1

========================================= PREPROCESSORS AND MACROS ===========================

1) What will be the output of the C program?
#include<stdio.h>
#define CONDITION(i)\
printf("preprocessor works\n");                         
int main()
{
	CONDITION(0);
	return 0;
}
ANSWER:
	preprocessor works
It just replace the code.

2) What will be the output of the C program?
#include<stdio.h>
# define loop while(true)
int main()
{
	loop;  
	printf("preprocessor-aptitude");
	return 0;
}
ANSWER:
	infinity because loop replace while(1);

3) What will be the output of the C program?
#include<stdio.h>
# define x --5
int main()
{
	printf("%d",x);
	return 0;
}
ANSWER:
 	--5 show error

4) What will be the output of the C program ?
#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;     
	a -= 3;
	printf("%d %d", sqr(a), z);
	return 0;
}
ANSWER:
	16 25
  z = 5*5;//z=25
	a=a-3;//a=6-3//a=3;
	sqa(3);
	++a * ++a;//sqa(a) = 16
Final Output : 16 25


5) What will be the output of the C program?
#include<stdio.h>                      
#define x 1+2
int main()
{
	int i;
	i = x * x * x;
	printf("%d",i);
}
ANSWER:
	1+2*1+2*1+2
	1+2+2+2
	Final Output : 7

6) What will be the output of the C program?
#include<stdio.h>
#define a =
int main()
{
	int num a 6;
	printf("%d",num);
	return 0;
}
ANSWER:
	6

7) What will be the output of the C program?
#include<stdio.h>
#define fun(x,y) x*y
int main()
{
	int x = 2, y = 1;
	printf("%d",fun(x + 2, y - 1));
	return 0;
}

ANSWER:
	2+2*1-1
	2+2-1
	Final Output: 3

8) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char DATE[15] = "Current Date";
	printf("%s\n", _DATE_ );
	return 0;
}
ANSWER:
	It prints today data

9) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",_TIME_);
	return 0;
}
ANSWER:
	It prints today time

10) What will be the output of the C program?
#include<stdio.h>
int main()
{	
	printf("Line :%d\n", _LINE_ );
	return 0;
}
ANSWER:
	It prints line number when _LINE_ mentioned

11) What will be the output of the C program?
#include<stdio.h>
#define  preprocessor_works(x, y)  \
	printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}
ANSWER:
	you and me are great!
	#x,#y make string

12) What will be the output of the C program?
#include<stdio.h>
# define puts  "%s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}
ANSWER:
	%s C preprocessor %s C preprocessor

13) What will be the output of the C program?
#include<stdio.h>
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)
int main(void) {
	int macro25 = 47;
	preprocessor(25);
	return 0;
}
ANSWER:
	macro25 = 47	
	#n converts to string
	macro##n it does string concaenation

14) What will be the output of the C program?
#include<stdio.h>
#include<string.h>
#define MACRO(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);
	printf("%s  ", MACRO(ptr));
	printf("%d", MACRO(num));
	return 0;
}
OUTPUT:
	MACRO(ptr)
	    ++ptr;//pointer value increased & it point next character
	MACRO(num)
	    ++num;//num=12;after ++num,num=13
Final Output:
	reprocessor 13

15) What will be the output of the C program?
#include<stdio.h>
#define i 10
int main()
{
	#define i 20
	printf("%d",i);
	return 0;
}
Answer: 	20 
	it show warning for redeclaration of "i" variable.

16) What will be the output of the C program?
#include<stdio.h>
#define clrscr() 50
int main()
{
	clrscr();
	printf("%d\n",clrscr());
	return 0;
}
ANSWER:
	50
	first clrscr is clear screen function .
	In printf clrscr is macro So it print 50.

17) What will be the output of the C program?
#include<stdio.h>
#define int char
main()
{
	int i=5;
	printf ("sizeof (i) =%d", sizeof (i));
}
ANSWER:
	1
	It prints character size

18) Write programs to understand the usage of below preprocessor directives.
#include, #if, #ifdef, #ifndef, #else, #elif, #endif, #define, #undef, #line, #error, and #pragma

#include<stdio.h>
#define ch char
#define OS 1
int main()
{
ch character = 'a';
printf("%c\n",character);


#ifndef OS
  #error printf("please define OS\n");
#endif
#if OS == 1
	printf("Android OS\n");
#elif OS ==2
	printf("Windows OS\n");
#elif OS ==3
	printf("Linux OS\n");
#else
      printf("Invalid Number");
#endif
printf("%d",_LINE_);
#line 333
printf("hello1\n");
printf("hello22\n");
printf("%d",_LINE_);
return 0;
}


===================================== TYPEDEF =========================================

1) In the following code, the P2 is Integer Pointer or Integer?
typedef int *ptr;
ptr p1, p2;

ANSWER:
	Integer pointer

because int* p1,p2 is replaced by ptr p1,p2.

2)  In the following code what is 'P'?
typedef char *charp;
const charp P;

ANSWER:
	constant character
because const char* p replace const char P;

3) What is x in the following program?
#include<stdio.h>
int main()
{
    typedef char (*(*arrfptr[3])())[10];
    arrfptr x;
    return 0;
}
ANSWER:


4) What is apfArithmatics in the below statement?
typedef int (*apfArithmatics[3])(int,int); 
ANSWER:
	arrays of function pointer

5) What is pf in the below statement?
typedef int (*pf)(int);
ANSWER:
	pointer to function

6) What do the following declarations mean?
typedef char *pc;
typedef pc fpc();
typedef fpc *pfpc;
typedef pfpc fpfpc();
typedef fpfpc *pfpfpc;
pfpfpc a[N];

ANSWER:

typedef char *pc;  ----- character pointer
typedef pc fpc();  ------  char* fpc();//function declaration 
typedef fpc *pfpc;
typedef pfpc fpfpc();
typedef fpfpc *pfpfpc;
pfpfpc a[N];

7) Write few programs using typedef on structures and enums.

#include<stdio.h>
typedef struct program
{
	int data;
}stu;
enum boolean
{
	start,
	one,
	end =7
};
int main()
{
	int i;
	stu a;
	a.data =0;
	for(i=start;i<end;i++)
	{
	   a.data += i;
	}
	printf("Sum :%d\n",a.data);
return 0;
}
