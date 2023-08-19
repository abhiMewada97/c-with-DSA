#include <stdio.h>
#include <stdlib.h>
// insert at first
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

struct Node * insertAtFirst(struct Node * head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // at this point p ponts to the last node of the circular link list
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;    
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
    printf("\nAfter Insertion :\n");
    head = insertAtFirst(head, 99);
    head = insertAtFirst(head, 9);
    linkedListTraversal(head);
    return 0;
}