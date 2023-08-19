#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node *creatNode(int data){
    struct Node *head;  // creating a Node pointer
    head = (struct Node *) malloc (sizeof(struct Node));  //allocating memory in the heap
    head->data = data;
    head->left = NULL;
    head->right = NULL;

    return head;
}

int main()
{
/*
    // constructing the root node
    struct Node *p;
    p =  (struct Node *)malloc(sizeof(struct Node));
    p->left = NULL;
    p->right = NULL;

    // constructing the second node
    struct Node *p1;
    p1 =  (struct Node *)malloc(sizeof(struct Node));
    p1->left = NULL;
    p1->right = NULL;

    // constructing the third Node
    struct Node *p2;
    p2 =  (struct Node *)malloc(sizeof(struct Node));
    p2->left = NULL;
    p2->right = NULL;

    // linking the root Node with
    p->left = p1;
    p->right = p2;
*/
// /*
    struct Node *p = creatNode(1);
    struct Node *p1 = creatNode(2);
    struct Node *p2 = creatNode(3);

    p->left = p1;
    p->right = p2;
// */
    return 0;
}