#include <stdio.h>
#include <string.h>

const int MX = 1000005;
char dat[1000005];
int pre[1000005], nxt[1000005];
int unused = 1;

void insert(int addr, int num)
{
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1)
        pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr)
{
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1)
        pre[nxt[addr]] = pre[addr];
}

void traverse() {
    int cur = nxt[0];
    while (cur != -1)
    {
        printf("%c", dat[cur]);
        cur = nxt[cur];
    }
    printf("\n");
}

void reset()
{
    for (int i = 0; i < MX; i++)
    {
        pre[i] = -1;
        nxt[i] = -1;
    }
    unused = 1;
}

int main(void)
{
    int N;
    int len;
    int cursor;
    char L[1000005];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        cursor = 0;
        reset();
        scanf("%s", L);
        len = strlen(L);
        for (int j = 0; j < len; j++)
        {
            if (L[j] == '<')
            {
                if (pre[cursor] != -1)
                    cursor = pre[cursor];
            }
            else if (L[j] == '>')
            {
                if (nxt[cursor] != -1)
                    cursor = nxt[cursor];
            }
            else if (L[j] == '-')
            {
                if (pre[cursor] != -1)
                {
                    erase(cursor);
                    cursor = pre[cursor];
                }
            }
            else
            {
                insert(cursor, L[j]);
                if(nxt[cursor] != -1)
                    cursor = nxt[cursor];
            }
        }
        traverse();
    }
}