#include<stdio.h>

int main()                                        // Insertion program
{
    int arr[100],pos,size,element;

    printf("Enter the size of an array: ");
    scanf("%d",&size);

    arr[size];
    
    printf("Enter the element of an array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    call:
    printf("\nEnter the 'position' of an element where you have insert(element) in an array:");
    scanf("%d",&pos);

    if (pos <= 0 || pos > size+1)
    {
        printf("INVALID POSITION !");
        goto call;
    }
    else
    {
        size++;
        printf("\nEnter the 'element' which you have insert in an array at position (%d): ",pos);
        scanf("%d",&element);
        for(int i = size; i >= pos-1; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = element;
        printf("\nInserted array: ");
        for(int i = 0; i < size; i++)
        {
            printf("%d  ",arr[i]);
        }
    }
    

    return 0;
}