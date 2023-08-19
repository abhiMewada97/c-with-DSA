#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}

int ifEmpty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}

int Enqueue(struct queue *q, int val){
    if(isFull(&q)){
        printf("Queue is full \n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }
}

int Dequeue(struct queue *q){
    int a=-1;
    if(isEmpty(&q)){
        printf("Queue is empty ");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (struct queue *)malloc(q.size*sizeof(int));

    Enqueue(&q,34);
    printf("Dequeue is %d ",Dequeue(&q));

    return 0;
}