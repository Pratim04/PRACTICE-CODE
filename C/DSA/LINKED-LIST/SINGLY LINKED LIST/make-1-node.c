#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

void display(struct node*head)
{
    struct node*noob;
    noob=head;
    while (noob!=NULL)
    {
        printf("%d ",noob->data);
        noob=noob->link;
    }
}

int main() 
{
    struct node*head=(struct node*)malloc(sizeof(struct node));

    head->data=45;
    head->link=NULL;
    
    struct node*pro=(struct node*)malloc(sizeof(struct node));

    pro->data=89;
    pro->link=NULL;

    head->link=pro;
    display(head);
    return 0;
}

/*
    now head = 1000
*/