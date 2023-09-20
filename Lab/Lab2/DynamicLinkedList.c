#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

int main()
{
    int n;
    node *a[20], *start, *p;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter data of nodes: ");
    for(int i=0; i<n; i++)
    {
        a[i] = (node *)malloc(sizeof(node));
        scanf("%d",&a[i]->data);
    }
    for(int i=0; i<n; i++)
    {
        a[i]->next = a[i+1];
    }

    printf("Printing linked list nodes: ");
    start = a[0];
    p = start;
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p=p->next;
    }
    return 0;
}