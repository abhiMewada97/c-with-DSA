//*******************************************************************************************
struct Node{
    int data;
    struct Node *next;   //self refrencing structure
};

//insert at first   ***************************************************************************
    // head = insertAtFirst(head, 56);

struct Node *insertAtFirst(struct Node * head, int data)
{
    struct Node *ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

//insert in between   ***************************************************************************
    // insertAtIndex(head, 66, 1);

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

//insert At End  ********************************************************************************

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
    return head;
}

//insert after Node   ******************************************************************************
    // head = insertAfterNode(head, second, 76);

struct Node *insertAfterNode(struct Node * head, struct Node * prevNode, int data)
{
    struct Node *ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}