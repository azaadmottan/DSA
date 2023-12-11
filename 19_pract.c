#include<stdio.h>
#include<stdlib.h>

int partition(int *arr, int low, int high)                                  // Quick sort
{
    int temp;
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

   
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }while (i < j);
    
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quick_sort(int *arr, int low, int high)
{
    int index;

    if (low < high)
    {
        index = partition(arr, low, high);
        quick_sort(arr, low, index-1);               // sort left array
        quick_sort(arr, index+1, high);              // sort right array
    }
    
}

void display(int *arr, int size)
{
    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}                                                           

int main()
{
    int size, low, high;

    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int *arr = (int*)malloc(size*sizeof(int));
    // int arr[size];

    printf("Enter the elements of an array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    low = 0;
    high = size-1;

    quick_sort(arr, low, high);

    display(arr, size);

    return 0;
}