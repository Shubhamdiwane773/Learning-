#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void create_list();
void add_beg(int data);
void add_last(int data);
void display();
void add_after(int item,int data);
void add_before(int item,int data);
void search(int item);
void count();
void add_at_pos(int data,int pos);
void delete(int item);
void reverse();
void delete_last();
void delete_first();
void middle_element();
void sort_list();
struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL;
int main()
{
	int choice,data,pos,item;
	while(1)
	{
		printf("\nenter your choice\n");
		printf("1.create_list,2.add_beg, 3.add_last, 4.add_at_position, 5.add_after, 6.add_before, 7.search_elment, 8.count_node 9.display, 10.delete 11.reverse 12.delete_last 13.delete_first 14.middle_element 15.sort_list 16.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create_list();
				break;
			case 2: printf("enter the element which you want to add\n");
				scanf("%d",&data);
				add_beg(data);
				break;
			case 3: printf("enter the elment which you want to add\n");
				scanf("%d",&data);
				add_last(data);
				break;
			case 4: printf("enter the element which you want to add\n");
				scanf("%d",&data);
				printf("enter the position  where you want to add the element\n");
				scanf("%d",&pos);
				add_at_pos(data,pos);
				break;
			case 5: printf("enter the element which you want to add\n");
				scanf("%d",&data);
				printf("enter the element after you want to add the new element\n");
				scanf("%d",&item);
				add_after(data,item);
				break;
			case 6: printf("enter the element which you to add\n");
				scanf("%d",&data);
				printf("enter the element before you want to add new element\n");
				scanf("%d",&item);
				add_before(data,item);
				break;
			case 7: printf("enter the element which you want to search\n");
				scanf("%d",&item);
				search(item);
				break;
			case 8: count();
				break;
			case 9: display();
				break;
			case 10: printf("enter the element which you want delete\n");
				 scanf("%d",&item);
				 delete(item);
				 break;
			case 11: reverse();
				 break;
			case 12: delete_last();
				 break;
			case 13: delete_first();
				 break;
			case 14: middle_element();
				 break;
			case 15: sort_list();
				 break;
			case 16 :exit(0);
				 break;
			default: printf("enter the correct choice\n");
				 break;
		}
	}
}
void create_list()
{
	int n,i,data;
//	head=NULL;
	printf("enter the node how much you want create\n");
	scanf("%d",&n);
	if(n==0)
		main();
	if(head!=NULL)
		n++;
	if(head==NULL)
	{
	printf("enter the element which you to add\n");
	scanf("%d",&data);
	add_beg(data);
	}
	for(i=2;i<=n;i++)
	{
		printf("enter the element which you want to add\n");
		scanf("%d",&data);
		add_last(data);
	}
}
void add_beg(int data)
{
	struct node *new=NULL;
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
	struct node *new=NULL,*ptr=NULL;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->link=NULL;
	if(head==NULL)
		head=new;
	else
	{
		ptr=head;
		while(ptr->link!=NULL)
			ptr=ptr->link;
		ptr->link=new;
	}
}
void display()
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
	printf("\n");
}
void add_after(int data,int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data==item)
		{
			struct node *new=NULL;
			new=(struct node*)malloc(sizeof(struct node));
			new->data=data;
			new->link=ptr->link;
			ptr->link=new;
			main();
		}
		ptr=ptr->link;
	}
	printf("%d element is not present in the list\n",item);

}
void add_before(int data,int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr=NULL,*new=NULL;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->link=NULL;
	if(head->data==item)
	{
		new->link=head;
		head=new;
		main();
	}
	ptr=head;
	while(ptr->link!=NULL)
	{
		if(ptr->link->data==item)
		{
			new->link=ptr->link;
			ptr->link=new;
			main();
		}
		ptr=ptr->link;
	}
	printf("%d element is not present in the list\n",item);
}
void count()
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr=NULL;
	int cnt=1;
	ptr=head;
	while(ptr->link!=NULL)
	{
		cnt++;
		ptr=ptr->link;
	}
	printf("%d node is present in the llist\n",cnt);
}
void  search(int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr=NULL;
	int cnt=0;
	ptr=head;
	while(ptr!=NULL)
	{
		cnt++;
		if(ptr->data==item)
		{
			printf("%d element is found at the %d node \n",item,cnt);
			main();
		}
		ptr=ptr->link;
	}
	printf("%d elment is not present in the list\n",item);

}
void add_at_pos(int data,int pos)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr=NULL,*new=NULL;
	int cnt=1;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	if(pos==1)
	{
		new->link=head;
		head=new;
		main();
	}
	ptr=head;
	while(ptr->link!=NULL)
	{
		cnt++;
		if(cnt==pos)
		{
			new->link=ptr->link;
			ptr->link=new;
			main();
		}
		ptr=ptr->link;
	}
	printf("%d position is not present in the list \n in the list only 1 to %d position are present\n",pos,cnt);
}
void delete(int item)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr=NULL,*temp=NULL;
	if(head->data==item)
	{
		temp=head;// head address assign to temp
		head=head->link;// head is pointing to head link
		free(temp);// it free temp means free head it means delete first node
		main();
	}
	ptr=head;
	while(ptr->link!=NULL)
	{
		if(ptr->link->data==item)
		{
			temp=ptr->link;
			ptr->link=temp->link;
			free(temp);
			main();
		}
		ptr=ptr->link;
	}
	printf("element %d not found \n",item);
}
void reverse()
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	if(head->link==NULL)
	{
		printf("list having only one node\n");
		main();
	}
	struct node *ptr=NULL,*next=NULL,*prev=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		next=ptr->link;
		ptr->link=prev;
		prev=ptr;
		ptr=next;
	}
	head=prev;
}
void delete_last()
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr,*temp=NULL;
	ptr=head;
	while(ptr->link->link!=NULL)
		ptr=ptr->link;
	ptr->link=NULL;
	printf("last node is deleted\n");
}
void delete_first()
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *ptr=NULL;
	ptr=head;
	head=head->link;
	free(ptr);
}
void middle_element()
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	struct node *sptr=head,*fptr=head;
	while(fptr!=NULL && fptr->link!=NULL)
	{
		sptr=sptr->link;
		fptr=fptr->link->link;
	}
	printf("middle element is %d\n",sptr->data);
}
void sort_list()
{
	if(head==NULL)
	{
		printf("list is empty\n");
		main();
	}
	if(head->link==NULL)
	{
		printf("list having only one node\n");
		main();
	}
	struct node *current=NULL,*next=NULL;
	int temp;
	current=head;
	while(current!=NULL)
	{
		next=current->link;
		while(next!=NULL)
		{
			if(current->data > next->data)
			{
				temp=current->data;
				current->data=next->data;
				next->data=temp;
			}
			next=next->link;
		}
		current=current->link;
	}
	display();
	printf("list is sorted in ascending order\n");
}


