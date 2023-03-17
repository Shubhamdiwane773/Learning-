#include <stdio.h>
#include <stdlib.h>

typedef struct sll
{
   int ndata;
   struct sll *link;
}sll;

sll *createnode (sll **new,int data)
{
    *new = (sll *)malloc(sizeof(sll));
    if (*new == NULL)
    {
        printf ("Memory not sufficient\n");
        exit (0);
    }
    (*new)->ndata = data;
    (*new)->link = NULL;
     return *new;
}

void insertnode (sll **head,sll **tail,int data)
{
     sll *new = NULL;
     new = createnode (&new,data);
     if (*head == NULL)
          *head = new;
     else
          (*tail)->link = new;
     *tail = new;
     return ;
}

void display(sll **head)
{
   sll *temp = *head;
   while (temp != NULL)
   {
     printf("%d\t",temp->ndata);
     temp = temp->link;
   }
   printf("\n");
   return ;
}

int main(void)
{
  sll *head = NULL,*tail = NULL;
  int n;
  insertnode (&head,&tail,100);
  insertnode (&head,&tail,200);
  insertnode (&head,&tail,300);
  display(&head);
  
  return 0;
}
