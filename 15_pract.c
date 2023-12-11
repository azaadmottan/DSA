#include<stdio.h>
#include<stdlib.h>

char stack[100];
int top = -1;

int priority(char c)
{
    if (c == '^')
    {
        return 4;
    }
    else if(c == '*' || c == '/')
    {
        return 3;
    }
    else if(c == '+' || c == '-')
    {
        return 2;
    }
    else
    {
        return -1;
    }
}

void push(char ch)
{   
        top++;
        // printf("%c",ch);
        stack[top] = ch;
}

char pop()
{
        char ch = stack[top];
        top--;
        return ch;
}
// ((a+(b/c))*(d^e)-f)      ||       ((A+(B/C))*(D^E)-F)        || (a*(b+c*(d+e))/(f*(g+h)))
int main()
{
    char exp[100], ch, res;

    printf("Enter an infix expression: ");
    gets(exp);

    printf("\nPostfix expression: ");

    for (int i = 0; exp[i] != '\0'; i++)
    {  
        ch = exp[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf("%c ",ch);
        }
        else if(ch == '(')
        {
            push(ch);
        }
        else if(ch == ')')
        {
            while ((ch = pop()) != '(') 
            {
                printf("%c ",ch);
            }
        }
        else
        {
            while (priority(stack[top]) > priority(ch))
            {
                printf("%c ",pop());
            }
            push(ch);
        }
    }

    return 0;
}