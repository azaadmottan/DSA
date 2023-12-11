#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *prev;
    struct node *next;
};

void traverse(struct node *head)                     // Double linked list
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("Data value: %d\n",ptr->data);
        ptr = ptr->next;
    }    
}
int main()
{
    struct node *head, *second, *third, *fourth;

    head = (struct node *)malloc(sizeof(head));
    second = (struct node *)malloc(sizeof(second));
    third = (struct node *)malloc(sizeof(third));
    fourth = (struct node *)malloc(sizeof(fourth));


    printf("Enter the value of first node: ");
    scanf("%d",&head->data);
    head->prev = NULL;
    head->next = second;

    printf("Enter the value of first node: ");
    scanf("%d",&second->data);
    second->prev = head;
    second->next = third;

    printf("Enter the value of first node: ");
    scanf("%d",&third->data);
    third->prev = second;
    third->next = fourth;

    printf("Enter the value of first node: ");
    scanf("%d",&fourth->data);
    fourth->prev = third;
    fourth->next = NULL;

    traverse(head);

    return 0;
}