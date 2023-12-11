#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert_begin(struct node *head)                   // Node inserted at begin
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    
    ptr->next = head;

    printf("Enter the value of new node: ");
    scanf("%d",&ptr->data);
    printf("Node inserted !\n");
    return ptr;    
}

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

    head = insert_begin(head);
    printf("\nAfter insertion\n");
    traverse(head);

    return 0;
}