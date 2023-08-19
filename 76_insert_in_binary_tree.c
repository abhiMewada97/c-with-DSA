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

void insertElement(struct Node *root, int key){

    struct Node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("can not insert %d, Already in BST \n",key);
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else{
            root = root->right;
        }       
    }
    
    struct Node *new = creatNode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else{
        prev->right = new;
    }
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

    insertElement(p,16);
    printf("%d \n",p->right->right->data);

    return 0;
}