#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node*prev;
    int data;
    struct node*next;
};

struct node *CircularDoubly(int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->prev=temp;
    temp->data=data;
    temp->next=temp;

    return temp;
}
int main() 
{
    int data = 45;
    struct node* tail;
    tail = CircularDoubly(data);

    printf("%d ",tail->data);
    return 0;
}