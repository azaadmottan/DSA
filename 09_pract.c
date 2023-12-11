#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *delete_between(struct node *head)                        // Deletion between nodes
{   
    struct node *p = head;
    struct node *q = head->next;

    int pos, i=0;
    printf("Enter which node you have to delete: ");
    scanf("%d",&pos);
    while (i < pos-1)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    p->next = q->next;
    // head = head->next;

    free(q);

    return head; 
}

struct node *delete_end(struct node *head)                        // Deletion at end
{   
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);

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

    head = delete_end(head);

    printf("\nAfter deletion\n");
    traverse(head);

    return 0;
}