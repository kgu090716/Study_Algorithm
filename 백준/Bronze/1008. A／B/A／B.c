#include<stdio.h>

int main(void)
{
    double num1, num2;
    scanf("%lf %lf", &num1, &num2);
    printf("%.9f", num1 / num2);
    return 0;
}