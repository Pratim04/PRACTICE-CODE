#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *addToEmpty(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node *add_beg(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}

void add_end(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    struct node *ptr = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
}
struct node *create(int data)
{
    struct node *newP = malloc(sizeof(struct node));
    newP->prev = NULL;
    newP->data = data;
    newP->next = NULL;
    return newP;
}

struct node *add_after(struct node *head, int data, int pos)
{
    struct node *newP = NULL;
    struct node *temp = head;
    struct node *temp2 = NULL;
    
    while (pos > 1 && temp != NULL)
    {
        temp = temp->next;
        pos--;
    }

    if (temp == NULL)
    {
        printf("Out of range!\n");
        return head;
    }
    newP = create(data);

    if (temp->next == NULL)
    {
        temp->next = newP;
        newP->prev = temp;
    }
    else
    {
        temp2 = temp->next;
        temp->next = newP;
        newP->prev = temp;
        newP->next = temp2;
        temp2->prev = newP;
    }
    return head;
}

struct node *add_before(struct node *head, int data, int pos)
{
    struct node *newP = NULL;
    struct node *temp = head;
    struct node *temp2 = NULL;

    while (pos > 1 && temp != NULL)
    {
        temp2=temp;
        temp = temp->next;
        pos--;
    }

    if (temp == NULL)
    {
        printf("Out of range!\n");
        return head;
    }
    newP=create(data);

    if (temp == head)
    {
        newP->next = temp;
        temp->prev = newP;
        head=newP;
        return head;
    }
    else
    {
        temp2->next=newP;
        temp->prev = newP;
        newP->prev = temp2;
        newP->next = temp;
    }
    return head;

}

void display(struct node *head)
{
    struct node *p;
    p = head;
    if (p == NULL)
    {
        printf("\nThere is no node!");
        return;
    }

    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    struct node *head = NULL;
    while (1)
    {
        int ch;
        printf("ENTER A CHOICE: ");
        scanf("%d",&ch);
    }
    
    head = addToEmpty(head, 55);
    head = add_beg(head, 66);
    add_end(head, 69);
    printf("before adding\n");
    display(head);
    head = add_before(head, 32, 3);
    head=add_after(head,12,3);
    printf("\nafter adding\n");
    display(head);
    return 0;
}