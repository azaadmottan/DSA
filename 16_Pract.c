#include<stdio.h>

char stack[100];
int top = -1;

void push(char ch)
{   
    top++;
    // printf("push %c\n",ch);
    stack[top] = ch;
}

char pop()
{
    char ch = stack[top];
    top--;
    return ch;
}

int match(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    if (a == '{' && b == '}')
    {
        return 1;
    }
    return -1;
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        printf("Paranthesis: %c    (unbalanced !)\n",stack[top]);
        return -1;
    }
}

int paranthesis_match(char *exp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(exp[i]);
        }        
        else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            char poped = pop();
            printf("Paranthesis: %c %c\n",poped,exp[i]);
            if(match(poped, exp[i]) == -1)
            {
                return 0;
            }
        }
    }
    
    if (isEmpty() == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char exp[100];

    printf("Enter an expression: ");
    gets(exp);

    if (paranthesis_match(exp))
    {
        printf("Balanced paranthesis");
    }
    else
    {
        printf("Unbalanced paranthesis");
    }

    return 0;
}