#include<stdio.h>
#include<string.h>
const int MX = 10000005;
int dat[10000005];
int pos = 0;

void push(int x)
{
    dat[pos++] = x;
}

void pop() {
    pos--;
}

int top() {
    return dat[pos - 1];
}

int main(){
    int N;
    char command[10];
    int input;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", command);
        if (strcmp(command, "push") == 0)
        {
            scanf("%d", &input);
            push(input);
        }
        if (strcmp(command, "pop") == 0)
        {
            if (pos == 0)
                printf("-1\n");
            else
            {
                printf("%d\n", top());
                pop();
                
            }
        }
        if (strcmp(command, "size") == 0)
        {
            printf("%d\n", pos);
        }
        if (strcmp(command, "empty") == 0)
        {
            if (pos == 0)
                printf("1\n");
            else
                printf("0\n");
        }
        if (strcmp(command, "top") == 0)
        {
            if (pos == 0)
                printf("-1\n");
            else
                printf("%d\n", top());
        }
    }
    return 0;
}
