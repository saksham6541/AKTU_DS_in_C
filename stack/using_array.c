#include <stdio.h>
#include <stdbool.h>

#define Max 100
int stack[Max];
int top = -1;

void push(int x)
{
    if(top == Max-1)
    {
        printf("OVERFLOW");
        return;
    }
    top = top+1;
    stack[top] = x;
    return;
}

int pop()
{
    if(top == -1)
    {
        printf("UNDErFLOW");
        return -1;
    }
    int item = stack[top];
    top = top-1;
    return item;
}

int peek()
{
    if(top == -1)
    {
        printf("UNDERFLOW");
        return -1;
    }
    return stack[top];
}

bool isEmpty()
{
    if( top == -1)
    {
        return true;
    }
    else{
        return false;
    }
}

bool isFull()
{
    if(top == Max-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void print()
{
    for(int i = top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
int main()
{
    push(10);
    push(3);
    push(15);
    print();
    pop();
    print();
}