#include<stdio.h>

int main(void)
{
    int N, X, i, num;
    scanf("%d %d", &N, &X);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if (num < X)
            printf("%d ", num);
    }
    return 0;
}