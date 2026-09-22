#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define Max 5

int queue[Max];
int rear = -1;
int front = -1;

bool isFull()
{
    return (front == (rear+1)%Max);
}

bool isEmpty()
{
    return(front == -1);
}


void enqueue(int x)
{
    if(isFull())
    {
        printf("Queue is Full");
        return;
    }
    if(isEmpty())
    {
        front = 0;
    }

    rear = (rear+1)%Max;
    queue[rear] = x;
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
        front = (front+1)%Max;
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
    int i = front;
    while(i)
    {
        printf("%d\n",queue[i]);

        if(i == rear)
        {
            break;
        }
        i = (i+1)%Max;
    }
}