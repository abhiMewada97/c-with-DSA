#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
        printf("\n");
}

void bubbelSortAdaptive(int arr[], int size)
{
    int temp, isSorted=0;

    for (int i = 0; i < size-1; i++)
    {
        printf("Working on pass number %d\n",i+1);
        isSorted=1;
        for (int j = 0; j < size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted =0;
            }
        }

        if(isSorted)
        return;        
    }
    
}

int main()
{
    // int arr[] = {12,54,65,7,23,9};
    int arr[] = {1,2,4,7,23,29};
    int size=6;

    printArray(arr, size);
    bubbelSortAdaptive(arr, size);
    printArray(arr, size);

    return 0;
}