#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack is Full\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed\n", value);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
        printf("Stack is Empty\n");
    else
        printf("Top element: %d\n", stack[top]);
}

int isEmpty()
{
    return top == -1;
}

int isFull()
{
    return top == MAX - 1;
}

int main()
{
    push(10);
    push(20);
    push(30);

    peek();
    pop();

    printf("Is Empty: %d\n", isEmpty());
    printf("Is Full: %d\n", isFull());

    return 0;
}