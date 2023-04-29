#include <stdio.h>
const int MX = 1000005;
int dat[1000005 * 2 + 1];
int head = 1000005, tail = 1000005;

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
    return dat[tail - 1];
}

int search(int x) {
    for (int i = head; i < tail; i++)
    {
        if (x == dat[i])
        {
            return (i - head + 1);
        }
    }
}

void left()
{
    int temp;
    temp = front();
    pop_front();
    push_back(temp);
}

void right()
{
    int temp;
    temp = back();
    pop_back();
    push_front(temp);
}

int main(void)
{
    int N, M;
    int cnt = 0;
    scanf("%d %d", &N, &M);
    for (int i = 1; i <= N; i++)
        push_back(i);
    for (int i = 0; i < M; i++)
    {
        int input;
        scanf("%d", &input);
        while (front() != input)
        {
            if ((search(input) - 1) <= ((tail - head) / 2))
            {
                left();
                cnt++;
            }
            else
            {
                right();
                cnt++;
            }
        }
        pop_front();
    }
    printf("%d", cnt);
    return 0;
}