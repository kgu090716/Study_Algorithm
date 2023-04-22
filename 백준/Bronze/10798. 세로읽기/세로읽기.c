#include <stdio.h>
int main(void)
{
    char str[5][20];
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 20; j++)
            str[i][j] = -1;
    for(int i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
    }
    for(int i = 0; i < 20; i++)
        for(int j = 0; j < 5; j++)
            if(str[j][i] != -1 && str[j][i] != '\0')
                printf("%c", str[j][i]);
    return 0;
}