#include <stdio.h>

int binarySearch(int arr[], int value, int size)
{
    int startPoint = 0, endPoint = size-1, midPoint;
    while(startPoint <= endPoint)
    {
        midPoint = (startPoint + endPoint)/2;
        if (arr[midPoint] == value)
        {
            return midPoint;
        }
        
        if (arr[midPoint] < value)
        {
            startPoint = midPoint+1;
        }
                
        else
        {
            endPoint = midPoint-1;
        }
    }
    return -1;
}
int display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = { 12,14,21,36,66,69,80,97};
    int size = sizeof(arr)/sizeof(int);
    int value = 66;

    display(arr, size);

    int searchIndex ;
    searchIndex = binarySearch(arr, value, size);

    printf("%d is at index %d ",value, searchIndex);

    return 0;
}