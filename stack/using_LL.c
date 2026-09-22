#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void push(int x)
{
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    new_node-> data = x;
    new_node-> next = head;
    head = new_node;
}

int pop()
{
    if(head == NULL)
    {
        printf("UNDERFLOW");
        return -1;
    }
    struct node *temp = head;
    int item = head->data;

    head= head->next;

    free(temp);
    return item;
}

int peek()
{
    if(head == NULL)
    {
        printf("UNDERFLOW");
        return -1;
    }
    int val = head-> data;
    return val;
}

bool isEmpty()
{
    if(head == NULL)
    {
        return true;
    }
    else{
        return false;
    }
}

void print()
{
    struct node * temp = head;
    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
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