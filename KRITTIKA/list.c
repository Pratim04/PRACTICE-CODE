#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node* input(struct node*head,int data)
{
    struct node *ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1->data=data;
    ptr1->link=NULL;
    
    if(head==NULL)
    {
        return ptr1;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->link!=NULL)
        {
            ptr=ptr->link; 
        }
        ptr->link=ptr1;
        return head;
    }
}

void display(struct node*head)
{   
    struct node *p=head;
    while (p!=NULL)
    {
        printf("%d",p->data);
        p=p->link;
    }
    
}

int main()
{
    struct node *head=NULL;
    head =input(head,20);
    head =input(head,30);
    head =input(head,50);
    display(head);
    return 0;

}


