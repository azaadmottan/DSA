#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *delete_begin(struct node *head)                        // Deletion at begin
{   
    struct node *p = head;

    head = head->next;

    free(p);

    return head; 
}

void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Data value: %d\n",ptr->data);
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

    printf("\nBefore deletion\n");
    traverse(head);

    head = delete_begin(head);

    printf("\nAfter deletion\n");
    traverse(head);

    return 0;
}