#include<stdio.h>

int main(void)
{
    int n, i;
    int res = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        res += i;
    }
    printf("%d", res);
    return 0;
}