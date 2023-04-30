#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const int MX = 1000005;
int dat[1000005], pre[1000005], nxt[1000005];
int unused = 1;
char arr[1000005] = "";
char itos[1000005] = "";

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
        printf("%d", dat[cur]);
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
    int N, k;
    int len;
    strcat(arr, "<");
    reset();
    scanf("%d %d", &N, &k);
    for (int i = 0; i < N; i++)
    {
        insert(i, i + 1);
    }
    int cur = 0;
    int i = 0;
    while (nxt[0] != -1)
    {
        cur = nxt[cur];
        i++;
        if (i == k)
        {
            //printf("%d ", dat[cur]);
            sprintf(itos, "%d", dat[cur]);
            strcat(arr, itos);
            strcat(arr, ", ");
            erase(cur);
            i = 0;
        }
        if (nxt[cur] == -1)
        {
            cur = 0;
        }
    }


    len = strlen(arr);
    arr[len - 2] = '\0';
    printf("%s>", arr);
    return 0;
}