#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size, element, low, mid, high, count=0;

    printf("Enter the size of an array : ");
    scanf("%d",&size);

    int *arr = (int *)malloc(size * sizeof(int));        // dynamic memory alloccation

    printf("Enter the element of an array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to search : ");
    scanf("%d",&element);

    low = 0; 
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high)/2;

        if (arr[mid] == element)
        {
            printf("The element %d is found at position %d",element,mid+1);
            count++;
            break;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    
    if (count == 0)
    {
        printf("The element %d is not found in an array !",element);
    }

    return 0;
}