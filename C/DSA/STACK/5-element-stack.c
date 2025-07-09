#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack_arr[MAX];
int top = -1;

int push(int data)
{
    if (top == MAX - 1)
    {
        printf("\nSTACK OVERFLOW");
        exit;
    }
    else
    {
        top = top + 1;
        stack_arr[top] = data;
        printf("\nPushed successfully");
    }
}

int pop()
{
    int value;
    if (top == -1)
    {
        printf("\nSTACK UNDERFLOW");
        exit(1);
    }
    else
    {
        value = stack_arr[top];
        top = top - 1;
        printf("\nPoped element is : %d", value);
    }
}

int Top()
{
    printf("\nThe top most elements is : ");
    printf("%d", stack_arr[top]);
}

int print()
{
    int i;
    printf("\nAll the stack elements are :\n");
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack_arr[i]);
    }
}

int main()
{
    int choice, n;
    while (1)
    {
        printf("\nEnter 1 for PUSH : ");
        printf("\nEnter 2 for POP : ");
        printf("\nEnter 3 for TOP : ");
        printf("\nEnter 4 to show all the elements : ");
        printf("\nEnter 5 for Quit : ");
        printf("\nEnter a choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the element for PUSH : ");
            scanf("%d", &n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            Top();
            break;
        case 4:
            print();
            break;
        case 5:
            printf("\nProgram stopped");
            exit(0);
        default:
            printf("\nWrong input");
            break;
        }
    }
    return 0;
}