#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void printArray(int *, int);
int maximum(int *, int);
void countSort(int *, int);
int partition(int *, int, int);

int main()
{
    // int size, arr[] = {3, 5, 2, 1, 4, 2, 13, 1, 12};
    int size, arr[] = {12,11,10,9,8,7,6,5,4,3,2,1};
    // size = sizeof(arr)/sizeof(int);
    size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, size);
    countSort(arr, size);
    printArray(arr, size);

    return 0;
}

int maximum(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }       
    }
    return max;
}

void countSort(int arr[], int size)
{
    int max = maximum(arr, size);

    int *count = (int *) malloc((max+1)*sizeof(int));


    for (int i = 0; i < max+1; i++)
    {
        count[i]=0;
    }

    for (int i = 0; i < max; i++)
    {
        // count[arr[i]] = count[arr[i]] +1;
        count[arr[i]]++;
    }

    int j=0,i=0;

    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            // count[arr[i]] = count[arr[i]] +1;
            count[arr[i]]--;
            j++;
        }
        else{
            i++;
        }
        
    }
    
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}