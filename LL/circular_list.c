#include<stdio.h>
#include<stdlib.h>
typedef struct cll
{
    char data;
    struct cll *next;
}cll;

void createnode(cll **head,cll **latest,char data1)
{
    cll *new = NULL;
    new = (cll *)malloc(sizeof(cll));
    new->data=data1;
    new->next = *head;
    if(*head==NULL)
        *head=new;
    else
        (*latest)->next=new;
    *latest=new;
}
void traverse(cll **head)
{
    cll *temp = *head;
    while(temp->next!=*head)
    {
        printf("Vowel : %c\n",temp->data);
        temp=temp->next;
    }
    printf("Vowel : %c\n",temp->data);
}
int main()
{
      cll *head=NULL,*latest=NULL;
      createnode(&head,&latest,'a');
      createnode(&head,&latest,'e');
      createnode(&head,&latest,'i');
      createnode(&head,&latest,'o');
      createnode(&head,&latest,'u');
      traverse(&head);
   return 0;
}
