#include <stdio.h>
#include <stdlib.h>
// Deletion at element
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
//     Case 4: Delete the element with a given value from the link list
struct Node * deleteAtEnd(struct Node * head, int value){
    
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
    p->next = q->next;
    free(q);
    }
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
    fourth->next = NULL;

    linkedListTraversal(head);

    printf("After deletion :\n");

    head = deleteAtEnd(head,45);  //any value in place of 45 
    linkedListTraversal(head);
    return 0;
}