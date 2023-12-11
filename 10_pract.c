#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *circular_insert_begin(struct node *head)       // Circular linked list (insert node at begin)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head->next;

    printf("Enter the value of new node: ");
    scanf("%d",&ptr->data);
    
    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;                      // At this point: p points the last node of the circular linked list
    ptr->next = head;
    head = ptr;
    
    return ptr;
}

void traverse(struct node *head)
{
    struct node *ptr = head;

    do{
        printf("Data value: %d\n",ptr->data);
        ptr = ptr->next;
    }while (ptr != head);
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
    fourth->next = head;

    printf("\nCircular linked list before insertion\n");
    traverse(head);

    head = circular_insert_begin(head);

    printf("\nCircular linked list after insertion\n");
    traverse(head);

    return 0;
}