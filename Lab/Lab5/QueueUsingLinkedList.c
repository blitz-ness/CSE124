#include <stdio.h>
#include <stdlib.h>
 
typedef struct node {
    int data;
    struct node* next;
} node;
 
node *front = NULL, *rear=NULL;


void enqueue(int k)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = k;
    temp->next = NULL;
 
    if (rear == NULL) {
        front = temp;
        rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue()
{

    if (front == NULL)
    {
      printf("Stack is empty!");
      return;
    }
  
    node *temp = front;
    front = front->next;
 
    if (front == NULL)
    {
      rear = NULL;
    }
    free(temp);
}

void display()
{
  node *p = front;
  printf("QUEUE ELEMENTS:\n");
  while(p!=NULL)
  {
    printf("%d ", p->data);
    p = p->next;  
  }
  printf("\n");
}

int main()
{
    enqueue(10);
    display();
    enqueue(20);
    display();  
    dequeue();
    display();  
    dequeue();
    display();
    enqueue(30);
    display();  
    enqueue(40);
    display();
    enqueue(50);
    display();
    dequeue();
    display();

    return 0;
}