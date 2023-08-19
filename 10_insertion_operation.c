#include <stdio.h>
// code for Travesal
void display(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
// code for Insertion
int insertion(int arr[], int size, int element, int capacity, int index)
{
    if(size >= capacity){
        printf("Ensertion is failed ");
        return -1;
    }
    for(int i=size-1; i>=index; i--){
        arr[i+1]= arr[i];
    }
    arr[index]=element;
    
    size+=1;
    display(arr,size);
    // return 1;    
}

int main()
{
    int arr[10]={7,8,12,27,88};
    int element = 45, size=5, index=3;
    display(arr,size);
    insertion(arr, size, element, 10, index);
    return 0;
}