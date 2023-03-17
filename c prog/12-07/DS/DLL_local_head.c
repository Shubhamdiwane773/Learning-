#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node * create_list(struct node *head);
struct node * add_empty(struct node *head,int data);
struct node * add_beg(struct node *head,int data);
struct node * add_last(struct node *head,int data);
void display(struct node *head);
void count(struct node *head);
void search(struct node *head,int data);
struct node * add_after(struct node *head,int data,int item);
struct node * add_before(struct node *head,int data,int item);
struct node *delete(struct node *head,int item);
struct node * reverse(struct node *head);
int main()
{
	int data,item,pos,choice;
	struct node *head=NULL;
	while(1)
	{
		printf("enter your choice\n");
		printf("1.create list 2.add_empty 3.add_beg 4.add_last  5.display 6.count 7.search 8.add_after 9.add_before 10.delete 11.reverse 12.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=create_list(head);
				break;
			case 2: printf("enter element which u want to add\n");
				scanf("%d",&data);
				head=add_empty(head,data);
				break;
			case 3: printf("enter element which u want to add\n");
				scanf("%d",&data);
				head=add_beg(head,data);
				break;
			case 4: printf("enter element which u want to add\n");
				scanf("%d",&data);
				head=add_last(head,data);
				break;
			case 5: display(head);
				break;
			case 6: count(head);
				break;
			case 7: printf("enter the element which u want to search\n");
				scanf("%d",&item);
				search(head,item);
				break;
			case 8: printf("enter the element which u want to add\n");
				scanf("%d",&data);
				printf("enter element after u want to add new element\n");
				scanf("%d",&item);
				head=add_after(head,data,item);
				break;
			case 9: printf("enter the element which u want to add\n");
				scanf("%d",&data);
				printf("enter the element before u want to add\n");
				scanf("%d",&item);
				head=add_before(head,data,item);
				break;
			case 10: printf("enter the element which u want to delete\n");
				 scanf("%d",&item);
				head= delete(head,item);
				 break;
			case 11: head=reverse(head);
				 break;
			case 12: exit(1);
			default: printf("enter correct choice\n");
				 break;
		}
	}
}
struct node *create_list(struct node *head)
{
	int data,i,n;
	printf("enter number of node u want to create\n");
	scanf("%d",&n);
	head=NULL;
	if(n==0)
		return head;
	printf("enter the element  which u want to add\n");
	scanf("%d",&data);
	head=add_empty(head,data);
	for(i=2;i<=n;i++)
	{
		printf("enter the element which u want to add\n");
		scanf("%d",&data);
		head=add_last(head,data);
	}
	return head;
}
struct node * add_empty(struct node *head,int data)
{
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	new->data=data;
	new->prev=NULL;
	new->next=NULL;
	head=new;
	return head;
}
struct node *add_beg(struct node *head,int data)
{
	if(head==NULL)
	{
		head=add_empty(head,data);
		return head;
	}
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	new->data=data;
	new->prev=NULL;
	new->next=head;
	head=new;
	return head;
}
struct node * add_last(struct node *head,int data)
{
	if(head==NULL)
	{
		head=add_empty(head,data);
		return head;
	}
	struct node *new=NULL,*ptr=head;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	while(ptr->next!=NULL)
		ptr=ptr->next;
	new->prev=ptr;
	new->next=NULL;
	ptr->next=new;
	return head;
}
void display(struct node *head)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void count(struct node *head)
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
void search(struct node *head,int item)
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
struct node * add_after(struct node *head,int data,int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return head;
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
			return head;
		}
		ptr=ptr->next;
	}
	printf("%d not present in the list\n",item);
	return head;
}
struct node* add_before(struct node *head,int data,int item)
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
		return head;
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
			return head;
		}
		ptr=ptr->next;
	}
	printf("%d element is not present in the list\n",item);
}
struct node * delete(struct node *head,int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return head;
	}
	struct node *temp=NULL,*ptr=NULL;
	if(head->next==NULL)
	{
		if(head->data==item)
		{
			temp=head;
			head=NULL;
			free(temp);
			return temp;
		}
		else
		{
			printf("%d element is not found\n",item);
			return head;
		}
	}
	if(head->data==item)
	{
		temp=head;
		head=head->next;
		head->prev=NULL;
		free(temp);
		return head;
	}
	ptr=head->next;
	while(ptr->next!=NULL)
	{
		if(ptr->data==item)
		{
			ptr->prev->next=ptr->next;
			ptr->next->prev=ptr->prev;
			free(ptr);
			return head;
		}
		ptr=ptr->next;
	}
	if(ptr->data==item)
	{
		ptr->prev->next=NULL;
		free(ptr);
		return head;
	}
	printf("%d element not present in the list\n",item);
}
struct node * reverse(struct node *head)
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
	return head;
}
