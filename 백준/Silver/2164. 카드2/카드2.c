#include <stdio.h>
int dat[10000005];
int head = 0, tail = 0;

void push (int x)
{
    dat[tail++] = x;
}

void pop()
{
    head++;
}

int front()
{
    return dat[head];
}

int back()
{
    return dat[tail-1];
}

int main(void)
{
    int N;
    int temp;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
    {
        push(i);
    }
    while((tail - head) != 1)
    {
        pop();
        temp = front();
        pop();
        push(temp);
    }
    printf("%d", front());
    return 0;
}