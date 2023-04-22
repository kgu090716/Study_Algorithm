#include <stdio.h>
#include <string.h>
int arr[100000];
int sum[2000001] = { 0, };
int main(void)
{
    int n, x;
    int cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if(x - arr[i] > 0)
        {
            if (sum[x - arr[i]] == 1)
                cnt++;
            sum[arr[i]] = 1;
        }
    }
    printf("%d", cnt);
    return 0;
}