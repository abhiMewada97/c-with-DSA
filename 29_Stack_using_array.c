#include <stdio.h>
#include <stdlib.h>

int stack[10], size = 10, top = -1;
void push();
void pop();
void display();
int isOverflow();
int isUnderflow();

int main()
{
    int choice, elem;

    while(1)
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
            push(elem);
            break;

        case 2:
            pop();
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
    }

    return 0;
}

int isOverflow(){

    if(top > size-1){
        return 1;
    }
    return 0;
}

int isUnderflow(){
    if(top < 0){
    return 1;
    }

    return 0;
}

void push(int elem){

    top++;
    if(isOverflow()){
        printf("Stack of overflow\n");
    }
    stack[top] = elem;
}

void pop(){
    
    if(isUnderflow()){
        printf("Stack of underflow\n");
    }

    int temp;
    temp = stack[top];
    free(temp);
    temp = NULL;
    top--;
}

void display(){

    if(isUnderflow()){
        printf("Stack of underflow \n");
        return;
    }

    for (int i = top; i >= 0; i--)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
    
}