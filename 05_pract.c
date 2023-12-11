#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Data value : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // dynamic memory allocation of nodes in heap

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    first->data = 10;
    first->next = second;

    second->data = 20; 
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    traverse(first);

    return 0;
}