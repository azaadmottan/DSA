#include<stdio.h>
#include<stdlib.h>

void insetionSort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i - 1;
        int temp = arr[i];

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    
}

int main()
{
    int size;

    printf("Enter the size of an array : ");
    scanf("%d", &size);

    int *arr = (int*)malloc(size * sizeof(int));

    printf("\nEnter the elements of an array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    insetionSort(arr, size);

    printf("\nSorted array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}