#include <stdio.h>
#include <string.h>

int main(void)
{
    int N;
    char arr[1005];
    int len;
    int count = 0;
    int q;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", arr);
        len = strlen(arr);
        if (len > 2)
        {
            for (int j = 0; j < len - 1; j++)
            {
                if (arr[j] != arr[j + 1])
                {
                    for (q = 2 + j; q < len; q++)
                    {
                        if (arr[j] == arr[q])
                        {
                            count++;
                            j = len;
                            break;
                        }
                    }
                }
            }
        }
    }
    printf("%d", N - count);
    return 0;
}