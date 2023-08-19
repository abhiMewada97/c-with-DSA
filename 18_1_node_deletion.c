#include <stdio.h>
#include <stdlib.h>
// Deletion at first
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
//     Case 1: Deleting the first element from the link list
struct Node * deleteFirst(struct Node * head){

    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//*********this is also correct but we have free reserve memmory in this case above is correct*****
// struct Node * deleteFirst(struct Node * head){

//     head = head->next;
//     return head;
// }
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

    printf("After deletion :\n");

    head = deleteFirst(head);
    linkedListTraversal(head);
    return 0;
}