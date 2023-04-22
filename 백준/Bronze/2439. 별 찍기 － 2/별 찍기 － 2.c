#include<stdio.h>

int main(void)
{
    int num, i, j, z;
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (z = num - i - 1; z > 0; z--)
            printf(" ");
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}