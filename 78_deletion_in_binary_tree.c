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

struct Node* inOrderProcessor(struct Node * root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }

    return root;
    
}

struct Node *deletionNode(struct Node* root, int value)
{

    if (root == NULL)
    {
        return NULL;
    }

    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    
    struct Node * iPre;
    
    if(value < root->data)
    {
        root->left = deletionNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deletionNode(root->right, value);
    }
    else
    {
        iPre = inOrderProcessor(root);
        root->data = iPre->data;
        root->left = deletionNode(root->left, iPre->data);
    }
    return root;    
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

void inOrder(struct Node *root){

    if(root == NULL){
        return;
    }
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
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

    printf("\n");

    if(isBST(p)){
        printf("It is a binary tree \n");
    }
    else{
        printf("It is not a binary tree \n");
    }

    inOrder(p);
    deletionNode(p, 5);
    printf("\n");
    printf("| Root data %d |\n", p->data);
    inOrder(p);

    return 0;
}