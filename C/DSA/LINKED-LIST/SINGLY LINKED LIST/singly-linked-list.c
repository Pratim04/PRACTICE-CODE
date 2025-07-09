#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};

void add_end(struct node*head,int d)
{
    struct node*ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));

    temp->data=d;
    temp->link=NULL;

    while (ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}

void add_beg(struct node**head,int d)
{
    struct node*ptr=malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link=*head;
    *head=ptr;
}

void add_at_pos(struct node**head,int data,int pos)
{
    struct node*temp;
    
    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    if (pos<=0)
    {
        printf("Invalid Position!");
        return;
    }

    if (pos==1)
    {
        temp->link=*head;
        *head=temp;
        return;
    }

    struct node* current=*head;
    pos--;
    while (current!=NULL && pos != 1)
    {
        current=current->link;
        pos--;
    }

    if (current==NULL)
    {
        printf("OUT OF RANGE!");
        free(temp);
        return;
    }

    temp->link=current->link;
    current->link=temp;
}

void display(struct node* head)
{
    struct node*p;
    p=head;
    while (p!=NULL)
    {
        printf("%d ",p->data);
        p = p->link;
    }
}

int main()
{
    struct node*head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    int ch,n,d;
    while (1)
    {
        printf("\nEnter 1 for add a note at the end:\nEnter 2 for add a note at the beginning:\nEnter 3 for display the list:\nEnter 4 for adding a node at position:\nEnter 5 for Exit:\nEnter your choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
        printf("Enter the value that you want to add at the end: ");
        scanf("%d",&n);
        add_end(head,n); //newly added is n
        break;
        
        case 2:
        printf("Enter the value that you want to add at the beginning: ");
        scanf("%d",&n);
        add_beg(&head,n);
        break;

        case 3:
        display(head);
        break;

        case 4:
        printf("Enter new value: ");
        scanf("%d",&n);
        printf("Enter the position: ");
        scanf("%d",&d);
        add_at_pos(&head,n,d);
        break;

        case 5:
        exit(1);
        break;

        default:
        printf("Wrong choice! please try again:");
        break;
        }
    }
    return 0;
}