#include <stdio.h>
#include <stdlib.h>
// Insertion at the end
struct Node{
    int data;
    struct Node *next;   //self refrencing structure
};

void linkedListTraversal(struct Node* ptr)
{
    while(ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtEnd(struct Node * head, int data)
{
    struct Node *ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    // return head;
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
    fourth->next = NULL;

    linkedListTraversal(head);

    printf("After insertion :\n");

    // head = insertAtEnd(head, 76);
    insertAtEnd(head, 76);
    linkedListTraversal(head);
    return 0;
}