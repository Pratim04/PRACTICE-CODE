#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

// Stack structure
typedef struct {
    int top;
    int items[MAX];
} Stack;

// Function to initialize the stack
void initialize(Stack *s) {
    s->top = -1;
}

// Function to check if stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to push an element onto the stack
void push(Stack *s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack overflow!\n");
        exit(1);
    }
    s->items[++(s->top)] = value;
}

// Function to pop an element from the stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow!\n");
        exit(1);
    }
    return s->items[(s->top)--];
}

// Function to evaluate a postfix expression
int evaluatePostfix(char *exp) {
    Stack s;
    initialize(&s);

    for (int i = 0; exp[i] != '\0'; i++) {
        // If the character is a digit, push it onto the stack
        if (isdigit(exp[i])) {
            push(&s, exp[i] - '0');
        } else {
            // Pop two operands from stack
            int op2 = pop(&s);
            int op1 = pop(&s);

            // Perform operation
            switch (exp[i]) {
                case '+': push(&s, op1 + op2); break;
                case '-': push(&s, op1 - op2); break;
                case '*': push(&s, op1 * op2); break;
                case '/':
                    if (op2 == 0) {
                        printf("Division by zero error!\n");
                        exit(1);
                    }
                    push(&s, op1 / op2);
                    break;
                default:
                    printf("Invalid operator: %c\n", exp[i]);
                    exit(1);
            }
        }
    }
    
    return pop(&s);
}

int main() {
    char exp[MAX];
    printf("Enter a postfix expression: ");
    scanf("%s", exp);
    printf("Result: %d\n", evaluatePostfix(exp));
    return 0;
}