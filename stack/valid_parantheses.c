#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define Max 100
int stack[Max];
int top =-1;

void push(char x)
{
    if (top == Max-1)
    {
        printf("OVERFLOW");
        return;
    }
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
    {
        return '\0';
    }
    int data = stack[top];
    top = top-1;
    return data;
}

bool isEmpty()
{
    return top ==-1;
}

bool isValid(char *s)
{
    for(int i =0;s[i] != '\0';i++)
    {
        char ch = s[i];

        if(ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
        }
        else if(ch == '}' || ch == ')' || ch == ']')
        {
            if(isEmpty)
            {
                return false;
            }
            char topchar = pop();

            if((ch == ')' && topchar != '(')||
               (ch == '}' && topchar != '{')||
               (ch == ']' && topchar != '['))
               {
                return false;
               }
        }
    }
    return isEmpty();
}

int main()
{
    char s[Max];

    printf("Input the string ");
    scanf("%s",s);

    if(isValid(s))
    {
        printf("It is a valid Parantheses\n");
    }
    else
    {
        printf("It is not a valid Paranathese");
    }
}