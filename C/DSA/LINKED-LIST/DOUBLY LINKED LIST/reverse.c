#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *rev(struct node *head)
{
    struct node *ptr1 = head;
    struct node *ptr2 = ptr1->next;

    ptr1->next = NULL;
    ptr1->prev = ptr2;
    
    while (ptr2 !=NULL)
    {
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }
    head = ptr1;
    return head;
}

void display(struct node *head)
{
    struct node *p = head;

    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *ptr = malloc(sizeof(struct node));
    struct node *ptr1 = malloc(sizeof(struct node));
    struct node *ptr2 = malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 45;
    head->next = ptr;

    ptr->prev = head;
    ptr->data = 66;
    ptr->next = ptr1;

    ptr1->prev = ptr;
    ptr1->data = 58;
    ptr1->next = ptr2;

    ptr2->prev = ptr1;
    ptr2->data = 98;
    ptr2->next = NULL;

    head = rev(head);
    display(head);
    return 0;
}