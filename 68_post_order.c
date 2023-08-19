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

void preOrder(struct Node *root){

    if(root == NULL){
        return;
    }
    preOrder(root->left);
    preOrder(root->right);
    printf("%d ",root->data);
}

int main()
{
    struct Node *p = creatNode(4);
    struct Node *p1 = creatNode(1);
    struct Node *p2 = creatNode(6);
    struct Node *p3 = creatNode(5);
    struct Node *p4 = creatNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preOrder(p);

    return 0;
}