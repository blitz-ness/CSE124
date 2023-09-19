#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    struct node *node1, *node2, *node3, *start;
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));

    node1->data = 1;
    node2->data = 2;
    node3->data = 3;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    start = node1;

    struct node *p = start;

    bool result = false;
    int key = 2;

    while (p != NULL)
    {
        if (p->data == key)
        {
            result = true;
        }
        p = p->next;
    }
    printf("%s", result? "True":"False");
    return 0;
}
