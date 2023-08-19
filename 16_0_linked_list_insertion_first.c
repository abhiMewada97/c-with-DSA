#include <stdio.h>
#include <stdlib.h>
// Insertion at the beginning
struct Node{
    int data;
    struct Node *next;   //self refrencing structure
};

void linkdeListTraversal(struct Node* ptr)
{
    while(ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node * head, int data)
{
    struct Node *ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
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

    linkdeListTraversal(head);

    printf("After insertion :\n");

    head = insertAtFirst(head, 56);
    linkdeListTraversal(head);
    return 0;
}