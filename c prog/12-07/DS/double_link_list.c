#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
void display();
void add_beg(int data);
void add_last(int data);
void add_empty(int data);
struct node *head=NULL;
int main()
{
	add_empty(1);
	add_beg(11);
	add_last(22);
	add_last(33);
	add_beg(44);
	display();
}
void add_beg(int data)
{
	if(head==NULL)
		add_empty(data);
	struct node*new=NULL;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->prev=NULL;
	new->next=head;
	head=new;
		
}
void add_empty(int data)
{
	struct node *new=NULL;
	new=(struct  node*)malloc(sizeof(struct node));
	new->data=data;
	new->next=NULL;
	new->prev=NULL;
	head=new;
}
void add_last(int data)
{
	if(head==NULL)
		add_empty(data);
	struct node *new=NULL,*ptr=head;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	while(ptr->next!=NULL)
		ptr=ptr->next;
	ptr->next=new;
	new->prev=ptr;
	new->next=NULL;
}
void display()
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
