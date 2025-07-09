#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

void add_beg(struct node**head,int d)
{
    struct node*ptr=malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link=*head;
    *head=ptr;
}

void display(struct node*head)
{
    struct node *p;
    p=head;
    while (p!= NULL)
    {
        printf("%d ",p->data);
        p = p->link;
    }
}

int main() 
{
    int n;

    struct node*head=NULL;
    head=malloc(sizeof(struct node));
    
    head->data=99;
    head->link=NULL;

    printf("Enter a value: ");
    scanf("%d",&n);
    
    add_beg(&head,n);
    display(head);

    return 0;
}