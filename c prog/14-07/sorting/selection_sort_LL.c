#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void display();
void add_beg(int data);
void add_last(int data);
void create_list();
void sort();
struct node
{
	int data;
	struct node *link;
};
struct node*head=NULL;
int main()
{
	int choice,i,data;
	while(1)
	{
		printf("\nenter the location where you want to add element and display\n");
		printf("1.create_list 2.add_beggining ,3.add_last,4.display 5.sort 6.exit()\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create_list();
				break;
			case 2:	printf("enter the element\n");
				scanf("%d",&data);
				add_beg(data);
				break;
			case 3: printf("enter the element\n");
			       	scanf("%d",&data);
				add_last(data);
				break;
			case 4: display();
				break;
			case 5: sort();
				break;
			case 6:exit(0);
			       break;
			default: printf("enter corect choice\n");
				 break;
		}
	}
}
void create_list()
{
	int data,i,n;
	printf("enter the node how much you want create\n");
	scanf("%d",&n);
	if(head!=NULL)
		n++;
	if(n==0)
		main();
	if(head==NULL)
	{
		printf("enter the element which you want to add\n");
		scanf("%d",&data);
		add_beg(data);
	}
	for(i=1;i<n;i++)
	{
		printf("enter element which you want to add\n");
		scanf("%d",&data);
		add_last(data);
	}
}
void add_beg(int data)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->link=NULL;
	if(head==NULL)
		head=new;
	else
	{
		new->link=head;
		head=new;
	}
}
void add_last(int data)
{
	struct node *ptr,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->link!=NULL)
			ptr=ptr->link;
		ptr->link=temp;
	}
}
void display()
{
	struct node *p;
	p=head;
	if(head==NULL)
	{
		printf("list is empty\n");
		exit(0);
	}
	else
	{
		while(p!=NULL)
		{
			printf("%d ",p->data);
			p=p->link;
		}
	}
	printf("\n");
}
void sort()
{
	struct node *p,*q;
	int temp;
	printf("It showing selection sort technique:\n");
        printf("In 1st iteration smallest element move to 1st position \n In 2nd iteration 2nd smallest like that\n");

	for(p=head;p->link!=NULL;p=p->link)
	{
		display();// it shwoing step by step modification;
		for(q=p->link;q!=NULL;q=q->link)
		{
			if(p->data > q->data)
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}
	printf("list is sorted:\n");
	display();
}
