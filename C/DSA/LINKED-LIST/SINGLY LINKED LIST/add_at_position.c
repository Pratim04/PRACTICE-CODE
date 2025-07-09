#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*link;
};

void add_at_pos(struct node**head,int data,int pos)
{
    struct node*ptr,*temp;
    
    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    ptr=*head;

    if (pos<=0)
    {
        printf("Invalid Positon!");
        return;
    }
    
    if (pos==1)
    {
        temp->link=ptr;
        *head=temp;
        return;
    }

    pos--;
    while (ptr != NULL && pos != 1)
    {
        ptr=ptr->link;
        pos--;
    }

    if (ptr == NULL)
    {
        printf("OUT OF RANGE!");
        free(temp);
        return;
    }
    temp->link=ptr->link;
    ptr->link=temp;
}

struct node* reverse(struct node *head)
{
    struct node*prev = NULL;
    struct node*next = NULL;
    while (head != NULL)
    {
        next = head->link;
        head->link=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;
    
}
void display(struct node*head)
{
    struct node*ptr;
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}

int main() 
{
    struct node*head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    
    struct node*ptr=malloc(sizeof(struct node));
    ptr->data=95;
    ptr->link=NULL;

    head->link=ptr;

    struct node*ptr1=malloc(sizeof(struct node));
    ptr1->data=35;
    ptr1->link=NULL;

    ptr->link=ptr1;

    struct node*ptr2=malloc(sizeof(struct node));
    ptr2->data=6;
    ptr2->link=NULL;
    
    ptr1->link=ptr2;

    //add_at_pos(&head,100,4);
    // printf("Before revese\n");
    // display(head);
    // printf("After revese\n");
    head = reverse(head);
    display(head);
    return 0;
}

/*
Before adding a new node at 3rd position:

1000
head---
----  ! 
6000  !
      !
    45|2000-----95|3000-----35|null
   --------     -------    --------
    1000        2000         3000
                                 
                            
                            69|null
                            -------
                             4000
                               ^
                               |
                             temp

After adding a node at 3rd position:                          

1000
head---
----  ! 
6000  !
      !
    45|2000----->95|3000----->69|3000------>35|null
   --------     --------     --------      ---------
     1000         2000         4000          3000
*/
                                
