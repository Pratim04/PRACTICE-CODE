#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *del_first(struct node *head)
{
    struct node *delF = head;
    head = head->next;
    free(delF);
    delF = NULL;
    head->prev = NULL;
    return head;
}

struct node *del_last(struct node *head)
{
    struct node *delL = head, *p;

    while (delL->next != NULL)
    {
        p = delL;
        delL = delL->next;
    }
    free(delL);
    delL = NULL;
    p->next = NULL;
    return head;
}

struct node *del_pos(struct node *head, int pos)
{
    struct node *ptr = NULL, *del = head;

    if (!head) // If there is no node to delete
    {
        printf("LIST IS EMPTY!");
        exit(1);
    }

    if (pos == 1) // If the user define position is the first node
    {
        head = del_first(head);
        return head;
    }

    while (pos > 1 && del != NULL) // If the user want to delete a node from the middle
    {
        del = del->next;
        pos--;
    }

    if (del == NULL) // If the user input of the position is out of range
    {
        printf("OUT OF RANGE!\n");
        exit(1);
    }

    if (del->next == NULL) // If the user define position is the last node
    {
        head = del_last(head);
        return head;
    }
    else
    {
        ptr = del->prev;
        ptr->next = del->next;
        del->next->prev = ptr;
        free(del);
        del = NULL;
        return head;
    }
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
    
    head->prev = NULL;
    head->data = 45;
    head->next = ptr;

    ptr->prev = head;
    ptr->data = 66;
    ptr->next = ptr1;

    ptr1->prev = ptr;
    ptr1->data = 58;
    ptr1->next = NULL;

    // head=del_first(head);
    // head=del_last(head);
    head = del_pos(head, 1);
    display(head);
    return 0;
}