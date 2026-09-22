#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define Max 100

int queue[Max];
int rear = -1;
int front = -1;

void enqueue(int x)
{
    if(rear == Max -1)
    {
        printf("Overflow");
        return;
    }
    if(front == -1)
    {
        front = 0;
    }   
    queue[++rear] = x;
}

int dequeue()
{
    if(front ==-1)
    {
        printf("UnderFlow");
        return -1;
    }
    int item = queue[front];
    if(front == rear )
    {
        front = rear = -1;
    }
    else
    {
        front = front+1;
    }
    return item;
}

void print()
{
    if(front == -1)
    {
        printf("Queue is Empty");
        return;
    }
    for(int i =front ;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
    }
}
bool isEmpty()
{
    if(front == -1)
    {
        return true;
    }
    else{
        return false;
    }
}

