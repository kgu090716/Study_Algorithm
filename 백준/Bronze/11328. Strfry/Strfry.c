#include <stdio.h>
#include <string.h>

int func1(char str1[], char str2[])
{
    int alphabet[26] = { 0, };
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i < len1; i++)
    {
        int idx = str1[i] - 'a';
        alphabet[idx]++;
    }
    for (int i = 0; i < len2; i++)
    {
        int idx = str2[i] - 'a';
        alphabet[idx]--;
    }
    int isPossible = 1;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] != 0)
            isPossible = 0;
    }
    return isPossible;
}

int main(void)
{
    int N;
    char str1[1002];
    char str2[1002];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s %s", str1, str2);
        if (func1(str1, str2))
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
    return 0;
}