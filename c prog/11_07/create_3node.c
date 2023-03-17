#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*link;
};
int main()
{
	struct node *head=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=44;
	head->link=NULL;
	struct node *new_node=NULL;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=11;
	new_node->link=NULL;
	head->link=new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=22;
	new_node->link=NULL;
	head->link->link=new_node;
	struct node *ptr=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
	ptr=head;
	int cnt=0;
	while(ptr!=NULL)
	{
		cnt++;
		ptr=ptr->link;
	}
	printf("\n%d node in these list\n",cnt);
}
