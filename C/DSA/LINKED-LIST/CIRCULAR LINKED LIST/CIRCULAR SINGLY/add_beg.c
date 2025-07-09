#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *addToEmpty(int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = temp;
    return temp;
}

struct node *add_beg(struct node *tail, int data)
{
    struct node *newP = malloc(sizeof(struct node));
    newP->data = data;
    newP->link = tail->link;
    tail->link = newP;
    return tail;
}

struct node *add_end(struct node *tail, int data)
{
    struct node*newp=malloc(sizeof(struct node));
    newp->data=data;
    newp->link=tail->link;
    tail->link=newp;
    return tail;

}

void display(struct node *tail)
{
    if (tail == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct node *p = tail->link; // Start from head

    do
    {
        printf("%d ", p->data);
        p = p->link;
    } while (p != tail->link); // Stop when we reach head again

    printf("\n");
}

int main()
{
    struct node *tail;
    tail = addToEmpty(45);
    tail = add_beg(tail, 33);
    tail = add_end(tail,64);
    
    display(tail);
    return 0;
}