#include<stdio.h>
#define MAX 10

int top = -1;
int mystack[MAX];
int isEmpty()

{
    if(top == -1)
    {
        printf("\nStack is empty\n");
        return 1;
    }
    else
    {
        printf("\nStack is not empty\n");
        return 0;
    }
}

int isFull()
{
    if(top== MAX-1)
    {
        printf("\nStack is full\n");
        return 1;
    }
    else
    {
        printf("\nStack is not full\n");
        return 0;
    }
}
void push(int x)
{
    if(!isFull())
    {
        printf("\nPushing value %d\n", x );
        top++;
        mystack[top]= x ;
    }
}

int pop ()
{
    if(!isEmpty())
    {
        int x= mystack[top];
        mystack[top]= 0;
        int mystack;
        return x;

    }
}

void printarr()
{
    int i;
    if(isEmpty())
    {
        printf("\nThe stack is Empty\n");
    }
    else
    {
        printf("\nPrinting Values of Mystrack\n");
        for(i=0; i<=top; i++)
        {
            printf("%d ", mystack[i]);
        }
    }

}
int main()
{
    int x;
    push(10);
    push(20);
    push(30);
    printarr();
    x = pop();
    printf("Popped value: %d",x);

    printarr();
}
