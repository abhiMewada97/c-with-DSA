//Deletion link list
struct Node{
    int data;
    struct Node *next;   //self refrencing structure
};

// *********************************************************************
//     Case 1: Deleting the first element from the link list

    head = deleteFirst(head);

struct Node * deleteFirst(struct Node * head){

    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// ***********************************************************************
//     Case 2: Delete the element at index from the link list

   head = deleteAtIndex(head, 2);

struct Node * deleteAtIndex(struct Node * head, int index){

    struct Node * p = head;
    struct Node * q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);    
    return head;
}

// ******************************************************
//     Case 3: Delete the element at End from the link list

    head = deleteAtEnd(head);
    
struct Node * deleteAtEnd(struct Node * head){

    struct Node * p = head;
    struct Node * q = head->next;
    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}
//********************************************************
//     Case 4: Delete the given element from the link list

    head = deleteAtEnd(head,45);  //any value in place of 45 

struct Node * deleteAtEnd(struct Node * head, int value){
    
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }