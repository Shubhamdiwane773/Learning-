#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL;
void create_list();
void add_empty(int data);
void add_beg(int data);
void add_last(int data);
void display();
void count();
void search(int data);
void add_after(int data,int item);
void add_before(int data,int item);
void delete(int item);
void reverse();
int main()
{
	int data,item,pos,choice;
	while(1)
	{
		printf("enter your choice\n");
		printf("1.create list 2.add_empty 3.add_beg 4.add_last  5.display 6.count 7.search 8.add_after 9.add_before 10.delete 11.reverse 12.exit\n");
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
			case 6: count();
				break;
			case 7: printf("enter the element which u want to search\n");
				scanf("%d",&item);
				search(item);
				break;
			case 8: printf("enter the element which u want to add\n");
				scanf("%d",&data);
				printf("enter element after u want to add new element\n");
				scanf("%d",&item);
				add_after(data,item);
				break;
			case 9: printf("enter the element which u want to add\n");
				scanf("%d",&data);
				printf("enter the element before u want to add\n");
				scanf("%d",&item);
				add_before(data,item);
				break;
			case 10: printf("enter the element which u want to delete\n");
				 scanf("%d",&item);
				 delete(item);
				 break;
			case 11: reverse();
				 break;
			case 12: exit(1);
			default: printf("enter correct choice\n");
				 break;
		}
	}
}
void create_list()
{
	int data,i,n;
	printf("enter number of node u want to create\n");
	scanf("%d",&n);
	if(n==0)
		main();
	printf("enter the element  which u want to add\n");
	scanf("%d",&data);
	add_empty(data);
	for(i=1;i<n;i++)
	{
		printf("enter the element which u want to add\n");
		scanf("%d",&data);
		add_last(data);
	}
}
void add_empty(int data)
{
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	new->data=data;
	new->prev=NULL;
	new->next=NULL;
	head=new;
}
void add_beg(int data)
{
	if(head==NULL)
	{
		add_empty(data);
		main();
	}
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	new->data=data;
	new->prev=NULL;
	new->next=head;
	head->prev=new;
	head=new;
}
void add_last(int data)
{
	if(head==NULL)
	{
		add_empty(data);
		main();
	}
	struct node *new=NULL,*ptr=head;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	while(ptr->next!=NULL)
		ptr=ptr->next;
	new->prev=ptr;
	new->next=NULL;
	ptr->next=new;
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
void count()
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr=head;
	int cnt=0;
	while(ptr!=NULL)
	{
		cnt++;
		ptr=ptr->next;
	}
	printf("%d node present in the list\n",cnt);
}
void search(int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr=head;
	int cnt=0;
	while(ptr!=NULL)
	{
		cnt++;
		if(ptr->data==item)
		{
			printf("%d element is present in the list at node %d\n",item,cnt);
			main();
		}
		ptr=ptr->next;
	}
	printf("%d element is not present the list\n",item);
}
void add_after(int data,int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr,*new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	new->data=data;
	ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data==item)
		{
			new->prev=ptr;
			new->next=ptr->next;
			if(ptr->next!=NULL)
				ptr->next->prev=new;
			ptr->next=new;
			main();
		}
		ptr=ptr->next;
	}
	printf("%d not present in the list\n",item);
}
void add_before(int data,int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *new=NULL,*ptr=NULL;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	if(head->data==item)
	{
		new->prev=NULL;
		new->next=head;
		head->prev=new;
		head=new;
		main();
	}
	ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data==item)
		{
			new->prev=ptr->prev;
			new->next=ptr;
			ptr->prev->next=new;
			ptr->prev=new;
			main();
		}
		ptr=ptr->next;
	}
	printf("%d element is not present in the list\n",item);
}
void delete(int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *temp=NULL,*ptr=NULL;
	if(head->next==NULL)
	{
		if(head->data==item)
		{
			temp=head;
			head=NULL;
			free(temp);
			main();
		}
		else
		{
			printf("%d element is not present \n",item);
			main();
		}
	}

	if(head->data==item)
	{
		temp=head;
		head=head->next;
		head->prev=NULL;
		free(temp);
		main();
	}
	ptr=head;
	while(ptr->next!=NULL)
	{
		if(ptr->data==item)
		{
			ptr->prev->next=ptr->next;
			ptr->next->prev=ptr->prev;
			free(ptr);
			main();
		}
		ptr=ptr->next;
	}
	if(ptr->data==item)
	{
		ptr->prev->next=NULL;
		free(ptr);
		main();
	}
	printf("%d element not present in the list\n",item);
}
void reverse()
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	if(head->next==NULL)
	{
		printf("only one  node in the list\n");
		main();
	}
	struct node *p1,*p2;
	p1=head;
	p2=p1->next;
	p1->next=NULL;
	p1->prev=p2;
	while(p2!=NULL)
	{
		p2->prev=p2->next;
		p2->next=p1;
		p1=p2;
		p2=p2->prev;
	}
	head=p1;
	printf("list is reverse\n");
	main();
}
