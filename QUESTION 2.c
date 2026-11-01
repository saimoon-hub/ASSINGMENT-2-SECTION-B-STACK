#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int value)
{
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d pushed\n", value);
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        struct Node *temp = top;

        printf("Popped element: %d\n", top->data);

        top = top->next;
        free(temp);
    }
}

void display()
{
    struct Node *temp = top;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    pop();

    printf("Stack elements: ");
    display();

    return 0;
}