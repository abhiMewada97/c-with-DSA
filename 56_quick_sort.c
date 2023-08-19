#include <stdio.h>
void printArray(int *, int);
void quickSort(int *, int, int);
int partition(int *, int, int);

int main()
{
    // int size, arr[] = {3, 5, 2, 1, 4, 2, 13, 1, 12};
    int size, arr[] = {12,11,10,9,8,7,6,5,4,3,2,1};
    // int size, arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // size = sizeof(arr)/sizeof(int);
    size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, size);
    quickSort(arr, 0, size-1);
    printArray(arr, size);

    return 0;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high)
{
        int pivot = arr[low];
        int i = low + 1;
        int j = high;
        int temp;
    do
    {

        while (pivot >= arr[i])
        {
            i++;
        }

        while (pivot < arr[j])
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quickSort(int arr[], int low, int high)
{
    int partitionIndex;

    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}