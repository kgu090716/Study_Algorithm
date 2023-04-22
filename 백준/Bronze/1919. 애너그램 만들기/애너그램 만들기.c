#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[1002];
    char str2[1002];
    int alphabet[26] = { 0, };
    int cnt=0;
    scanf("%s %s", str1, str2);
    for (int i = 0; str1[i] != '\0'; i++)
    {
        int idx = str1[i] - 'a';
        alphabet[idx]++;
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        int idx = str2[i] - 'a';
        alphabet[idx]--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] != 0)
        {
            if (alphabet[i] > 0)
                cnt+= alphabet[i];
            else
                cnt -= alphabet[i];
        }
    }
    printf("%d", cnt);
    return 0;
}