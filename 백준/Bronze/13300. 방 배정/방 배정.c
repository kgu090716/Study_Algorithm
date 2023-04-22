#include <stdio.h>

int main(void)
{
    int N, k;
    int gender, grade;
    int arr[2][7] = { 0, };
    int cnt = 0;
    scanf("%d %d", &N, &k);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &gender, &grade);
        arr[gender][grade]++;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            cnt += arr[i][j] / k;
            if(arr[i][j] % k > 0)
                cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}