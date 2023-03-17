#include<stdio.h>
#include<stdlib.h> 	// For malloc
struct student{
    char name[5]; 	// First name
    int age;      		//years
    int height;   		//cm
    };

int main()
{
   struct student *ptr;
   ptr=(struct student*)malloc(sizeof(struct student)); 	// Allocate memory for ptr
   printf("\n Enter name: ");
   scanf("%[^\n]s",ptr->name); 				 // ^\n for enter data after space
   printf(" Entered name: %s \n\n",ptr->name);
   free(ptr);
   return 0;
}

