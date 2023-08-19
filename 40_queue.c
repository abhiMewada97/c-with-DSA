#include <stdio.h>
#include <stdlib.h>

int queue[10], size = 10, rear = -1, front = -1;
void enQueue();
void deQueue();
void display();
int isOverflow();
int isUnderflow();

int main()
{
    int choice, elem;

    do
    {
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. Display \n");
        printf("0. Exit \n");
            scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter element ");
            scanf("%d", &elem);
            enQueue(elem);
            break;

        case 2:
            deQueue();
            break;

        case 3:
            display();
            break;

        case 0:
            exit(0);

        default:
            printf("Enter wrong choice\n");
            break;
        }
    } while (1);

    return 0;
}

int isOverflow(){

    if(rear > size){
        return 1;
    }
    return 0;
}

int isUnderflow(){
    if(rear == -1 || rear < front){
    return 1;
    }

    return 0;
}

void enQueue(int elem){

    if (front == -1)
    {
        front = 0;
    }
    

    rear++;
    if(isOverflow()){
        printf("Stack of overflow\n");
        return;
    }
    queue[rear] = elem;
}

void deQueue(){

    
    if(isUnderflow()){
        printf("Stack of underflow\n");
        return;
    }

    int temp;

    temp = queue[front];
    free(temp);
    temp = NULL;
    front++;
}

void display(){

    if(isUnderflow()){
        printf("Stack of underflow \n");
        return;
    }

    for (int i = front; i <= rear; i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
    
}