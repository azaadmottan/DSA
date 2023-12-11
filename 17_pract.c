#include<stdio.h>
#include<stdlib.h>

void bubble(int *arr, int n)
{
    int temp; 
    for(int i = 0; i < n; i++)                 // for number of pass 
    {
        for(int j = 0; j < n-i-1; j++)           // for number of comparison 
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }    
}

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("[%d] ",arr[i]);
    }
}

int main()
{
    int size;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    int *arr = (int *)malloc(size*sizeof(int));

    printf("Enter the element of an array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    bubble(arr,size);

    printf("Sorted array : ");
    display(arr,size);

    return 0;
}