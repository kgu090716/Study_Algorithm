#include<stdio.h>

int main(void)
{
    int num1=1, num2=1;
    while (1)
    {
        scanf("%d %d", &num1, &num2);
        if (num1 == 0 && num2 == 0)
            break;
        else
            printf("%d\n", num1 + num2);
    }
    return 0;
}