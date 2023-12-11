#include<stdio.h>
#include<stdlib.h>

struct stack                                            // Array implementation of stack using structures
{
    int size;
    int top;
    int *arr;
};

void push(struct stack *ptr)
{
    if (ptr->top == ptr->size-1)
    {
        printf("\n\t****** Stack overflow ! ******\n");
    }
    else
    {
        ptr->top++;
        printf("\nEnter the element of an array: ");
        scanf("%d",&ptr->arr[ptr->top]);
    }
}

void pop(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("\n\t****** Stack underflow ! ******\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        printf("\n%d is popped from stack\n",val);
        ptr->top--;
    }
}

void display(struct stack *ptr)
{
    // printf("Stack element:\n");
    if (ptr->top == -1)
    {
        printf("\n\t****** Stack is empty ! ******\n");
    }
    else
    {
        printf("----------Stack elements----------\n");
        for (int i = ptr->top; i > -1; i--)
        {
            printf("  %d\n",ptr->arr[i]);
        }
        printf("----------------------------------\n");
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));

    printf("Enter the size of stack: ");
    scanf("%d",&s->size);
    // s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    int choice;
    while (1)
    {
        printf("\nEnter:  1. Push\n\t2. Pop\n\t3. Diplay\n\t4. Exit\n\nEnter: ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1: push(s);
                    break;
            case 2: pop(s);
                    break;
            case 3: display(s);
                    break;
            case 4: exit(0);
                    break;
            default: printf("Wrong choice !\n");
                    break;
        }
    }

    return 0; 
}