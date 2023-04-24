#include <stdio.h>
int main(void)
{
    long long F1 = 0, F2 = 0, F3=1;
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        F1 = F2;
        F2 = F3;
        F3 = F1 + F2;
    }
    printf("%lld", F2);
}