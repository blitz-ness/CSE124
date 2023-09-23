#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *previous;
    struct node *next;
} node;

int main()
{
    node *node1, *node2, *node3, *node4;
    node1 = (node *)malloc(sizeof(node));
    node2 = (node *)malloc(sizeof(node));
    node3 = (node *)malloc(sizeof(node));
    node4 = (node *)malloc(sizeof(node));

    node1->data = 4;
    node2->data = 5;
    node3->data = 6;
    node4->data = 7;

    node1->previous = NULL;
    node2->previous = node1;
    node3->previous = node2;
    node4->previous = node3;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    node *left = node1;
    node *right = node4;
    node *p, *t;



    //Traversal from left
    p=left;
    while(p!=NULL)
    {
        printf("%d\t", p->data);
        p=p->next;
    }
    printf("\n");

    //Traversal from right
    p=right;
    while(p!=NULL)
    {
        printf("%d\t", p->data);
        p=p->previous;
    }


    return 0;
}