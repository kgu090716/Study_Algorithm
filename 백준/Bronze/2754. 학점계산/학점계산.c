#include <stdio.h>

int main(void)
{
    char grade[10];
    scanf("%s", grade);

    if(grade[0] == 'A')
    {
        if(grade[1] == '+')
            printf("4.3");
        if(grade[1] == '0')
            printf("4.0");
        if(grade[1] == '-')
            printf("3.7");
    }

    if(grade[0] == 'B')
    {
        if(grade[1] == '+')
            printf("3.3");
        if(grade[1] == '0')
            printf("3.0");
        if(grade[1] == '-')
            printf("2.7");
    }

    if(grade[0] == 'C')
    {
        if(grade[1] == '+')
            printf("2.3");
        if(grade[1] == '0')
            printf("2.0");
        if(grade[1] == '-')
            printf("1.7");
    }

    if(grade[0] == 'D')
    {
        if(grade[1] == '+')
            printf("1.3");
        if(grade[1] == '0')
            printf("1.0");
        if(grade[1] == '-')
            printf("0.7");
    }

    if(grade[0] == 'F')
        printf("0.0");
}