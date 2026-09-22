#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


struct node{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int x)
{

    struct node *new_node = (struct node *)malloc(sizeof(struct node)); 
    new_node -> data = x;
    new_node -> next = NULL;
    if(front == NULL)
    {
        front = new_node;
        rear = new_node;
    }
    else
    {
        rear-> next = new_node;
        rear = new_node;
    }
}

int dequeue()
{
    if(front == NULL)
    {
        printf("Underflow");
        return -1;
    }
    struct node *temp = front;

    int val = front->data;
    front = front->next;

    if(front == NULL)
    {
        rear = NULL;
    }

    free(temp);

    return val;
}

bool isEmpty()
{
    return (front == NULL);
}

void print()
{
    if(front == NULL)
    {
        printf("Queue is Empty");
    }

    struct node * temp = front;
    while(temp != NULL)
    {
        printf("%d\n" , temp-> data);
        temp = temp->next;
    }
}