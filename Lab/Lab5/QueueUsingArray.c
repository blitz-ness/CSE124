#include <stdio.h>
#include <stdlib.h>
#define maxsize 5
int front = -1, rear = -1;
int queue[maxsize];

void enqueue() {
  int item;
  printf("\nEnter the element\n");
  scanf("\n%d", &item);
  if (rear == maxsize - 1) {
    printf("\nOVERFLOW\n");
    return;
  }
  if (front == -1 && rear == -1) {
    front = 0;
    rear = 0;
  } else {
    rear = rear + 1;
  }
  queue[rear] = item;
  printf("\nValue inserted ");
}

void dequeue() {
  int item;
  if (front == -1 || front > rear) {
    printf("\nUNDERFLOW\n");
    return;

  } else {
    item = queue[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } else {
      front = front + 1;
    }
    printf("\nValue deleted: %d", item);
  }
}

void display() {
  int i;
  if (rear == -1) {
    printf("\nEmpty queue!!!\n");
  } else {
    printf("\nQueue:\n");
    for (i = front; i <= rear; i++) {
      printf("%d ", queue[i]);
    }
  }
}

void main() {
  enqueue();
  display();
  enqueue();
  display();
  dequeue();
  display();
}
