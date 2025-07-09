#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

struct node *del_first(struct node *head)
{
    if (!head) // List is already empty
    {
        printf("LIST IS EMPTY!\n");
        return NULL;
    }

    struct node *delF = head;
    head = head->next;
    free(delF);

    if (head != NULL)
        head->prev = NULL;

    return head;
}

int main ()
{
    struct node *head=malloc(sizeof(struct node));
}
