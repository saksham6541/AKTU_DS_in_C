#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_beg(int val)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    new_node ->next = head;
    head = new_node;
}

void print_list(struct node *head)
{
    if(head == NULL)
    {
        return;
    }
        while(head != NULL)
        {
            printf("%d\n",head->data);
            head = head->next;
        }    
}
int main()
{
    insert_beg(5);
    insert_beg(6);
    insert_beg(7);
    print_list(head);
    return 0;
}