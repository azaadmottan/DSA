#include<stdio.h>
#include<stdlib.h>

void selectionSort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }

        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int size;

    printf("Eneter the size of an array : ");
    scanf("%d", &size);

    int *arr = (int*)malloc(size * sizeof(int));

    printf("\nEnter the elements of an array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    selectionSort(arr, size);

    printf("\nSorted array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}