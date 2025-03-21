#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>
int precedence(char op)
{
    switch (op)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return -1;
    }
}
char *covertInfixtoPrefix(char *exp)
{
    int size = strlen(exp), top = -1, index = 0;
    char operator[size];
    char *str = (char *)malloc(size + 2);
    for (int i = size - 1; i >= 0; i--)
    {
        char ch = exp[i];
        if (isdigit(ch) || isalpha(ch))
            str[index++] = ch;
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        {
            if (top == -1)
                operator[++top] = ch;
            else
            {
                while (top != -1 && precedence(ch) <= precedence(operator[top]))
                {
                    str[index++] = operator[top--];
                }
                operator[++top] = ch;
            }
        }
        else if (ch == ')')
            operator[++top] = ch;
        else if (ch == '(')
        {
            while (operator[top] != ')')
            {
                str[index++] = operator[top--];
            }
            top--;
        }
    }
    while (top != -1)
    {
        str[index++] = operator[top--];
    }
    str[index] = '\0';
    return strrev(str);
}
int main()
{
    char exp[100];
    printf("Enter infix expression: ");
    gets(exp);
    printf("Prefix form of infix Expression %s is %s\n", exp, covertInfixtoPrefix(exp));
    return 0;
}