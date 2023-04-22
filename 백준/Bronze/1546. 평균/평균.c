#include <stdio.h>
#include <string.h>

int main(void)
{
    int N;
    int arr[1000];
    int max = 0;
    int new_number;
    double sum = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        max = arr[i] > max ? arr[i] : max;
    }
    for (int i = 0; i < N; i++)
    {
        sum += (double)arr[i] / max * 100;
    }
    printf("%f", sum / N);
    return 0;
}
