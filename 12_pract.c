#include<stdio.h>
#include<stdlib.h>

struct stack 
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)                      // Stack implementation
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *ptr)                       // Stack implementation
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));

    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));    

    s->arr[0] = 20;
    s->top++;

    s->arr[1] = 20;
    s->top++;

    s->arr[2] = 20;
    s->top++;

    s->arr[3] = 20;
    s->top++;

    s->arr[4] = 20;
    s->top++;

    s->arr[5] = 20;
    s->top++;

    s->arr[6] = 20;
    s->top++;

    s->arr[7] = 20;
    s->top++;

    s->arr[8] = 20;
    s->top++;

    s->arr[9] = 20;
    s->top++;

    // s->arr[10] = 20;
    // s->top++;

    if(isFull(s))
    {
        printf("Stack is full !\n");
    }
    else
    {
        printf("Stack is empty !\n");
    }

    if(isEmpty(s))
    {
        printf("Stack is empty !\n");
    }
    else
    {
        printf("Stack is full !\n");
    }

    return 0;
}