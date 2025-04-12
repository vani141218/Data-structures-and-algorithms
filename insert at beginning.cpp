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
			printf("%d \n",ptr->data);
			ptr=ptr->link;
		}
		printf("total nodes are %d \n:",count);
	}
}

struct node* insert_at_start(struct node *head,int data)
{
    struct node *temp=NULL;
    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=head;
    head=temp;        //new head
    return head;
}

int main()
{
    struct node *head=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=20;
	head->link=NULL;

    create_nodes(head,30);
    create_nodes(head,40);
    create_nodes(head,50);
    
    printf("Elements and the total number of nodes before insertion at beginning \n");
    count_of_nodes(head);
    head=insert_at_start(head,60);
    printf("Elements and the total number of nodes after inserting at beginning \n");
    count_of_nodes(head);
    return 0;

}