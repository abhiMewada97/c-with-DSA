#include <stdio.h>

int linearSearch(int arr[], int value, int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == value)
        return i;
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
    int arr[] = { 12,1,42,13,66,956,3,7};
    int size = sizeof(arr)/sizeof(int);
    int value = 66;
    display(arr, size);
    int searchIndex = linearSearch(arr, value, size);
    printf("%d is at index %d ",value, searchIndex);

    return 0;
}