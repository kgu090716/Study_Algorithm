#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[102];
    int arr[26];
    int location;
    scanf("%s", S);
    for(int i = 0; i<26; i++)
    {
        arr[i] = -1;
    }

    for(int i = 0; i<strlen(S); i++)
    {
        location = S[i] - 'a';
        if(arr[location] == -1)
            arr[location] = i;
    }
    for(int i = 0; i<26; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
