#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

void inOrder(struct Node *root){

    if(root == NULL){
        return;
    }
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}

struct Node *creatNode(int data){
    struct Node *head;  // creating a Node pointer
    head = (struct Node *) malloc (sizeof(struct Node));  //allocating memory in the heap
    head->data = data;
    head->left = NULL;
    head->right = NULL;

    return head;
}

int isBST(struct Node *root){
    static struct Node *prev = NULL;

    if(root != NULL){

        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

struct Node *searchElement(struct Node *root, int key){

    if (root == NULL)
    {
        return NULL;
    }
    if(key == root->data){
        return root;
    }
    else if (key < root->data)
    {
        searchElement(root->left, key);
    }
    else{
        searchElement(root->right, key);
    }
    
    
}

int main()
{
    struct Node *p = creatNode(5);
    struct Node *p1 = creatNode(3);
    struct Node *p2 = creatNode(6);
    struct Node *p3 = creatNode(1);
    struct Node *p4 = creatNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);
    printf("\n");

    if(isBST(p)){
        printf("It is a binary tree \n");
    }
    else{
        printf("It is not a binary tree \n");
    }

    struct Node *n = searchElement(p, 3);
    if(n != NULL){
        printf("Found : %d \n", n->data);
    }
    else{
        printf("Element not Found \n");
    }

    return 0;
}