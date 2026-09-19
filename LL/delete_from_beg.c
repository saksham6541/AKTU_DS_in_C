#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int val)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->next = NULL;

    if(head == NULL)
    {
        head = new_node;
        return;
    }

    struct node *temp = head;

    while(temp-> next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void delete_beg()
{
    if(head == NULL)
        {
            printf("List is empty\n");
            return;
        }
    head = head->next;
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
    insert_end(5);
    insert_end(6);
    insert_end(7);
    print_list(head);
    delete_beg();
    printf("List after deleteing the beginning element\n");
    print_list(head);
    return 0;
}