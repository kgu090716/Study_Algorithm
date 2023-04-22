#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100];
    int len;
    scanf("%s", arr);
    len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] >= 'a' & arr[i] <= 'z')
        {
            arr[i] -= 'a' - 'A';
        }
        else if (arr[i] >= 'A' & arr[i] <= 'Z')
        {
            arr[i] += 'a' - 'A';
        }
    }
    printf("%s", arr);
    return 0;
}