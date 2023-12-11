#include<stdio.h>

int main()                                                // Deletion program
{
    int arr[100],size,pos,element;

    printf("Enter the size of an array: ");
    scanf("%d",&size);

    // arr[size];

    printf("Enter the element of an array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    call:
    printf("\nEnter the 'position' of an element which you have delet(element): ");
    scanf("%d",&pos);

    if (pos <= 0 || pos > size)
    {
        printf("INVALID POSITION !");
        goto call;
    }
    else
    {
        size--;
        for(int i = pos-1; i <= size; i++)
        {
            arr[i] = arr[i+1];
        }
        printf("\nDletion array: ");
        for(int i = 0; i < size; i++)
        {
            printf("%d  ",arr[i]);
        }
    }
    return 0;
}