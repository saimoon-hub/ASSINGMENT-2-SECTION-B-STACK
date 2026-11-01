#include <stdio.h>

int main()
{
    int arr[] = {4, 5, 2, 10, 8};
    int stack[5];
    int result[5];
    int top = -1;
    int n = 5;
    int i;

    for (i = n - 1; i >= 0; i--)
    {
        while (top != -1 && stack[top] <= arr[i])
        {
            top--;
        }

        if (top == -1)
            result[i] = -1;
        else
            result[i] = stack[top];

        stack[++top] = arr[i];
    }

    printf("Next Greater Elements:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d -> %d\n", arr[i], result[i]);
    }

    return 0;
}