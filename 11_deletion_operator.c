#include <stdio.h>

void display(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int deletion(int arr[], int size, int index)
{
    // if(index > size)
    // {
    //     return -1;
    // }

    for(int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
}

int main()
{
    int arr[20]={23,43,66,17,54};
    int size=5, index=2;
    display(arr,size);
    deletion(arr, size, index);
    size-=1;
    display(arr,size);
}