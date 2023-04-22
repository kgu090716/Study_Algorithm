#include <stdio.h>
#include <string.h>

int main(void)
{
    int N;
    int number[10] = { 0, };
    int ans = 0;
    scanf("%d", &N);
    while (N > 0)
    {
        number[N % 10]++ ;
        N /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (i == 6 || i == 9)
            continue;
        ans = ans > number[i] ? ans : number[i];
    }
    ans = ans > (number[6] + number[9] + 1) / 2 ? ans : (number[6] + number[9] + 1) / 2;
    printf("%d", ans);
    return 0;
}