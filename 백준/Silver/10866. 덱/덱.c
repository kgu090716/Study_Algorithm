#include <stdio.h>
#include <string.h>
const int MX = 1000005;
int dat[1000005*2+1];
int head = MX, tail = MX;

void push_front(int x)
{
    dat[--head] = x;
}

void push_back(int x)
{
    dat[tail++] = x;
}

void pop_front()
{
    head++;
}

void pop_back()
{
    tail--;
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
    char command[30];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%s", command);
        if(!strcmp(command, "push_front"))
        {
            int input;
            scanf("%d", &input);
            push_front(input);
        }
        else if(!strcmp(command, "push_back"))
        {
            int input;
            scanf("%d", &input);
            push_back(input);
        }
        else if(!strcmp(command, "pop_front"))
        {
            if(tail - head)
            {
                printf("%d\n", front());
                pop_front();
            }
            else
                printf("-1\n");
        }
        else if(!strcmp(command, "pop_back"))
        {
            if(tail - head)
            {
                printf("%d\n", back());
                pop_back();
            }
            else
                printf("-1\n");
        }
        else if(!strcmp(command, "size"))
        {
            printf("%d\n", tail-head);
        }
        else if(!strcmp(command, "empty"))
        {
            if(tail - head)
                printf("0\n");
            else
                printf("1\n");
        }
        else if(!strcmp(command, "front"))
        {
            if(tail - head)
                printf("%d\n", front());
            else
                printf("-1\n");
        }
        else
        {
            if(tail - head)
                printf("%d\n", back());
            else
                printf("-1\n");
        }
    }
}