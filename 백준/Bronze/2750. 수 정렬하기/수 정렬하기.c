#include <stdio.h>
// 버블정렬
int main(void)
{
    int N;
    int arr[1005];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i -1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = 0;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", arr[i]);
    }
}