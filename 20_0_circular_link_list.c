#include <stdio.h>
#include <stdlib.h>
// Deletion at element
struct Node{
    int data;
    struct Node *next;   //self refrencing structure
};

void linkedListTraversal(struct Node* head){
    struct Node *ptr = head;
    do{
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    
    }while(ptr != head);
}

//********************************************************
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 6;
    head->next = second;

    second->data = 32;
    second->next = third;

    third->data = 45;
    third->next = fourth;

    fourth->data = 56;
    fourth->next = head;

    linkedListTraversal(head);

    return 0;
}