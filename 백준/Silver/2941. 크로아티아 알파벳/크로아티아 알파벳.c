#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[101];
    int len;
    int cnt = 0;
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len - 1; i++)
    {
        if (str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-'))
            cnt++;
        if (str[i] == 'z' && str[i - 1] == 'd' && str[i + 1] == '=')
            cnt++;
        if (str[i] == 'd' && str[i + 1] == '-')
            cnt++;
        if (str[i] == 'l' && str[i + 1] == 'j')
            cnt++;
        if (str[i] == 'n' && str[i + 1] == 'j')
            cnt++;
        if (str[i] == 's' && str[i + 1] == '=')
            cnt++;
        if (str[i] == 'z' && str[i + 1] == '=')
            cnt++;
    }
    printf("%d", len - cnt);
    return 0;
}
