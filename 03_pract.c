#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, element, count = 0, *arr;

    printf("Enter the size of an array : ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));                     // dynamic memory alloccation

    printf("Enter the elements of an array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search : ");
    scanf("%d",&element);

    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            printf("%d is present at %d position",element,i + 1);
            count++;
        }
    }
    
    if(count == 0)
    {
        printf("Element is not found !");
    }

    return 0;
}