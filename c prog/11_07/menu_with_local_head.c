#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *create_list(struct node *head);
struct node *add_beg(struct node *head,int data);
struct node *add_last(struct node *head,int data);
void display(struct node *head);
struct node *add_after(struct node *head,int data,int item);
struct node *add_before(struct node *head,int data,int item);
void middle_element(struct node *head);
struct node *delete(struct node *head,int item);
struct node *add_at_position(struct node *head,int data,int pos);
void search(struct node *head,int item);
void count(struct  node *head);
struct node *reverse(struct node *head);
int main()
{
	struct node *head=NULL;

	int choice,data,item,pos;
	while(1)
	{
		printf("enter your choice\n");
		printf("1.create_list 2.add_beg 3.add_last 4.display 5.add_after 6.add_before 7.middle_element 8.delete 9.add_at_position 10.search element 11.count_node 12.reverse 13.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=create_list(head);
				break;
			case 2: printf("enter element which you want to add\n");
				scanf("%d",&data);
				head=add_beg(head,data);
				break;
			case 3: printf("enter element which you want to add\n");
				scanf("%d",&data);
				head=add_last(head,data);
				break;
			case 4: display(head);
				break;
			case 5: printf("enter element which you want to add\n");
				scanf("%d",&data);
				printf("enter element after you want to add new element\n");
				scanf("%d",&item);
				head=add_after(head,data,item);
				break;
			case 6: printf("enter element which you want to add\n");
				scanf("%d",&data);
				printf("enter element before you want to add new element\n");
				scanf("%d",&item);
				head=add_before(head,data,item);
				break;
			case 7: middle_element(head);
				break;
			case 8: printf("enter enter which you want to delete\n");
				scanf("%d",&item);
				head=delete(head,item);
				break;
			case 9: printf("enter element which you want to add\n");
				scanf("%d",&data);
				printf("enter the position where you want add new element\n");
				scanf("%d",&pos);
				head=add_at_position(head,data,pos);
				break;
			case 10:printf("enter element which you want to search in the list\n");
				scanf("%d",&item);
				search(head,item);
				break;
			case 11: count(head);
				 break;
			case 12:head=reverse(head);
				break;
			case 13: exit(1);
			default: printf("enter correct choice\n");
		}
	}
}
void display(struct node *head)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct node *ptr;
	ptr=head;
	printf("list in: \n");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
	printf("\n");
}
struct node *add_beg(struct node *head,int data)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	if(head==NULL)
		head=new;
	else
	{
		new->link=head;
		head=new;
	}
	return head;
}
struct node *add_last(struct node *head,int data)
{
	struct node *new,*ptr=NULL;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	if(head==NULL)
		head=new;
	ptr=head;
	while(ptr->link!=NULL)
		ptr=ptr->link;
	ptr->link=new;
	return head;
}
struct node *create_list(struct node *head)
{
	int i,data,n;
	printf("enter number of node you want to create\n");
	scanf("%d",&n);
	if(n==0)
		return head;
	printf("enter element which you want to add\n");
	scanf("%d",&data);
	head=add_beg(head,data);
	for(i=1;i<n;i++)
	{
		printf("enter element which you want to add\n");
		scanf("%d",&data);
		head=add_last(head,data);
	}
	return head;
}
struct node *add_after(struct node *head,int data,int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return head;
	}
	struct node *ptr=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data==item)
		{
			struct node *temp=NULL;
			temp=(struct node *)malloc (sizeof(struct node *));
			temp->data=data;
			temp->link=ptr->link;
			ptr->link=temp;
			return head;
		}
		ptr=ptr->link;
	}
	printf("%d elment is not present in the list\n",item);
}
struct node *add_before(struct node *head,int data, int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return head;
	}
	struct node *ptr=NULL,*temp=NULL;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	if(head->data==item)
	{
		temp->link=head;
		head=temp;
		return head;
	}
	ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->link->data==item)
		{
			temp->link=ptr->link;
			ptr->link=temp;
			return head;
		}
		ptr=ptr->link;
	}
}
void middle_element(struct node *head)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	if(head->link==NULL)
	{
		printf("only one element present in the list\n");
		main();
	}
	struct node *sptr=head,*fptr=head;
	while(fptr!=NULL && fptr->link!=NULL)
	{
		sptr=sptr->link;
		fptr=fptr->link->link;
	}
	printf("The middle element is %d\n",sptr->data);
}
struct node *delete(struct node *head,int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return head;
	}
	struct node *ptr=head,*temp=NULL;
	if(head->data==item)
	{
		temp=head;
		head=head->link;
		free(temp);
		return head;
	}
	while(ptr->link!=NULL)
	{
		if(ptr->link->data==item)
		{
			temp=ptr->link;
			ptr->link=temp->link;
			free(temp);
			return head;
		}
		ptr=ptr->link;
	}
	printf("%d element is not  present in the list\n",item);
}
struct node *add_at_position(struct node *head,int data,int pos)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return head;
	}
	struct node *ptr=head,*temp=NULL;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	if(pos==1)
	{
		temp->link=head;
		head=temp;
		return head;
	}
	int cnt=1;
	while(ptr->link!=NULL)
	{
		cnt++;
		if(cnt==pos)
		{
			temp->link=ptr->link;
	         	ptr->link=temp;
			printf("element added\n");
			return head;
		}
		ptr=ptr->link;
	}
	printf("%d position is not present in the list\n",pos);
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
		ptr=ptr->link;
	}
	printf("%d node  is present in the list\n",cnt);
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
			printf("The %d element is found in the list at %d node\n",item ,cnt);
			
		}
		ptr=ptr->link;
	}
}
struct node *reverse(struct node *head)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return head;
	}
	if(head->link==NULL)
	{
		printf("only one node in the list\n");
		return head;
	}
	struct node *next=NULL,*prev=NULL,*ptr=head;
	while(ptr!=NULL)
	{
		next=ptr->link;
		ptr->link=prev;
		prev=ptr;
		ptr=next;
	}
	head=prev;
	return head;
}
