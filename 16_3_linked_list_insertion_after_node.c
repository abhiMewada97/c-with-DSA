#include <stdio.h>
#include <stdlib.h>
// Insertion after Node
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

// struct Node *insertAfterNode(struct Node * head, struct Node * prevNode, int data)
struct Node *insertAfterNode(struct Node * prevNode, int data)
{
    struct Node *ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

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

    // head = insertAfterNode(head, second, 76);
    // insertAfterNode(head, second, 76);
    insertAfterNode(second, 76);
    linkedListTraversal(head);
    return 0;
}