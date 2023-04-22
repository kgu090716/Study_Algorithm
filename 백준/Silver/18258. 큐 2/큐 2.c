#include <stdio.h>
#include <string.h>
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
    char command[10];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%s", command);
        if(!(strcmp(command, "push")))
        {
            int input;
            scanf("%d", &input);
            push(input);
        }
        else if(!(strcmp(command, "pop")))
        {
            if((tail - head) == 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", front());
                pop();
            }
        }
        else if(!(strcmp(command, "size")))
        {
            printf("%d\n", tail - head);
        }
        else if(!(strcmp(command, "empty")))
        {
            printf("%d\n", (tail-head) == 0);
        }
        else if(!(strcmp(command, "front")))
        {
            if((tail - head) == 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", front());
            }
        }
        else
        {
            if((tail - head) == 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", back());
            }
        }
    }
    return 0;
}