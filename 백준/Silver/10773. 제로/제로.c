#include <stdio.h>
const int MX = 10000005;
int dat[10000005];
int pos = 0;

void push(int x)
{
    dat[pos++] = x;
}

void pop()
{
    pos--;
}

int top()
{
    return dat[pos-1];
}

int main(void)
{
    int k;
    int input;
    int sum = 0;
    scanf("%d", &k);
    for(int i = 0 ; i < k; i++)
    {
        scanf("%d", &input);
        if(input == 0)
        {
            pop();
        }
        else
        {
            push(input);
        }
    }
    while(pos > 0)
    {
        sum+=top();
        pop();
    }
    printf("%d", sum);
}