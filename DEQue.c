#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define Max 5

int deque[Max];
int rear = -1;
int front = -1;

bool isFull()
{
    return(front == 0 && rear == Max-1) || (front == rear+1);
}

bool isEmpty()
{
    return(front == -1 && rear == -1);
}

void insert_at_front(int x)
{
    if(isFull())
    {
        printf("Queue is Full");
        return;
    }

    if(isEmpty())
    {
        front = rear = 0;
    }
    else if (front == 0)
    {
        front = Max-1;
    }
    else
    {
        front --;
    }

    deque[front] = x;
}

void insert_at_end(int x)
{
    if(isFull())
    {
        printf("Queue is Full");
        return;
    }

    if(isEmpty())
    {
        front = rear = 0;
    }
    else if (rear == Max-1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }

    deque[rear] = x;
}

void delete_at_front()
{
    if(isEmpty())
    {
        printf("Deque is Empty");
        return;
    }
    printf("%d\n",deque[front]);
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if(front == Max-1)
    {
        front = 0;
    }
    else{
        front++;
    }
}


void delete_at_rear()
{
    if(isEmpty())
    {
        printf("Deque is Empty");
        return;
    }
    printf("%d\n",deque[rear]);
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if(rear == 0)
    {
        rear = Max-1;
    }
    else{
        rear--;
    }
}

void display()
{
    if(isEmpty())
    {
        printf("Deque is Empty");
        return;
    }

    int i = front;
    while(1)
    {
        printf("%d \n",deque[i]);
        if(i == rear)
        {
            break;
        }
        i = (i+1)%Max;
    }
}