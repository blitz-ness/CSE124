#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node* left;
    struct node* right;
};

struct node* createNode(int value)
{
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* insertLeft(struct node* parent, int value)
{
    parent->left = createNode(value);
    return parent->left;
}

struct node* insertRight(struct node* parent, int value)
{
    parent->right = createNode(value);
    return parent->right;
}

void inorderTraversal(struct node* root)
{
    if (root == NULL) return;

    inorderTraversal(root->left);
    printf("%d -> ", root->item);
    inorderTraversal(root->right);
}

void preorderTraversal(struct node* root)
{
    if (root == NULL) return;

    printf("%d -> ", root->item);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(struct node* root)
{
    if (root == NULL) return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d -> ", root->item);
}

int main()
{
    struct node* root = createNode(1);
    insertLeft(root, 12);
    insertRight(root,9);

    insertLeft(root->left, 5);
    insertRight(root->left,6);

    printf("Inorder Traversal:\n");
    inorderTraversal(root);
    printf("\n\nPreorder Traversal:\n");
    preorderTraversal(root);
    printf("\n\nPostorder Traversal:\n");
    postorderTraversal(root);
}