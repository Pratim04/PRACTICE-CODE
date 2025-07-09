#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*link;
};

void add_end(struct node*head,int data) 
{
    struct node*ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    
    temp->data=data;
    temp->link=NULL;

    while (ptr->link != NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
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
    struct node *head = NULL;
    head=(struct node*)malloc(sizeof(struct node));

    head->data=45;
    head->link=NULL;

    // struct node *current = NULL;
    // current=(struct node*)malloc(sizeof(struct node));
    // current->data=55;
    // current->link=NULL;
    // head->link=current;

    // current=malloc(sizeof(struct node));
    // current->data=33;
    // current->link=NULL;
    // head->link->link=current;

    //alrady created list is 45 55 33
    int ch,n;
    while (1)
    {
        printf("\nEnter 1 for add a note at the end:\nEnter 2 for display the list:\nEnter 3 for Exit:\nEnter your choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
        printf("Enter the value that you want to add at the end: ");
        scanf("%d",&n);
        add_end(head,n); //newly added is n
        break;
        
        case 2:
        display(head);
        break;

        case 3:
        exit(1);
        break;

        default:
        printf("Wrong choice! please try again:");
        break;
        }
    }
    return 0;
}