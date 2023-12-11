#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *insert_between(struct node *head)                           // Node inserted between nodes 
{
    int pos;

    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    printf("Enter the position of node where you have inserted an element: ");
    scanf("%d",&pos);

    struct node *p = head;
    int i = 1;

    while (i < pos-1)
    {
        p = p->next;
        i++;
    }

    printf("Enter the value of new node: ");
    scanf("%d",&ptr->data);
    ptr->next = p->next;
    p->next = ptr;

    return head;
};

struct node *insert_end(struct node *head)                           // Node inserted at end
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    printf("\nEnter the value of new node: ");
    scanf("%d",&ptr->data);
    p->next = ptr;
    ptr->next = NULL;

    return head;
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
    struct node *head,*second,*third,*fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    printf("Enter the value of first node: ");
    scanf("%d",&head->data);
    head->next = second;

    printf("Enter the value of second node: ");
    scanf("%d",&second->data);
    second->next = third;

    printf("Enter the value of third node: ");
    scanf("%d",&third->data);
    third->next = fourth;

    printf("Enter the value of fourth node: ");
    scanf("%d",&fourth->data);
    fourth->next = NULL;

    printf("\nBefore insertion\n");
    traverse(head);

    head = insert_between(head);

    printf("\nAfter insertion\n");
    traverse(head);

    head = insert_end(head);

    printf("\nAfter insertion\n");
    traverse(head);

    return 0;
}