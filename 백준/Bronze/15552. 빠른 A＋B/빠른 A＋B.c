#include<stdio.h>

int main(void)
{
    int i, T, num1, num2;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &num1, &num2);
        printf("%d\n", num1 + num2);
    }
    return 0;
}