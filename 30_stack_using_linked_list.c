#include <stdio.h>
#include <stdlib.h>
int isEmpty();
int isFull();
void showData();
int push();

struct Stack
{

    int data;
    struct Stack *next;
};
struct Stack *top = NULL;


void showData()
{
    if (isEmpty())
    {
        return;
    }

    else
    {
        struct Stack * ptr;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    }
    
}

int isFull()
{
    struct Stack *top;
    struct Stack *p = (struct Stack *) malloc(sizeof(struct Stack));
    if(top == NULL)
    {
        return 1;
    }
    return 0;
}

int isEmpty()
{
    struct Stack *top;
    if (top != NULL)
    {
        return 1;
    }
    return 0;
}

int push(){
    struct Stack *p;

    if(!isFull){
        struct Stack *p = (struct Stack *) malloc(sizeof(struct Stack));
        printf("Enter the element\n");
        scanf("%d",p->data);
        p->next = top;
        top = p;
        return top;
    }
    else{
        printf("Stack is over flow ");
    }
}

int main()
{

    int value;

    while (1)
    {
        printf("Enter the choice \n 1 push \n 2 pop \n 3 print \n 0 to exit \n");
        scanf("%d",&value);
        switch (value)
        {
        case 1:
            push();
            break;

        // case 2:
        //     pop();
        //     break;

        case 3:
            showData();
            break;        
            
        case 0:
            exit(0);    

        default:
            printf("Enter Wrong choice ");
            break;
        }
    }

    return 0;
}