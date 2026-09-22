#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define Max 100
char stack[Max];
int top=-1;

int main()
{
    char s[Max],stack[Max],rev[Max];
    int top = -1;

    printf("Enter a string \n");
    scanf("%s",s);

    int n = strlen(s);

    for(int i =0;i<n;i++)
    {
        stack[++top]= s[i];
    }

    int index = 0;

    while(top != -1)
    {
        rev[index++] = stack[top--];
    }

    rev[index]='\0';

    printf("Reversed String : %s \n",rev);
    return 0;
}