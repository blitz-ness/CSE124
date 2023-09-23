#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *start;

void printList()
{
    node *p = start;
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    node *node1, *node2, *node3, *node4, *node5, *node6, *node7;
    node1 = (node *)malloc(sizeof(node));
    node2 = (node *)malloc(sizeof(node));
    node3 = (node *)malloc(sizeof(node));
    node4 = (node *)malloc(sizeof(node));
    node5 = (node *)malloc(sizeof(node));
    node6 = (node *)malloc(sizeof(node));
    node7 = (node *)malloc(sizeof(node));

    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    node4->data = 4;
    node5->data = 5;
    node6->data = 6;
    node7->data = 7;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = NULL;
    start = node1;
    
    node *p, *t;

    //Deletion at the beginning
    t = start;
    start = start->next;
    free(t);
    printList();

    //Deletion at the end
    p = start;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    free(p->next);
    p->next = NULL;
    printList();

    //Deletion at the index k
    p->next = NULL;

    int k = 3;
    p = start;
    for (int i = 1; i < k - 1; i++)
    {
        if (p->next != NULL)
        {
            p = p->next;
        }
    }
    t = p->next;
    p->next = p->next->next;
    free(t);
    printList();

    return 0;
}
