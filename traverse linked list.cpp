#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

void create_nodes(struct node *head,int data)
{
	struct node *ptr,*temp;
	ptr=head;
	temp=malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	printf("%d \n",temp->data);
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	ptr->link=temp;
}

void count_of_nodes(struct node *head)
{
	int count=0;
	struct node *ptr=NULL;
	ptr=head;
	
	if(head==NULL)
	{
		printf("list is empty");
	}
	
	else {
		while(ptr!=NULL)
		{
			count++;
			ptr=ptr->link;
		}
		printf("total nodes are %d :",count);
	}
}

int main()
{
	struct node *head=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=20;
	head->link=NULL;
	printf("%d \n",head->data);
	
	create_nodes(head,30);
	create_nodes(head,40);
	count_of_nodes(head);
	return 0;
}