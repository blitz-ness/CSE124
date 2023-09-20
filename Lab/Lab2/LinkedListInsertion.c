#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
node *start = NULL;
void print()
{
    node *p = start;

    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    node *node1, *node2, *node3, *newNode,*p;

    node1 = (node *)malloc(sizeof(node));
    node2 = (node *)malloc(sizeof(node));
    node3 = (node *)malloc(sizeof(node));

    node1->data = 1;
    node2->data = 2;
    node3->data = 3;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    start = node1;

    // Insertion at the beginning of the linked list
    newNode = (node *)malloc(sizeof(struct node));
    newNode->data = 4;
    newNode->next = node1;
    start = newNode;
    print();

    // Insertion at the end of the linked list
    newNode = (node *)malloc(sizeof(node));
    newNode->data = 5;
    newNode->next = NULL;

    p = start;

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = newNode;
    print();

    // Insertion at position K
    newNode = (struct node *)malloc(sizeof(node));
    newNode->data = 6;
    newNode->next = NULL;

    p = start;
    int k = 3;
    for (int i = 2; i < k; i++)
    {
        if (p->next != NULL)
        {
            p = p->next;
        }
    }
    newNode->next = p->next;
    p->next = newNode;
    print();

    return 0;
}
