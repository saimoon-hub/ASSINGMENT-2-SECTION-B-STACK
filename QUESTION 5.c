#include <stdio.h>

#define MAX 5

int stack[MAX];
int minStack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack is Full\n");
        return;
    }

    top++;
    stack[top] = value;

    if (top == 0 || value < minStack[top - 1])
        minStack[top] = value;
    else
        minStack[top] = minStack[top - 1];

    printf("%d pushed\n", value);
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Popped: %d\n", stack[top]);
        top--;
    }
}

int getMin()
{
    if (top == -1)
        return -1;

    return minStack[top];
}

int main()
{
    push(10);
    push(5);
    push(20);
    push(2);

    printf("Minimum element: %d\n", getMin());

    pop();

    printf("Minimum element: %d\n", getMin());

    return 0;
}