#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;   //self refrencing structure
};

void linkedListTraversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
    
}

int main()
{
    struct Node *head;
    struct Node *second, *third;

    // Allocate memory for node in the linked list in heap
    head = (struct Node*)malloc(sizeof(struct Node));  // head is a struct pointer
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Linked first and second node
    head->data = 7;
    head->next = second;

    // Linked second and third node
    second->data = 38;
    second->next = third;

    // Terminate the list at the third node
    third->data = 98;
    third->next = NULL;

    linkedListTraversal(head);

    return 0;
}