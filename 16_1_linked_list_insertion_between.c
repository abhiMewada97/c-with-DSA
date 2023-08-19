#include <stdio.h>
#include <stdlib.h>
// Insert in between
struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node* ptr){
    while(ptr != NULL){
    printf("Element : %d\n", ptr->data);
    ptr = ptr->next;
    }
}

struct Node *insertAtIndex(struct Node * head, int data, int index){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
}
//***********************************************************
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 6;
    head->next = second;

    second->data = 32;
    second->next = third;

    third->data = 45;
    third->next = fourth;

    fourth->data = 56;
    fourth->next = NULL;

    linkedListTraversal(head);

    printf("After insertion :\n");

    insertAtIndex(head, 66, 1);
    linkedListTraversal(head);

    return 0;
}