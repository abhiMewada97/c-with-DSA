#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
        printf("\n");
}

void bubbelSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    
}

int main()
{
    int arr[] = {12,54,65,7,23,9};
    int size=6;

    printArray(arr, size);
    bubbelSort(arr, size);
    printArray(arr, size);

    return 0;
}