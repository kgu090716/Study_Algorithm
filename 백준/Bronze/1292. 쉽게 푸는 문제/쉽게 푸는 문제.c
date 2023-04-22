#include <stdio.h>
int main(void)
{
    int a, b;
    int sum = 0;
    int cnt = 0;
    scanf("%d %d", &a, &b);
    for(int i = 1; cnt < b; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(cnt < b)
                sum += i;
            cnt++;
        }
    }
    cnt = 0;
    for(int i = 1; cnt < a-1; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(cnt < a-1)
                sum -= i;
            cnt++;
        }
    }
    printf("%d\n", sum);
}