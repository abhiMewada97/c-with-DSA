#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;   //arr ko pointer eshliye banaya hai kyu hum dynamicaly memory allocate karenge;
};

int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("Stack is over flow \n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int main(){
    //struct stack *sp;  //structure pointer jo ki address store karte hai ek structure ka
    
    //  struct instance ban gaya hai abh ham structure ke  size, top, *arr ka use kar dakte hai
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size =10;
    sp->top =-1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

    printf("Before insertion element \n");
    printf("%d \n",isEmpty(sp));
    printf("%d \n",isFull(sp));

    printf("After insertion element \n");
    push(sp,1);
    push(sp,2);
    push(sp,3);
    push(sp,4);
    push(sp,5);
    push(sp,6);
    push(sp,7);
    push(sp,8);
    push(sp,9);
    push(sp,10);
    printf("%d \n",isEmpty(sp));
    printf("%d \n", isFull(sp));

    return 0;

}