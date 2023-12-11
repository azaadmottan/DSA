#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *top;

void push()
{
    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));

    if (ptr == NULL)
    {
        printf("\n\tNot able to insert an element in stack !\n");
    }
    else
    {
        if (top == NULL)
        {
            printf("\nEnter the element of stack: ");
            scanf("%d",&ptr->data);
            ptr->next = NULL;
            top = ptr;
        }    
        else
        {
            printf("\nEnter the element of stack: ");
            scanf("%d",&ptr->data);
            ptr->next = top;
            top = ptr;
        }
    }
}

void pop()
{
    struct stack *ptr;

    if (top == NULL)
    {
        printf("\n\t****** Stack underflow ! ******\n");
    }
    else
    {
        int val;
        val = top->data;
        ptr = top;
        top = top->next;
        free(ptr);
        printf("\n%d is popped from stack\n",val);
    }
    
}

void display()
{
    struct stack *ptr;
    ptr = top;
    if (top == NULL)
    {
        printf("\n\t****** Stack is empty ! ******\n");
    }
    else
    {
        printf("\n----------Stack elements----------\n");
        while(ptr != NULL)
        {
            printf("  %d\n",ptr->data);
            ptr = ptr->next;
        }
        printf("----------------------------------\n");
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));

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