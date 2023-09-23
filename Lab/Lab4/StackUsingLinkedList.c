#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *previous;
};

struct node *top = NULL;

void push(int val)
{
  struct node *newNode = malloc(sizeof(struct node));
  newNode->data = val;
  newNode->previous = top;
  top = newNode;
}

void pop()
{
  struct node *p;
  if(top==NULL)
  {
    printf("Stack is empty!\n");
  }
  else
  {
    printf("Popped element: %d\n", top->data);
    p = top;
    top = top->previous;
    free(p);
  }
}

void printStack()
{
  struct node *p = top;
  while(p!=NULL)
  {
    printf("%d ", p->data);
    p=p->previous;
  }
  printf("\n");
}
int main() 
{
  printf("Initial Stack\n");
  printStack();
  
  push(10);
  printf("After the push, the new stack\n");
  printStack();
  
  push(20);
  printf("After the push, the new stack\n");
  printStack();
  
  push(30);
  printf("After the push, the new stack\n");
  printStack();
  
  pop();
  printf("After the pop, the new stack\n");
  printStack();
  
  pop();
  printf("After the pop, the new stack\n");
  printStack();
  return 0;
}