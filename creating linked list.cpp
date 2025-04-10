#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

void create_nodes(struct node *head,int data)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    printf("%d \t",temp->data);
    while(ptr->link != NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}

int main()
{
    // creating head node
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=20;
    head->link=NULL;
    printf("%d \t",head->data);
    
    create_nodes(head,30);
    create_nodes(head,40);
    return 0;
}    
    
    
    
