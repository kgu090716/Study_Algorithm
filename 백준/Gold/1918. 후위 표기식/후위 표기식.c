#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char input[1000];

typedef char stackdata;

// 스택 함수
int empty(int *top)
{
    if (*top < 0)
        return 1;
    return 0;
}

void push(stackdata stack[], int *top, stackdata data)
{
    stack[++(*top)] = data;
}

int pop(stackdata stack[], int *top)
{
    if (!empty(top))
        return stack[(*top)--];
}

stackdata whatTop(stackdata stack[], int *top)
{
    return stack[*top];
}


// 계산 함수
int priority(char operator)
{
    if (operator== '+' || operator== '-')
        return 1;
    else if (operator== '*' || operator== '/')
        return 2;
    else
        return 0;
}

char *toPostfix(char expression[])
{
    stackdata stack[256];
    char *res = (char *)malloc(sizeof(char) * 256);
    int top = -1;
    int i = 0;
    int resindex = 0;
    while (expression[i] != '\0')
    {
        if (expression[i] == '(')
        {
            push(stack, &top, expression[i]);
        }
        else if (expression[i] == ')')
        {
            while (whatTop(stack, &top) != '(')
            {
                res[resindex++] = pop(stack, &top);
            }
            pop(stack, &top);
        }
        else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
        {
            if (empty(&top))
            {
                push(stack, &top, expression[i]);
            }
            else
            {
                if (priority(whatTop(stack, &top)) < priority(expression[i]))
                    push(stack, &top, expression[i]);
                else
                {
                    while (!empty(&top) && priority(whatTop(stack, &top)) >= priority(expression[i]))
                    {
                        res[resindex++] = pop(stack, &top);
                    }
                    push(stack, &top, expression[i]);
                }
            }
        }
        else 
        {
            res[resindex++] = expression[i];
        }
        i++;
    }
    while (!empty(&top))
    {
        res[resindex++] = pop(stack, &top);
    }
    //printf("resindex : %d\n", resindex);
    res[resindex] = '\0';
    return res;
}

int main(void)
{
    scanf("%s", input);
    char *res = toPostfix(input);
    printf("%s", res);
    free(res);
}