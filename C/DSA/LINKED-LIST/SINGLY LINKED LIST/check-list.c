// Counting the nodes & isEmpty ?
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void isEmpty(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked List is empty");
    }
    else
    {
        int c=0;
        struct node *ptr;
        ptr = head;
        while (ptr != NULL)
        {
            c++;
            ptr = ptr->link;
        }
        printf("There are %d number of elements",c);
    }
}

int main()
{
    struct node *head;
    head = malloc(sizeof(struct node));
    head=NULL;
    isEmpty(head);
    return 0;
}