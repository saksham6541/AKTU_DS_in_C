#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff;
    int exp;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int coeff, int exp)
{

    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    new_node->coeff = coeff;
    new_node->exp = exp;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    struct node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
}

void print_polynomial(struct node *head)
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%dx^%d",temp->coeff,temp->exp);
        if(temp-> next != NULL)
        {
            printf(" + ");
        }
        temp = temp -> next;
    }
    printf("\n");
}
int main()
{
    insert_end(5, 3);
    insert_end(4, 2);
    insert_end(-7, 1);
    insert_end(2, 0);

    print_polynomial(head);

    return 0;
}