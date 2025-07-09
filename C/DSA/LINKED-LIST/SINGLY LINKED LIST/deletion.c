// Deletion of the first node and deletion of the last node
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *deletion_beg(struct node *head)
{
    if (head == NULL)
    {
        printf("List is already empty: ");
    }
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
    return head;
}

void deletion_end(struct node *head)
{
    if (head == NULL) // if there is no node.
    {
        printf("List is already empty: ");
    }
    else if (head->link == NULL) // if there is only one node.
    {
        free(head);
        head = NULL;
    }
    else // if there are muultiple nodes.
    {
        struct node *temp1, *temp2;
        temp1 = head;
        temp2 = head;
        while (temp1->link != NULL)
        {
            temp2 = temp1;
            temp1 = temp1->link;
        }
        temp2->link = NULL;
        free(temp1);
        temp1 = NULL;
    }
}

void del_pos(struct node **head, int pos)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct node *current = *head;
    struct node *previous = NULL;

    if (pos == 1)
    {
        *head = current->link;
        free(current);
        return;
    }

    while (pos > 1 && current != NULL)
    {
        previous = current;
        current = current->link;
        pos--;
    }

    if (current == NULL)
    {
        printf("Position out of range\n");
        return;
    }

    previous->link = current->link;
    free(current);
}

struct node* del_all(struct node*head)
{
    struct node*temp=head;
    if (temp == NULL)
    {
        printf("List is empty!");
    }

    while (temp!=NULL)
    {
        temp = temp->link;
        free(head);
        head=temp;
    }
    head=NULL;
    temp=NULL;
    printf("Entire list has been deleted!");
    return head;
}

void display(struct node *head)
{
    struct node *p;
    p = head;
    if (p==NULL)
    {
        printf("\nThere is no node!");
        return;
    }
    
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->link;
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 95;
    ptr->link = NULL;

    head->link = ptr;

    struct node *ptr1 = malloc(sizeof(struct node));
    ptr1->data = 35;
    ptr1->link = NULL;

    ptr->link = ptr1;
    // head = deletion_beg(head);
    // deletion_end(head);
    //del_pos(&head, 2);
    head = del_all(head);
    display(head);

    return 0;
}