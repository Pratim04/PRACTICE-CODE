#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node*prev; // Previous node address
    int data; // Data part
    struct node*next; // Next node address
};

int main() 
{
    // It's the way to making one node
    struct node*head=malloc(sizeof(struct node));
    return 0;
}