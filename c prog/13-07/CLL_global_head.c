#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
struct node *head=NULL;
void create_list();
void add_beg(int data);
void add_last(int data);
void add_empty(int data);
void display();
void delete(int item);
int main()
{
	int data,pos,item,choice;
	while(1)
	{
		printf("\n........ enter your choice ........\n");
		printf("1.create_list 2.add_beg 3.add_last 4.add_empty 5.display 6.delete 7.exit \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create_list();
				break;
			case 2: printf("enter element which u want to add\n");
				scanf("%d",&data);
				add_empty(data);
				break;
			case 3: printf("enter element which u want to add\n");
				scanf("%d",&data);
				add_beg(data);
				break;
			case 4: printf("enter element which u want to add\n");
				scanf("%d",&data);
				add_last(data);
				break;
			case 5: display();
				break;
			case 6: printf("enter the element which u want to delte\n");
				scanf("%d",&item);
				delete(item);
				break;
			case 7: exit(1);
			default: printf("enter correct choice\n");
				 break;
		}
	}
}
void create_list()
{
	int i,n,data;
	printf("enter number of node u want to create\n");
	scanf("%d",&n);
	if(n==0)
		main();
	head=NULL;
	printf("enter the element which u want to add\n");
	scanf("%d",&data);
	add_empty(data);
	for(i=2;i<=n;i++)
	{
		printf("enter the element which u want to add\n");
		scanf("%d",&data);
		add_last(data);
	}
}
void add_empty(int data)
{
	struct node *new=NULL;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	head=new;
	head->link=head;
}
void add_beg(int data)
{
	struct node *new=NULL;
	new=(struct node*) malloc(sizeof(struct node));
	new->data=data;
	new->link=head->link;
	head->link=new;
}
void add_last(int data)
{
	struct node *new=NULL;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->link=head->link;
	head->link=new;
}
void display()
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr=NULL;
	ptr=head->link;
	do
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}while(ptr!=head->link);
	printf("\n");
}
void add_after(int data,int item)
{
	struct node *temp,*ptr;
	ptr=head->link;
	do
	{
		if(ptr->data==item)
		{
			temp=(struct node*)malloc(sizeof(struct node));
			temp->data=data;
			temp->link=ptr->link;
			if(ptr==head)
				head=temp;
			main();
		}
		ptr=ptr->link;
	}while(ptr!=head->link);
	printf("%d element is not present in the list\n",item);
}
void delete(int item)
{
	struct node *temp,*ptr;
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	if(head->link==head && head->data==item)
	{
		temp=head;
		head=NULL;
		free(temp);
		printf("%d element is delete\n",item);
		main();
	}
	if(head->link->data==item)
	{
		temp=head->link;
		head->link=temp->link;
		free(temp);
		printf("%d element is delete\n",item);
		main();
	}
	ptr=head->link;
	while(ptr->link!=head)
	{
		if(ptr->link->data==item)
		{
			temp=ptr->link;
			ptr->link=temp->link;
			free(temp);
			printf("%d element is delete\n",item);
			main();
		}
		ptr=ptr->link;
	}
	if(head->data=item)
	{
		temp=head;
		ptr->link=head->link;
		head=ptr;
		free(temp);
		printf("%d element is delete\n",item);
		main();
	}
	printf("%d element is not found\n",item);
}
