#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *create_list(struct node *head);
struct node *add_at_beg(struct node *head,int data);
struct node *add_at_end(struct node *head,int data);
struct node *add_after(struct node *head);
void display(struct node *head);
void search(struct node *head);
void count(struct node *head);
struct node *delete(struct node *head);

int main()
{
	struct node *head=NULL;
	int choice,data;
	while(1)
	{
		printf("\n1.create_list\n 2.add_at_begenning\n 3.add_at_end\n 4.add_after\n  5.display\n 6.search\n 7.count node\n 8. delete node\n 9.exit\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: head=create_list(head);
				break;
			case 2: printf("enter the data\n");
				scanf("%d",&data);
				head=add_at_beg(head,data);
				break;
			case 3: printf("enter the data\n");
				scanf("%d",&data);
				head=add_at_end(head,data);
				break;
			case 4: head=add_after(head);
				break;
			case 5: display(head);
				break;
			case 6: search(head);
				break;
			case 7: count(head);
				break;
			case 8: delete(head);
				break;
			case 9: exit(1);
			default: printf("wrong choice\n");
		}
	}
}
struct node *create_list(struct node *head)
{
	int data,i,n;
	printf("enter the node\n");
	scanf("%d",&n);
	printf("enter the element\n");
	scanf("%d",&data);
	head=add_at_beg(head,data);
	for(i=2;i<=n;i++)
	{
		printf("enter the element\n");
		scanf("%d",&data);
		head=add_at_end(head,data);
	}
	return head;
}
struct node *add_at_beg(struct node *head,int data)
{
	struct node *ptr=NULL;
	ptr=(struct node *) malloc(sizeof(struct node));
	ptr->data=data;
	ptr->link=head;
	head=ptr;
	return head;
}
struct node *add_at_end(struct node *head,int data)
{
	struct node *ptr=NULL;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node *temp=NULL;
	temp=head;
	while(temp->link!=NULL)
		temp=temp->link;
	temp->link=ptr;
	ptr->link=NULL;
	return head;
}
void display(struct node *head)
{
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		struct node *temp=NULL;
		temp=head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->link;
		}
	}
}
void count(struct node *head)
{
	int cnt=0;
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		struct node *temp=NULL;
		temp=head;
		while(temp!=NULL)
		{
			cnt++;
			temp=temp->link;
		}
		printf("\n the node is %d",cnt);
	}
}
void search (struct node *head)
{
	int element,cnt=0;
	printf("enter the element do you want to sarch \n");
	scanf("%d",&element);
	struct node *temp=NULL;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==element)
		{
			printf("element is found at position %d",cnt);
			return ;
		}
		else
			temp=temp->link;
		cnt++;
	}
	printf("element is not found\n");
}
struct node *add_after(struct node *head)
{
	int data,element;
	struct node *ptr=NULL,*temp=NULL;
	printf("enter the element do you want add\n");
	scanf("%d",&data);
	printf("enter the element which after you want to add\n");
	scanf("%d",&element);
	ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data==element)
		{
			temp=(struct node *) malloc(sizeof(struct node));
			temp->data=data;
			temp->link=ptr->link;
			ptr->link=temp;
			return head;
		}
		ptr=ptr->link;
	}
	printf("%d not present in list \n",element);
	return head;
}
struct node *delete(struct node *head)
{
	struct node *tmp,*p;
	int element;

	printf("enter the element do you want to delete\n");
	scanf("%d",&element);
	if(head==NULL)
	{
		printf("list is empty\n");
		return NULL;
	}
	if(head->data==element)
	{
		tmp=head;
		head=head->link;
		free(tmp);
		return head;
	}
	p=head;
	while(p->link!=NULL)
	{
		if(p->link->data==element)
		{
			tmp=p->link;
			p->link=tmp->link;
			free(tmp);
			return head;
		}
		p=p->link;
	}
	printf("element %d not found \n",element);
	return head;
}

