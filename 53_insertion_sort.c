#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
        printf("\n");
}

void bubbelSort(int *arr, int size)
{
    int key, j;
    for (int i = 1; i <= size-1; i++)
    {
        // printf("Working on pass number %d\n",i+1);
        
        int key=arr[i];
        j=i-1;

        while (j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;       
    }
    
}

int main()
{
    int arr[] = {12,54,65,7,23,9};
    // int arr[] = {1,2,4,7,23,29};
    int size=6;

    printArray(arr, size);
    bubbelSort(arr, size);
    printArray(arr, size);

    return 0;
}