#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
struct node *create_list(struct node *head);
struct node *add_empty(struct node *head,int data);
struct node *add_beg(struct node*head,int data);
struct node *add_last(struct node *head,int data);
struct node *add_after(struct node *head,int data,int item);
void display(struct node *head);
struct node *delete(struct node *head,int item);
int main()
{
	struct node *head=NULL;
	int data,item,choice;
	while(1)
	{
		printf("\n....... enter your choice.........\n");
		printf("1.create_list 2.add_empty 3.add_beg 4.add_last 5.add_after 6.display 7.delete 8.exit(1)\n");
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
			case 5: printf("enter element which u want to add\n");
				scanf("%d",&data);
				printf("enter element after u want to add new element\n");
				scanf("%d",&item);
				head=add_after(head,data,item);
				break;
			case 6: display(head);
				break;
			case 7: printf("enter element which u want delete\n");
				scanf("%d",&item);
				head=delete(head,item);
				break;
			case 8: exit(1);
			default: printf("enter correct choice\n");
				 break;
		}
	}
}
struct node *create_list(struct node *head)
{
	int data,i,choice,n;
	printf("enter your number of node u want to create\n");
	scanf("%d",&n);
	printf("enter element which u want to add\n");
	scanf("%d",&data);
	head=add_empty(head,data);
	for(i=2;i<=n;i++)
	{
		printf("enter element which u want add\n");
		scanf("%d",&data);
		head=add_last(head,data);
	}
	return head;
}
struct node *add_empty(struct node *head,int data)
{
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node ));
	new->data=data;
	head=new;
	head->link=head;
	return head;
}
struct node *add_beg(struct node *head,int data)
{
	struct node *new=NULL;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->link=head->link;
	head->link=new;
	return head;
}
struct node *add_last(struct node *head,int data)
{
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	new->data=data;
	new->link=head->link;
	head->link=new;
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
	ptr=head->link;
	do
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}while(ptr!=head->link);
	printf("\n");
}
struct node *add_after(struct node *head,int data,int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return head;
	}
        struct node *temp,*ptr;
        ptr=head->link;
        do
        {
                if(ptr->data==item)
                {
                        temp=(struct node*)malloc(sizeof(struct node));
                        temp->data=data;
                        temp->link=ptr->link;
			ptr->link=temp;
                        if(ptr==head)
                                head=temp;
			return head;
                }
                ptr=ptr->link;
        }while(ptr!=head->link);
        printf("%d element is not present in the list\n",item);
	return head;
}
struct node *delete(struct node *head,int item)
{
        struct node *temp,*ptr;
        if(head==NULL)
        {
                printf("list is empty\n");
		return head;
        }
        if(head->link==head && head->data==item)
        {
                temp=head;
                head=NULL;
                free(temp);
                printf("%d element is delete\n",item);
                return head;
        }
        if(head->link->data==item)
        {
                temp=head->link;
                head->link=temp->link;
                free(temp);
                printf("%d element is delete\n",item);
                return head;
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
                        return head;
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
                return head;
        }
        printf("%d element is not found\n",item);
	return head;
}

